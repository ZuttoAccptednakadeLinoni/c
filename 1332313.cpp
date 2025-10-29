
#include <iostream>
using namespace std;
 
int main() {
    int m = 849586, row = 233333, col = 123456;
    int64_t up = 0, down = 0;
 
    // 计算小三角形的上半部分
    for (int i = 1; i <= m; i++) {
        // i 代表小三角的边长
        up += (int64_t)i * (i + 1) / 2;
    }
 
    // 计算小三角形的下半部分
    for (int i = 1; m - i * 2 + 1 > 1; i++) {
        // i 代表小三角的边长
        // 删除的上三角计算方法:
        // 看看哪些三角形，底边是包含这条删除线段的
        // 底边左端点的可能性有 col 个，右端点的可能性有 row - col + 1 个
        // 两者相乘就是答案
        down +=(int64_t)(1+m-i*2+1)*(m-i*2+1)/2;
 
        // 计算删除的下三角形
 
    }
    
	int64_t removeUp = (int64_t)col * (row - col + 1);
    int64_t removeDown = 0;
    for (int j = 1; m - row - j >= 0; j++) {
        int left = max(col - j + 1, 1);
        int right = min(col, row - j + 1);
        if (left > right) break;
        removeDown += right - left + 1;
    }
 
        // 输出结果
        cout<<up + down<<endl;
    cout << up + down - removeUp - removeDown << endl;
    return 0;
}

