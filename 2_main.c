//202510303129
//2490249791@qq.com
//陶磊
#include <stdio.h>

int main() {
    int arr[5];
    
   
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    int *p = arr;
    for(int i = 0; i < 5; i++) {
        *(p + i) *= 2;
    }
    
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
