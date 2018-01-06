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


int main() {
    int m;
    while (scanf("%d", &m) != -1) {
        int j[m][m];
        int r[2 * m + 1];
        for (int i = 0; i < m; ++i) {
            for (int k = 0; k < m; ++k) {
                scanf("%d", &j[i][k]);
            }
        }
        int sum = 0, index = 0;
        for (int l = 0; l < m; ++l) {
            for (int i = 0; i < m; ++i) {
                sum += j[l][i];
            }
            r[index++] = sum;
            sum = 0;
        }
        for (int l = 0; l < m; ++l) {
            for (int i = 0; i < m; ++i) {
                sum += j[i][l];
            }
            r[index++] = sum;
            sum = 0;
        }
        sum = 0;
        for (int n = 0; n < m; ++n) {
            sum += j[n][n];
        }
        r[index++] = sum;
        sum = 0;
        for (int n = 0; n < m; ++n) {
            sum += j[n][m - 1 - n];
        }
        r[index++] = sum;
        sort(r, r + index);
        for (int i1 = index - 1; i1 >= 0; --i1) {
            printf("%d", r[i1]);
            if (i1)printf(" ");
        }
        printf("\n");
    }
    return 0;
}