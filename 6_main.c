//202510303129
//2490249791@qq.com
//陶磊
#include <stdio.h>

int main() {
    int arr[5];
    int count = 0;
    
    // 读取5个偶数
    while(count < 5) {
        int num;
        scanf("%d", &num);
        
        // 如果是偶数，则存入数组
        if(num % 2 == 0) {
            arr[count] = num;
            count++;
        }
        // 如果是奇数，则忽略，继续等待输入
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
