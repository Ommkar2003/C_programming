#include<stdio.h>
int main()
{
int s,c,p,l;
printf("enter selling and cost price : ");
scanf("%d%d",&s,&c);
    if (s>c)
    {
        p=s-c;
        printf("profit is %d",p);
    }
    else if (c>s)
    {
        l=c-s;
        printf("loss is %d",l);
    }
    else {
        printf("no profit no loss");

    }
return 0;
}