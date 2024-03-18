var compose = function (functions) {
    if (functions.length > 0) {
        return function (x) {
            let result = functions[functions.length - 1](x);
            for (let i = functions.length - 2; i >= 0; i--) {
                result = functions[i](result);
            }
            return result;
        };
    } else {
        return function (x) {
            return x;
        };
    }
};

const x = 4;
const result = compose([(x) => x + 1, (x) => x * x, (x) => 2 * x]);
console.log(result);
