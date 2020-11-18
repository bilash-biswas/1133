#include<stdio.h>
int main()
{
    int a,b,x,y,i;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
    {
        x=a;
        y=b;
    }
    else if(b>a)
    {
        x=b;
        y=a;
    }
    for(i=y+1;i<x;i++)
    {
        if(i%5==2)
        {
             printf("%d\n",i);
        }
        if(i%5==3)
            {
                printf("%d\n",i);
            }
    }

    return 0;
}
