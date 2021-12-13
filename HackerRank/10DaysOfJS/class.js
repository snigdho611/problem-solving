/*
 * Implement a Polygon class with the following properties:
 * 1. A constructor that takes an array of integer side lengths.
 * 2. A 'perimeter' method that returns the sum of the Polygon's side lengths.
 */

class Polygon {
    constructor(arr){
        this.arr = arr
    }

    perimeter(){
        let total = 0;
        for(let i=0;i<this.arr.length;i++){
            total = total + this.arr[i]
        }
        return total;
    }
}

let abc = new Polygon([1,2,3, 5]) //Enter your array here
abc.perimeter()