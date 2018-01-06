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
    int T;
    scanf("%d", &T);
    while (T--) {
        char a[100], b[100];
        scanf("%s%s", a, b);
        if (strlen(a) == strlen(b)) {
            printf("%s is equal long to %s\n", a, b);
        } else if (strlen(a) < strlen(b)) {
            printf("%s is shorter than %s\n", a, b);
        } else {
            printf("%s is longer than %s\n", a, b);
        }
    }
    return 0;
}