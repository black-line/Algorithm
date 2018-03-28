//
// Created by jessy on 03/27/18.
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

void E2e(string &s) {
    if (s.find("E") != string::npos) {
        s.replace(s.find("E"), 1, "e");
    }
}

void sbye(string a, long long int &al, int &ar) {
    string sl, sr;
    al = ar = 0;
    int negflag = 0, floatflag = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '-')
            negflag = 1;
        else if (a[i] == '.')
            floatflag = 1;
        else if (a[i] == 'e') {
            int b;
            sscanf(&a[i + 1], "%d", &b);
            ar += b;
            break;
        } else {
            al = al * 10 + a[i] - '0';
            ar -= floatflag;
        }
    }
    if (negflag)al = -al;
}

int main() {
    freopen("..\\in.txt", "r", stdin);
    string a, b;
    while (cin >> a && cin >> b) {
        // E -> e
        E2e(a);
        E2e(b);
        // separate string by e
        long long int al, bl;
        int ar, br;
        sbye(a, al, ar);
        sbye(b, bl, br);
        // printf("%lld %d %lld %d\n", al, ar, bl, br);

        // cal the result
        if (ar < br) {
            while (ar < br) {
                bl *= 10;
                br--;
            }
        } else {
            while (ar > br) {
                al *= 10;
                ar--;
            }
        }
        // printf("%lld %d %lld %d\n", al, ar, bl, br);

        long long int rl;
        int rr;
        rr = ar;
        rl = al + bl;
        if (!rl) {
            printf("0\n");
            continue;
        }
        while (rr < 0 && rl % 10 == 0) {
            rr++;
            rl /= 10;
        }
        if (rr >= 0) {
            printf("%lld", rl);
            for (int i = 0; i < rr; ++i) {
                printf("0");
            }
            printf("\n");
            continue;
        }

        // cout << rl << " " << rr << endl;
        int negflag = 0;
        if (rl < 0) {
            negflag = 1;
            rl = -rl;
        }
        long long int temp = 1;
        while (temp <= rl) {
            temp *= 10;
            rr++;
        }
        if (temp > 1) {
            temp /= 10;
            rr--;
        }
        if (negflag)printf("-");
        printf("%lld", rl / temp);
        if (temp > 1)
            printf(".%lld", rl % temp);
        printf("e%d\n", rr);
    }
    return 0;
}