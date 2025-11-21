//202510303129
//2490249791@qq.com
//陶磊
#include <stdio.h>

void bubbleSort(int *arr, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
           
            if (*(arr + j) > *(arr + j + 1)) {
               
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[10];
    int i;
    
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
   
    bubbleSort(arr, 10);
    
    
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
