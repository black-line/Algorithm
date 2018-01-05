//
// Created by jessy on 01/05/18.
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
    int a, b;
    char n[100];
    while (scanf("%d%s%d", &a, n, &b) != -1) {
        long long N = 0;
        int len = strlen(n);
        for (int i = 0; i < len; ++i) {
            if (n[i] >= '0' && n[i] <= '9') {
                N += (n[i] - '0') * (int) pow(a, (len - 1 - i));
            }
            if (n[i] >= 'a' && n[i] <= 'f') {
                N += (n[i] - 'a' + 10) * (int) pow(a, (len - 1 - i));
            }
            if (n[i] >= 'A' && n[i] <= 'F') {
                N += (n[i] - 'A' + 10) * (int) pow(a, (len - 1 - i));
            }
        }
        char r[100];
        int num = 0;
        do {
            int t = N % b;
            if (t >= 0 && t <= 9) {
                r[num++] = t + '0';
            } else {
                r[num++] = (t - 10) + 'A';
            }
            N /= b;
        } while (N != 0);
        while (num--) {
            printf("%c", r[num]);
        }
        printf("\n");
    }
    return 0;
}