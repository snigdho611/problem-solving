var argumentsLength = function(...args) {
    return args.length
};

const result = argumentsLength({}, null, "3");
console.log(result)