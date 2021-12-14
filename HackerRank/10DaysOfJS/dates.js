// The days of the week are: "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
function getDayName(dateString) {
    let dayName;
    // Write your code here
    let date = new Date(dateString)
    switch(date.getDay()){
        case 0:
            dayName = "Sunday"
            break
        case 1:
            dayName = "Monday"
            break
        case 2:
            dayName = "Tuesday"
            break
        case 3:
            dayName = "Wednesday"
            break
        case 4:
            dayName = "Thursday"
            break
        case 5:
            dayName = "Friday"
            break
        case 6:
            dayName = "Saturday"
    }
    return dayName;
}

// let x = new Date("10/12/2009")
// let day = getDayName("10/12/2009")
console.log(getDayName("10/11/2009"))