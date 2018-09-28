/*
 * Author: Zequn Wu
 * date: 9/28/18 6:20 PM
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

void toCap(char &a) {
    if (a >= 'a' && a <= 'z') {
        a = a - 'a' + 'A';
    }
}

int main() {
    freopen("../in.txt", "r", stdin);
    char a[110];
    while (gets(a) != NULL) {
        toCap(a[0]);
        for (int i = 1; i < strlen(a); ++i) {
            if (a[i] == ' ' || a[i] == '\t' || a[i] == '\r' || a[i] == '\n') {
                toCap(a[i + 1]);
            }
        }
        puts(a);
    }
    return 0;
}
