n = int(input())
ref = 'abcdefghijklmnopqrstuvwxyz'
for _ in range(n):
    str = input()
    x = 1
    for i in str:
        if(i not in ref):
            x = "Invalid input. Please refer to the question description."
            exit()
        x*= ord(i) - 96
    print(x)
