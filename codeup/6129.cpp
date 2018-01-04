//
// Created by jessy on 01/04/18.
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
    int T;
    while (scanf("%d", &T) != -1) {
        double a[5] = {0}, count1 = 0, count2 = 0;
        for (int i = 0; i < T; ++i) {
            int b;
            scanf("%d", &b);
            switch (b % 5) {
                case 0:
                    if (b % 2 == 0) a[0] += b;
                    break;
                case 1:
                    a[1] += int(pow(-1, count2)) * b;
                    count2++;
                    break;
                case 2:
                    a[2]++;
                    break;
                case 3:
                    a[3] += b;
                    count1++;
                    break;
                case 4:
                    a[4] = b > a[4] ? b : a[4];
                    break;
            }
        }
        if (count1) {
            a[3] /= count1;
        }
        (a[0] > 0) ? printf("%d ", int(a[0])) : printf("N ");
        (count2 > 0) ? printf("%d ", int(a[1])) : printf("N ");
        (a[2] > 0) ? printf("%d ", int(a[2])) : printf("N ");
        (a[3] > 0) ? printf("%.1f ", a[3]) : printf("N ");
        (a[4] > 0) ? printf("%d", int(a[4])) : printf("N");
        printf("\n");
    }
    return 0;
}