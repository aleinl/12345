//202510303129
//2490249791@qq.com
//陶磊
#include <stdio.h>
#include <stdlib.h>

int main() {
   
    int *ptr = (int*)malloc(5 * sizeof(int));
    
  
    for(int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }
   
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    
    
    free(ptr);
    
    return 0;
}
