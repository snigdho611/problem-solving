function regexVar() {
  const re = /^([aeiou]).+\1$/;
  return re;
}

const re = /^([aeiou]).+\1$/;
const word = "ebbvvca";
if (word.match(re)) {
  console.log("ok");
}
