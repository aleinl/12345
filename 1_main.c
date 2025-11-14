//202510303129
//2490249791@qq.com
//陶磊
#include <stdio.h>

int main() {
    int matrix[3][3];  // 定义3x3矩阵
    
    // 输入矩阵
    printf("请输入3x3矩阵的元素：\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // 输出矩阵
    printf("输出结果：\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");  // 每行输出后换行
    }
    
    return 0;
}
