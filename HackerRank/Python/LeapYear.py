def leap(value):
    if value % 400 == 0:
        return True
    elif value % 100 == 0:
        return False
    elif value % 4 == 0:
        return True
    else:
        return False
        
print(leap(int(input())))