/**
 * @param {Function} fn
 * @return {Object}
 */
Array.prototype.groupBy = function(fn) {
    
    return this.reduce((accumulator, current)=>{
        const key = fn(current);
        if(!accumulator[key]){
            accumulator[key] = []
        }
        accumulator[key].push(current);
        return accumulator;
    }, {})
};

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */