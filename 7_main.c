//202510303129
//2490249791@qq.com
//陶磊
#include <stdio.h>

int main() {
    int arr[5];
    
    // 1. 输入前4位学生学号
    for(int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 2. 将数组元素整体后移一位
    for(int i = 3; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    
    // 3. 在空出的第1位补0
    arr[0] = 0;
    
    // 4. 输出更新后的完整提交记录数组
    for(int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
        if(i < 4) {
            printf(" ");
        }
    }
    
    return 0;
}
