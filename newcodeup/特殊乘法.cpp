//
// Filename: 特殊乘法.cpp
// Author: Zequn Wu
// Date: 1/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000575&pid=2
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
    while (scanf("%d %d", &a, &b) != EOF) {
        char str1[20], str2[20];
        sprintf(str1, "%d", a);
        sprintf(str2, "%d", b);
        int sum = 0;
        for (int i = 0; i < strlen(str1); ++i) {
            for (int j = 0; j < strlen(str2); ++j) {
                sum += (str1[i] - '0') * (str2[j] - '0');
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}