//
// Created by jessy on 01/06/18.
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

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int a[10];
    while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6] >> a[7] >> a[8] >> a[9]) {
        int j[10], o[10];
        int jnum = 0, onum = 0;
        for (int i = 0; i < 10; ++i) {
            if (a[i] % 2) {
                j[jnum++] = a[i];
            } else {
                o[onum++] = a[i];
            }
        }
        sort(j, j + jnum, cmp);
        sort(o, o + onum);
        int r[10];
        for (int l = 0; l < jnum; ++l) {
            r[l] = j[l];
        }
        for (int l = 0; l < onum; ++l) {
            r[l + jnum] = o[l];
        }
        for (int k = 0; k < 10; ++k) {
            printf("%d", r[k]);
            if (k < 9)printf(" ");
        }
        printf("\n");
    }
    return 0;
}