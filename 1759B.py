t=int(input())
for _ in range(t):
    L1=input().split()
    m=int(L1[0])
    s=int(L1[1])
    L=input().split()
    sum=0
    max=int(L[0])
    f=[""]*2501
    f[0]=0
    for i in range(1,2500):
        f[i]=f[i-1]+i
    for i in range(len(L)):
        sum=sum+int(L[i])
    if s+sum in f:
        print("YES")
    else:
        print("NO")
    
