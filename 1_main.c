//202510303129
//2490249791@qq.com
//陶磊
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    int *p = &a;
    *p += 10;
    
    printf("%d,%d", a, *p);
    return 0;
}
