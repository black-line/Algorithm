//
// Created by jessy on 01/07/18.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
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
    //freopen("..\\in.txt", "r", stdin);
    int n, m;
    while (scanf("%d%d", &n, &m) != -1) {
        int book[300] = {0};
        int stu[300] = {0};
        for (int i = 1; i <= n; ++i) {
            int bookNum;
            scanf("%d", &bookNum);
            stu[i] = bookNum;
            book[bookNum]++;
        }
        for (int j = 1; j <= n; ++j) {
            if (book[stu[j]] == 1) {
                printf("BeiJu\n");
            } else {
                printf("%d\n", book[stu[j]] - 1);
            }
        }
    }
    return 0;
}