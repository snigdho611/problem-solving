function countdown(n) {
    if(n<1)
    {
        return [];
    }
    if (n == 1) {
      return [1];
    } else {
      const countArray = countdown(n - 1);
      countArray.unshift(n);
      return countArray;
    }
}
  
console.log(countdown(5));
// console.log(countdown(5));
