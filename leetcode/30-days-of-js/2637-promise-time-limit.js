/**
 * @param {Function} fn
 * @param {number} t
 * @return {Function}
 */
var timeLimit = function(fn, t) {
    // console.log(fn) 
    return async function(...args) {
        return Promise.race([
            fn(...args),
            new Promise((_, reject)=>{
                setTimeout(()=>{
                    reject("Time Limit Exceeded")
                }, t)
            })
        ])
    }
};

/**
 * const limited = timeLimit((t) => new Promise(res => setTimeout(res, t)), 100);
 * limited(150).catch(console.log) // "Time Limit Exceeded" at t=100ms
 */