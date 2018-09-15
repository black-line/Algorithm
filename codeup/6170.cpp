/*
 * Author: Zequn Wu
 * date: 9/15/18 4:03 PM
 */

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

int countDx(char a[], int da) {
    int num = 0;
    for (int i = 0; i < strlen(a); ++i) {
        if (a[i] - '0' == da)num++;
    }
    return num;
}

int calPx(int na, int da) {
    int result = 0;
    for (int i = 0; i < na; ++i) {
        result = result * 10 + da;
    }
    return result;
}

int main() {
    freopen("../in.txt", "r", stdin);
    int da, db;
    char a[20], b[20];
    while (scanf("%s%d%s%d", a, &da, b, &db) != EOF) {
        int na, nb;
        na = countDx(a, da);
        nb = countDx(b, db);
        int pa, pb;
        pa = calPx(na, da);
        pb = calPx(nb, db);
        printf("%d\n", pa + pb);
    }
    return 0;
}
