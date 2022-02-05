for _ in range(int(input())):
    a,b,c,d,e = map(int,input().split())
    list1 = [a,b]
    for i in range(2,e):
        if(i%2==0):
            list1.append(list1[i-2] + c)
        else:
            list1.append(list1[i-2] * d)
    for i in list1:  print(i,end = " ")

    

