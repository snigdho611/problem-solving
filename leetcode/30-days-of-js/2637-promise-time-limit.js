/**
 * @param {Function} fn
 * @param {number} t
 * @return {Function}
 */
var timeLimit = function (fn, t) {
    return async function (...args) {
        console.log(...args)
        // try {
        //     const res = await fn
        // } catch (error) {
            
        // }
    };
};

// const fn = async (n) => {
//     await new Promise((res) => setTimeout(res, 100));
//     return n * n;
// };

// const inputs = [5];
// const t = 50;

const limited = timeLimit((t) => new Promise((resolve) => setTimeout(reject, t)), 100);
limited(150).catch(console.log); // "Time Limit Exceeded" at t=100ms
