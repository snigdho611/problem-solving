class Rectangle {
    constructor(w, h) {
        this.w = w;
        this.h = h;
    }
}

/*
 *  Write code that adds an 'area' method to the Rectangle class' prototype
 */
Rectangle.prototype.area = function() {
    return this.w*this.h
}

/*
 * Create a Square class that inherits from Rectangle and implement its class constructor
 */

class Square extends Rectangle{
    constructor(w){
        super(w,w)
    }
}


let x = new Square(4) //Enter values here
let y = new Rectangle(5,6)
console.log(x.area())
console.log(y.area())