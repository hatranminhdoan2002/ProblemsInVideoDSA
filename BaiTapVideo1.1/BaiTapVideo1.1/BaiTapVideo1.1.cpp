// BaiTapVideo1.1.cpp : Duyệt 2 phần tử trên 1 mảng 1 chiều
//

#include <iostream>
#include <vector>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int main()
{
    FILE* fp;
    freopen_s(&fp,"baitapvideo1.1.inp", "r", stdin);
    freopen_s(&fp,"baitapvideo1.1.out", "w", stdout);
    int n,i,j;
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            cout << a[i] << a[j] << " ";
        }
    }
    
}

