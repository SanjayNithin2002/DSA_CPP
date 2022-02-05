for i in range(int(input())):
    n = int
    l=[]
    for j in range(0,n+1):
       l.append([])
       ind=j+1
       for i in range(0,n+1):
           l[j].append(ind)
           ind+=1
           if ind>n+1:
             ind-=n+1
       back=n-1
       for i in range(0,n):
             l[j].append(l[j][back])
             back-=1
    for k in range(n-1,-1,-1):
        l.append(list(l[k]))
    for i in range(0,len(l)):
       for j in range(0,len(l[i])):
           print(l[i][j],end=" ")
       print()
    print()