t=int(input())
s=""
op=['+','-','*','/','.']


for i in range(t):
    a=input().split(" ")
    for j in range(5):
        for k in range(5):
            s=""
            if j==k:
                continue;
            s+=a[0]+op[j]+a[1]+op[k]+a[2]
            if eval(s)==int(a[3]):
                print(s+"="+str(a[3]))
