//202510303129
//2490249791@qq.com
//陶磊
#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    
    if (n < 2) {
        printf("密钥不安全，请重新输入");
        return 0;
    }
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("密钥不安全，请重新输入");
            scanf("%d",&n);
            
        }
    }
    
    printf("密钥安全，密码设置成功");
    return 0;
}
