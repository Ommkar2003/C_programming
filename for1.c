#include <stdio.h>
#include <stdlib.h>
int main()
{
    system ("cls");
    float i,s=0; 
    for ( i = 130; i >= 0 ; i--)
    {
     s=s+i;
    }
    printf("the additional value is %.2f",s);
    return 0;
}