/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
const isEmpty = function(obj) {
    if(Object.keys(obj).length === 0){
        return true
    } else if(Array.isArray(obj) && obj.length === 0){
        return true
    }
    return false
};

console.log(isEmpty([null, false, 0]));