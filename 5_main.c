//202510303129
//2490249791@qq.com
//陶磊
#include <stdio.h>

#include <stdio.h>

void shiftArray(int *ptr_arr, int len) {
    
    for(int i = len - 2; i >= 0; i--) {
        *(ptr_arr + i + 1) = *(ptr_arr + i);
    }
    
    *ptr_arr = 0;
}

int main() {
    int arr[5];
    
    
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    shiftArray(arr, 5);
   
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
