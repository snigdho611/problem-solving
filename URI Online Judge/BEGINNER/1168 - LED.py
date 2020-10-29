test = int(input())

for i in range(test):
    led = 0
    led_input = input()
    for j in led_input:
        if j == '0':
            led += 6
        elif j == '1':
            led += 2
        elif j == '2':
            led += 5
        elif j == '3':
            led += 5
        elif j == '4':
            led += 4
        elif j == '5':
            led += 5
        elif j == '6':
            led += 6
        elif j == '7':
            led += 3
        elif j == '8':
            led += 7
        elif j == '9':
            led += 6
    print(str(led) +  " leds")
