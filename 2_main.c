//202510303129
//2490249791@qq.com
//陶磊
#include<stdio.h>
int main()
{int a,b,c;
    int n;
    for (int n = 100; n < 999; n++)
    {a=n/100;
        b=n/10%10;
        c=n%10;
        if (a*a*a+b*b*b+c*c*c==n)
        {
            printf("%d ",n);    
        }       
    }
        
}
