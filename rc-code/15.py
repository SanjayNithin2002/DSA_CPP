for _ in range(int(input())):
    x = list(map(int,input().split()))
    ans = x[1]
    for i in x[2:]:
        ans = ans ^ i
    print(ans)