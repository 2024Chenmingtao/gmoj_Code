#include<stdio.h>  
#include<string.h>  
  
int a[100010];  
  
int maxsequence(int a[], int len)  
{  
    int maxsum, maxhere;  
    maxsum = maxhere = a[0]; // 初始最大和与当前和均为数组的第一个元素  
    for (int i = 1; i < len; i++) {  
        if (maxhere <= 0)  
            maxhere = a[i]; // 如果当前和不大于0，重新开始计算，以当前元素为起点  
        else  
            maxhere += a[i]; // 否则，累加当前元素到当前和  
        if (maxhere > maxsum) {  
            maxsum = maxhere; // 更新最大和  
        }  
    }  
    return maxsum;  
}  
  
int main()  
{  
    int i, n;  
    while (scanf("%d", &n) != EOF) { // 循环读取直到输入结束  
        for (i = 0; i < n; i++)  
            scanf("%d", &a[i]); // 读取数组元素  
        printf("%d\n", maxsequence(a, n)); // 输出最大子序列和  
    }  
    return 0; // 当所有输入处理完毕后返回0  
}