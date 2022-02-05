arr = list(map(int,input().split()))
odd,even = [arr[i] for i in range(0,len(arr),2)],[arr[i] for i in range(1,len(arr),2)]
odd.sort()
even.sort(reverse=True)
print(odd + even)
