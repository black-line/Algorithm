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

class result {
public:
    int a, b, c;

    result() {
        a = b = c = 0;
    }
};

int wl(char l, char r, char &w) {
    if (l == r) {
        return 1;
    } else {
        if ((l == 'B' && r == 'C') || (l == 'C' && r == 'J') || (l == 'J' && r == 'B')) {
            w = l;
            return 0;
        } else {
            w = r;
            return 2;
        }
    }
}

char maxWin(int p[]) {
    int time = 0, index = 0;
    for (int i = 2; i >= 0; --i) {
        if (time <= p[i]) {
            time = p[i];
            index = i;
        }
    }
    if (index == 0) return 'B';
    if (index == 1) return 'C';
    if (index == 2) return 'J';
};

int main() {
    int T;
    while (scanf("%d", &T) != -1) {
        result jia, yi;
        int j[3] = {0};
        int y[3] = {0};
        for (int i = 0; i < T; ++i) {
            char l, r, w;
            cin >> l >> r;
            switch (wl(l, r, w)) {
                // win
                case 0:
                    jia.a++;
                    yi.c++;
                    if (w == 'B') j[0]++;
                    if (w == 'C') j[1]++;
                    if (w == 'J') j[2]++;
                    break;
                    //
                case 1:
                    jia.b++;
                    yi.b++;
                    break;
                    // lose
                case 2:
                    jia.c++;
                    yi.a++;
                    if (w == 'B') y[0]++;
                    if (w == 'C') y[1]++;
                    if (w == 'J') y[2]++;
                    break;
            }
        }
        printf("%d %d %d\n", jia.a, jia.b, jia.c);
        printf("%d %d %d\n", yi.a, yi.b, yi.c);
        char l, r;
        l = maxWin(j);
        r = maxWin(y);
        printf("%c %c\n", l, r);
    }
    return 0;
}