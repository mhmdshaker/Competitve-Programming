t=int(input())
for i in  range (t):
    n=int(input())
    print(int((((n)*(n+1)*(2*n+1)//3 + (n-1)*(n)//2 - n*n)*2022)%(10**9+7)))
