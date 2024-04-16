class EventEmitter {
    constructor() {
        this.events = new Map();
      }
    
      subscribe(event, cb) {
        if (!this.events.has(event)) {
          this.events.set(event, []);
        }
    
        const listeners = this.events.get(event);
        listeners.push(cb);
    
        return {
          unsubscribe: () => {
            const index = listeners.indexOf(cb);
            if (index !== -1) {
              listeners.splice(index, 1);
            }
          }
        };
      }
    
      emit(event, args = []) {
        if (!this.events.has(event)) {
          return [];
        }
    
        const listeners = this.events.get(event);
        const results = [];
    
        for (const listener of listeners) {
          results.push(listener(...args));
        }
    
        return results;
      }
}

/**
 * const emitter = new EventEmitter();
 *
 * // Subscribe to the onClick event with onClickCallback
 * function onClickCallback() { return 99 }
 * const sub = emitter.subscribe('onClick', onClickCallback);
 *
 * emitter.emit('onClick'); // [99]
 * sub.unsubscribe(); // undefined
 * emitter.emit('onClick'); // []
 */