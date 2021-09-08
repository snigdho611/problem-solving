function rangeOfNumbers(startNum, endNum) {
    if(startNum > endNum)
    {
        return []
    }
    else
    {
        var arr = rangeOfNumbers(startNum+1, endNum);
        arr.unshift(startNum)
        return arr
    }
};

console.log(rangeOfNumbers(6,9))