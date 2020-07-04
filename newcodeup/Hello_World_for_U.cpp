//
// Filename: Hello_World_for_U.cpp
// Author: Zequn Wu
// Date: 4/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000577&pid=1
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
    char str[100], n2str[100];
    while (scanf("%s", str) != EOF) {
        int n1, n2, n3, len = strlen(str);
        n1 = n3 = (len + 2) / 3;
        n2 = len + 2 - n1 - n3;
        for (int i = 0; i < n1 - 1; ++i) {
            printf("%c", str[i]);
            for (int j = 0; j < n2 - 2; ++j) {
                printf(" ");
            }
            printf("%c", str[len - 1 - i]);
            printf("\n");
        }
        for (int k = 0; k < n2; ++k) {
            printf("%c", str[n1 - 1 + k]);
        }
        printf("\n");
    }
    return 0;
}