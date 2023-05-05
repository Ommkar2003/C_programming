#include<stdio.h>
#include<stdlib.h>
int main()
{
  system("cls");
  float p,c,m,b,mark_obt,per,avg;
  printf("enter marks:\n");
  scanf("%f%f%f%f",&p,&c,&m,&b);
  mark_obt=p+c+m+b;
  avg=mark_obt/4;
  per=mark_obt*100/400;
  if (mark_obt>=240)
  {
    printf("first class");
  }
  else if (mark_obt>=180)
  {
    printf("second class");
  }
  else if (mark_obt>=132)
  {
    printf("third class");
  }
  else if (mark_obt>=120)
  {
    printf("pass");
  }
  else{
    printf("fail");
  }
  return 0;
}