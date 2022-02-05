n = int(input())
arr = list()
for i in range(n):
    a,b = map(int,input().split())
    arr.append(pow(a,b))
for i in range(n):
    print(arr[i])