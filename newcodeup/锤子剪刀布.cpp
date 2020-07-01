//
// Filename: 锤子剪刀布.cpp
// Author: Zequn Wu
// Date: 1/7/20
// Problem link: http://codeup.cn/problem.php?cid=100000575&pid=8
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

void judge(char a, char b, int win[][3]) {
    if (a == 'C' && b == 'J') {
        win[0][1]++;
    } else if (a == 'B' && b == 'C') {
        win[0][0]++;
    } else if (a == 'J' && b == 'B') {
        win[0][2]++;
    } else if (b == 'C' && a == 'J') {
        win[1][1]++;
    } else if (b == 'B' && a == 'C') {
        win[1][0]++;
    } else if (b == 'J' && a == 'B') {
        win[1][2]++;
    }
}

int main() {
    freopen("../in.txt", "r", stdin);
    int N;
    while (scanf("%d", &N) != EOF) {
        getchar();
        char a, b;
        // win[0] 甲 win[0][0] B win[0][1] C win[0][2] J
        // win[1] 乙
        int win[2][3] = {0};
        for (int i = 0; i < N; ++i) {
            scanf("%c %c\n", &a, &b);
            judge(a, b, win);
        }
        int awin = 0, bwin = 0, avg = 0;
        char ag, bg;
        for (int j = 0; j < 3; ++j) {
            awin += win[0][j];
            bwin += win[1][j];
        }
        avg = N - awin - bwin;
        printf("%d %d %d\n", awin, avg, bwin);
        printf("%d %d %d\n", bwin, avg, awin);
        int num_win = -1;
        char g_win;
        for (int k = 0; k < 3; ++k) {
            if (win[0][k] > num_win) {
                num_win = win[0][k];
                switch (k) {
                    case 0:
                        g_win = 'B';
                        break;
                    case 1:
                        g_win = 'C';
                        break;
                    case 2:
                        g_win = 'J';
                        break;
                }
            }
        }
        printf("%c ", g_win);
        num_win = -1;
        for (int k = 0; k < 3; ++k) {
            if (win[1][k] > num_win) {
                num_win = win[1][k];
                switch (k) {
                    case 0:
                        g_win = 'B';
                        break;
                    case 1:
                        g_win = 'C';
                        break;
                    case 2:
                        g_win = 'J';
                        break;
                }
            }
        }
        printf("%c\n", g_win);

    }
    return 0;
}