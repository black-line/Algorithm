//
// Created by jessy on 01/11/18.
//

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

class Perform {
public:
    int start, end;
} perform[110];

bool cmp(Perform a, Perform b) {
    if (a.end != b.end) {
        return a.end < b.end;
    } else {
        return a.start > b.start;
    }
}

int main() {
    freopen("..\\in.txt", "r", stdin);
    int n;
    while (scanf("%d", &n) && n) {
        for (int i = 0; i < n; ++i) {
            scanf("%d%d", &perform[i].start, &perform[i].end);
        }
        sort(perform, perform + n, cmp);
        int num = 1, end = perform[0].end;
        for (int j = 1; j < n; ++j) {
            if (perform[j].start >= end) {
                end = perform[j].end;
                num++;
            }
        }
        printf("%d\n", num);
    }
    return 0;
}