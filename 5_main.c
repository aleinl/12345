//202510303129
//2490249791@qq.com
//陶磊
#include <stdio.h>

int main() {
    int arr[5];
    
    // 读取前四个数
    for(int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 计算第五个数为前四个数的和
    arr[4] = 0;
    for(int i = 0; i < 4; i++) {
        arr[4] += arr[i];
    }
    
    // 输出结果
    for(int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
        if(i < 4) {
            printf(" ");
        }
    }
    
    return 0;
}
