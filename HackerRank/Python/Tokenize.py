import re 

def isValid(input_string):
    first_char = input_string[0]
    if(re.search('[a-zA-Z]', first_char) == None):
        print("Invalid: Starts with invalid character")
        return False
    else:
        return True

def Tokenize(input_string):
    inputString = input_string.split()

    idCount = 1
    for index_ in inputString:
        if index_ in ['+', '-', '/', '*']:
            print("(", index_, ")", end=' ')
        if re.search('[a-zA-Z]', index_) != None:
            print("( id,", idCount, ")", end=' ')
            idCount += 1
        if index_.isnumeric() == True:
            print("(", index_, ")")
        
string = input("Enter a string: ")

if isValid(string) == True:
    Tokenize(string)
else:
    print("End program")
