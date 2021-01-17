while True:
    try:
        inp = int(input())
        if inp > 0:
            print("vai ter duas!")
        else:
            print("vai ter copa!")
    except EOFError:
        break    

