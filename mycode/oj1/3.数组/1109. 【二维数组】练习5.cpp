#include <iostream>  
  
using namespace std;  
  
int main() {  
    int M;  
    cin >> M;  
  
    // 使用静态数组存储输入的整数  
    int a[100]; // 假设M不会超过100，或者可以根据实际情况动态分配数组  
    for (int i = 0; i < M; ++i) {  
        cin >> a[i];  
    }  
    // 构建并输出矩阵  
    for (int i = 0; i < M; ++i) {  
        for (int j = 0; j < M; ++j) {  
            // 计算当前位置的值  
            int value = a[(i + j) % M];  
            cout << value << " ";  
        }  
        cout << endl;  
    }  
    return 0;  
}