from array import array


arr = list()
for _ in range(int(input())):
    y = int(input())
    if(y > 42069): arr.append("Snoop Dogg")
    elif(y == 42069): arr.append("I am being Trolled")
    else: arr.append("Martha Stewart")
for i in arr:
    print(i)