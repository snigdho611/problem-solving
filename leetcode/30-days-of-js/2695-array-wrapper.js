class ArrayWrapper {
    constructor(nums) {
      this.nums = nums;
    }
  
    valueOf() {
      let sum = 0;
      for (let i = 0; i < this.nums.length; i++) {
        sum += this.nums[i];
      }
      return sum;
    }
  
    toString() {
      let str = '[';
      for (let i = 0; i < this.nums.length; i++) {
        str += this.nums[i];
        if (i !== this.nums.length - 1) {
          str += ',';
        }
      }
      str += ']';
      return str;
    }
  }