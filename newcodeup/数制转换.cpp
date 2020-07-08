//
// Filename: 数制转换.cpp
// Author: Zequn Wu
// Date: 8/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000579&pid=1
//
#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <set>
#include <string>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>
#include <cstdbool>
#include <iomanip>

using namespace std;

const double PI = acos(-1.0);
const int INF = (1 << 30) - 1;
const double eps = 1e-8;

#define Equ(a, b) ((fabs((a)-(b)))<(eps))
#define More(a, b) (((a)-(b))>(eps))
#define Less(a, b) (((a)-(b))<(-eps))
#define MoreEqu(a, b) (((a)-(b))>(-eps))
#define LessEqu(a, b) (((a)-(b))<(eps))


int main() {
    freopen("../in.txt", "r", stdin);
    int a, b;
    char n[100];
    while (scanf("%d %s %d", &a, n, &b) != EOF) {
        // a to 10
        long ans = 0, num = 0, product = 1;
        int len = strlen(n);
        for (int i = len - 1; i >= 0; --i) {
            if (n[i] >= '0' && n[i] <= '9') {
                num = n[i] - '0';
            } else if (n[i] >= 'a' && n[i] <= 'f') {
                num = n[i] - 'a' + 10;
            } else if (n[i] >= 'A' && n[i] <= 'F') {
                num = n[i] - 'A' + 10;
            }
            ans += num * product;
            product *= a;
        }
        // 10 to b
        char output[100] = {0};
        int idx = 0;
        num = 0;
        do {
            num = ans % b;
            if (num >= 0 && num <= 9) {
                output[idx++] = '0' + num;
            } else if (num >= 10 && num <= 15) {
                output[idx++] = 'A' + num - 10;
            }
            ans /= b;
        } while (ans != 0);
        for (int j = idx - 1; j >= 0; --j) {
            printf("%c", output[j]);
        }
        printf("\n");
    }
    return 0;
}