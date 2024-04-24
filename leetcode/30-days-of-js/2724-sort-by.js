/**
 * @param {Array} arr
 * @param {Function} fn
 * @return {Array}
 */
var sortBy = function(arr, fn) {
    return arr.sort((element1, element2)=>{
        return fn(element1) - fn(element2);
    })
};

// const arr = [{"x": 1}, {"x": 0}, {"x": -1}], fn = (d) => d.x
// const arr = [5, 4, 1, 2, 3], fn = (x) => x
const arr = [[3, 4], [5, 2], [10, 1]], fn = (x) => x[1]
const ok = sortBy(arr, fn);
console.log(ok)