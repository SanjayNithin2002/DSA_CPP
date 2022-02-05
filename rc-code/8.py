import re
n= int(input())
list1 = list(map(int,input().split()))
for x in range(0,n):
    if len(x)==1 or len(re.findall(x[0],x)) == len(x):
        print("YES")
    else:
         a=[]
         st=" "
         a.append(x[0])
         for j in range(1,len(x)):
              if x[j] in a:
                a.append(x[j])
              else:
                 st=x[j]
         l=x.rfind(st)
         f=x.index(st)
         if(x[0:f]==x[l+1:len(x)]):
                print("YES")
         else:
                print("NO")