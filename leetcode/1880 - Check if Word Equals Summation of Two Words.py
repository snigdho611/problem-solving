
# The letter value of a letter is its position in the alphabet starting from 0 (i.e. 'a' -> 0, 'b' -> 1, 'c' -> 2, etc.).

# The numerical value of some string of lowercase English letters s is the concatenation of the letter values of each letter in s, which is then converted into an integer.

# For example, if s = "acb", we concatenate each letter's letter value, resulting in "021". After converting it, we get 21.
# You are given three strings firstWord, secondWord, and targetWord, each consisting of lowercase English letters 'a' through 'j' inclusive.

# Return true if the summation of the numerical values of firstWord and secondWord equals the numerical value of targetWord, or false otherwise.

class Solution:
    def isSumEqual(self, firstWord: str, secondWord: str, targetWord: str) -> bool:
        first, second, third = "", "", ""
        for i in firstWord:
            first = first + str(ord(i)-97)

        for i in secondWord:
            second = second + str(ord(i)-97)

        for i in targetWord:
            third = third + str(ord(i)-97)

        first, second, third = int(first), int(second), int(third)

        if first + second == third:
            return True
        else:
            return False

x = Solution()
result = x.isSumEqual("aaa", "a", "aaaa");
if result:
    print("Done")
else:
    print("Failed")


