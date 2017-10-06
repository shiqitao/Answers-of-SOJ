a = input()
if len(a) != 4:
    print("Error!",end='')
else:
    for i in range(len(a)):
        print(chr(ord(a[i]) + 29),end='')