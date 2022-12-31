t=int(input())
for _ in range(t):
    n=input()
    i=0
    if len(n)==1:
        if (n=="Y" or n=="e" or n=="s"):
            print("YES")
        else:
            print("NO")
    else:
        while(i<len(n)-1):
            if n[i]=="Y":
                if n[i+1]!="e":
                    print("NO")
                    break
            elif n[i]=="e":
                if n[i+1]!="s":
                    print("NO")
                    break
            elif n[i]=="s":
                if n[i+1]!="Y":
                    print("NO")
                    break
            else:
                print("NO")
                break
            i=i+1
        if i==len(n)-1:
            print("YES")
        
    





