//202510303129
//2490249791@qq.com
//陶磊
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    swap(&x, &y);
    
    printf("%d %d", x, y);
    return 0;
}
