a=int(input())
b=int(input())
if a>b:
    x=b
    y=a
elif b>a:
    x=a
    y=b
for i in range(x+1,y):
    if(i%5==2):
        print(i)
    if(i%5==3):
        print(i)
