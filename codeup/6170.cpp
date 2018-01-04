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

void top(char a[], char da, double &p) {
    for (int i = 0; a[i] != '\0'; ++i) {
        if (a[i] == da) {
            p = 10 * p + (da - '0');
        }
    }

}

int main() {
    char a[20], b[20];
    char da, db;
    while (scanf("%s %c %s %c", a, &da, b, &db) != -1) {
        double pa = 0, pb = 0;
        top(a, da, pa);
        top(b, db, pb);
        printf("%.0f\n", pa + pb);
    }
    return 0;
}