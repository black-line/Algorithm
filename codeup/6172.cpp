/*
 * Author: Zequn Wu
 * date: 9/15/18 4:03 PM
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

int wdl(char a, char b) {
    if (a == b)return 0;
    else if (a == 'C' && b == 'J')return 1;
    else if (a == 'C' && b == 'B')return -1;
    else if (a == 'J' && b == 'C')return -1;
    else if (a == 'J' && b == 'B')return 1;
    else if (a == 'B' && b == 'C')return 1;
    else if (a == 'B' && b == 'J')return -1;
}

int main() {
    freopen("../in.txt", "r", stdin);
    int N;
    while (scanf("%d", &N) != EOF) {
        getchar();
        int result[2][6];
        memset(result, 0, sizeof(result));
        while (N--) {
            char a, b;
            scanf("%c %c", &a, &b);
            getchar();
            if (wdl(a, b) == -1) {
                result[0][2]++;
                result[1][0]++;
                switch (b) {
                    case 'B':
                        result[1][3]++;
                        break;
                    case 'C':
                        result[1][4]++;
                        break;
                    case 'J':
                        result[1][5]++;
                        break;
                }
            } else if (wdl(a, b) == 0) {
                result[0][1]++;
                result[1][1]++;
            } else if (wdl(a, b) == 1) {
                result[0][0]++;
                result[1][2]++;
                switch (a) {
                    case 'B':
                        result[0][3]++;
                        break;
                    case 'C':
                        result[0][4]++;
                        break;
                    case 'J':
                        result[0][5]++;
                        break;
                }
            }
        }
        for (int i = 0; i < 2; ++i) {
            printf("%d %d %d\n", result[i][0], result[i][1], result[i][2]);
        }
        int best = 3;
        for (int k = 3; k < 6; ++k) {
            if (result[0][best] < result[0][k])best = k;
        }
        switch (best) {
            case 3:
                printf("B ");
                break;
            case 4:
                printf("C ");
                break;
            case 5:
                printf("J ");
                break;
        }
        best = 3;
        for (int k = 3; k < 6; ++k) {
            if (result[1][best] < result[1][k])best = k;
        }
        switch (best) {
            case 3:
                printf("B\n");
                break;
            case 4:
                printf("C\n");
                break;
            case 5:
                printf("J\n");
                break;
        }
    }
    return 0;
}
