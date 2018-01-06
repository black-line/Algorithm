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
    char a[200], b[200];
    while (scanf("%s%s", a, b) != -1) {
        int i, j;
        for (i = 0; a[i] != '\0'; ++i) {}
        for (j = 0; b[j] != '\0'; ++j) {
            a[i + j] = b[j];
        }
        a[i + j] = '\0';
        puts(a);
    }
    return 0;
}