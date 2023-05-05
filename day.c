#include<stdio.h>
int main(){
    int day;
    printf("enter your day name");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("it is sunday");
        break;
    
    default:
        printf("invalid input");
        break;
    }
    return 0;
}