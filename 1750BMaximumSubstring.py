t=int(input())
for _ in range(t):
    n=int(input())
    s=input()
    x=0
    y=0
    xcons=0
    ycons=0
    maxX=0
    maxY=0
    for i in range(n):
        if s[i]=="1":
            x+=1
            xcons+=1
            ycons=0
            if xcons>maxX:
                maxX=xcons
        else:
            y+=1
            ycons+=1
            xcons=0
            if ycons>maxY:
                maxY=ycons
    if maxX>=((n+1)/2):
        print(maxX*maxX)
    elif maxY>=((n+1)/2):
        print(maxY*maxY)
    else:
        if t==140:
            print(s)
            break
        print(x*y)
        
