# Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

# Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

class Solution:
    def reverse(self, x: int) -> int:    #9646324351
        string = ""
        if x >= 0:
            string = str(x)[::-1]
            #print(string)
            integer = int(string)
        else:
            string = str(x)[1:]
            string = string[::-1]
            integer = int(string)
            string = "-"+str(integer)

        if -2147483648 <= int(string) <= 2147483648-1:
            return int(string)
        else:
            return 0

x = Solution()
print(x.reverse(1534236469))
