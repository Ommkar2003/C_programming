#include<stdio.h>
int main(){
    int a,b,ch;
    printf("1:\tAdd\n2:\tSubs\n3:\tMulti\n4:\tDiv\nEnter your choice: "); /* enter your operator (+,-,*,/) */
    scanf("%d",&ch);
    printf("Enter two no: ");
    scanf("%d%d",&a,&b);
    switch (ch)
    {
    case 1: /* case '+': */
        printf("%d\n",a+b);
        break;
    case 2:
        printf("%d\n",a-b);
        break;
    case 3:
        printf("%d\n",a*b);
        break;
    case 4:
        printf("%d\n",a/b);
        break;
    default:
       printf("Invalid input!");
    }
    return 0;
}