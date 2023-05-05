#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    float value,c,m,k; 
    char unit;
    printf("enter your choice:\nA:cm to m\nB:m to cm\nC:m to km\n");
    scanf("%c",&unit);
    printf("enter value");
    scanf("%f",&value);
    switch (unit)
    {
    case 'A':
     c = value/100;
     printf("the value in cm is %.2fm",c);
        break;
    case 'B':
    m = value*100;
    printf("the value in m is %.2fcm",m);
    break;
    case 'C':
    k=value/1000;
    printf("the value in k is %.2fkm",k);
    break;
    default:
    printf("invalid");
        break;
    }
    return 0;
}