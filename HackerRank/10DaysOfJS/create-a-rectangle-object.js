/*
 * Complete the Rectangle function
 */
function Rectangle(a, b) {
    return {
        length: a,
        width: b,
        perimeter: 2*(a+b),
        area: a*b
    }
}

console.log(Rectangle(4,5))