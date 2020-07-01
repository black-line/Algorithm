//
// Filename: 部分A+B.cpp
// Author: Zequn Wu
// Date: 1/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000575&pid=7
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
    char stra[20], strb[20];
    int da, db;
    while (scanf("%s %d %s %d", stra, &da, strb, &db) != EOF) {
        double pa = 0, pb = 0;
        int num = 0;
        for (int i = 0; i < strlen(stra); ++i) {
            if (stra[i] == da + '0') {
                pa += da * pow(10, num++);
            }
        }
        num = 0;
        for (int i = 0; i < strlen(strb); ++i) {
            if (strb[i] == db + '0') {
                pb += db * pow(10, num++);
            }
        }
        printf("%.0f\n", pa + pb);
    }
    return 0;
}