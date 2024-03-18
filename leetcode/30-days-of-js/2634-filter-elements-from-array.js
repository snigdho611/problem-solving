var filter = function (arr, fn) {
    let i = 0;
    const Arr = [];
    while (i < arr.length) {
        if (fn(arr[i], i)) {
            Arr.push(arr[i]);
        }
        i++;
    }
    return Arr;
};

const greaterThan10 = (n) => {
    return n > 10;
};

const result = filter([1, 2, 3, 4, 50, 10, 20, 100], greaterThan10);
console.log(result);
