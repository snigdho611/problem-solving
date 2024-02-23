/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    const original = init;
    let i = 0;
    return {
        increment: () => init + ++i,
        decrement: () => init + --i,
        reset: () => {
            i = 0;
            return init;
        }
    }
};

const counter = createCounter(0)
console.log(counter.increment()); 
console.log(counter.increment()); 
console.log(counter.decrement()); 
console.log(counter.decrement()); 
console.log(counter.reset()); 