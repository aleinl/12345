#202510303129
#2490249791@qq.com
#陶磊
#include<stdio.h>
 int main()
 {  int a;
  int c;
  int b;
  int i=100;
  while (i<=999)
  {
    a=i/100;
    b= i/10%10;
    c=i%100%10;
    if (a*a*a+b*b*b+c*c*c==i)
    {
      printf("%d ",i);
    }
    i++;
  }
  return 0;

 }
