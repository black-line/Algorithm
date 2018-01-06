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
    char s[300];
    while (gets(s) != NULL) {
        int len = strlen(s);
        int i;
        for (i = 0; i < len / 2; ++i) {
            if (s[i] != s[len - 1 - i]) {
                printf("NO\n");
                break;
            }
        }
        if (i == len / 2) {
            printf("YES\n");
        }
    }
    return 0;
}