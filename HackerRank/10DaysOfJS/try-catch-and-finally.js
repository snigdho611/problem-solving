/*
 * Complete the reverseString function
 * Use console.log() to print to stdout.
 */
function reverseString(s) {
    try{
        let arr = []
        let result = []
        arr = s.split('')
        for(let i=arr.length-1;i>=0;i--){
            result.push(arr[i])
        }
        console.log(result.join(''))
    }
    catch(err){
        console.log('s.split is not a function');
        console.log(s)
    }
}

let val = '12345' //Enter your input here

reverseString(val)