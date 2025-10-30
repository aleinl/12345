//202510303129
//2490249791@qq.com
//陶磊
#include<stdio.h>
 int main()
 {
    int n=0;
    scanf("%d",&n);
    while (n>50||n%2==0||n%3==0||n%5==0)
    {
      
     printf("密钥不安全，请重新输入");
     scanf("%d",&n);
    }
    printf("密钥安全，密码设置成功");
    
    return 0;
 }
