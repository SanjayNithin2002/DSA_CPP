n = int(input())
for i in range(n):
    a,b = map(sorted,input().split())
    print("YES" if a==b else "NO")
