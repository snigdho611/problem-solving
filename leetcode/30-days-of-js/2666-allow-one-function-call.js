/**
 * @param {Function} fn
 * @return {Function}
 */
var once = function(fn) {
    let called = false;

    return function(...args){
    if(!called){
            called = true;
            // console.log(args)
            return fn(...args)
        } else{
            return undefined;
        }
    }
    
};

const func = (a,b,c) => (a+b+c)
let onceFn = once(func);
const result1 = onceFn(1,2,3)
const result2 = onceFn(3,5,6)

console.log(result1, result2)


/**
 * let fn = (a,b,c) => (a + b + c)
 * let onceFn = once(fn)
 *
 * onceFn(1,2,3); // 6
 * onceFn(2,3,6); // returns undefined without calling fn
 */
