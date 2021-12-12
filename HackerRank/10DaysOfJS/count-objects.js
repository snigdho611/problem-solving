/*
 * Return a count of the total number of objects 'o' satisfying o.x == o.y.
 * 
 * Parameter(s):
 * objects: an array of objects with integer properties 'x' and 'y'
 */
function getCount(objects) {
    let count = 0
    objects.forEach(element =>{
        if(element.x == element.y){
            count++;
        } else{

        }
    })
    return count;
}

//Enter your object here
let obj = [
    {
        x: 1,
        y: 2
    },
    {
        x: 2,
        y: 3
    },
    {
        x: 4,
        y: 4
    },
    {
        x: 6,
        y: 6
    },
    {
        x: 7,
        y: 8
    }
] 

console.log(getCount(obj))