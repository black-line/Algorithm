/*
 * Author: Zequn Wu
 * date: 9/26/18 2:14 PM
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

// 0-F -> 0-15
int AToTen(char a) {
    if (a >= '0' && a <= '9')
        return a - '0';
    else return a - 'F' + 15;
}

char TenToA(int a) {
    if (a >= 0 && a <= 9)
        return a - 0 + '0';
    else return a - 10 + 'A';
}

int main() {
    freopen("../in.txt", "r", stdin);
    int a, b;
    char n[100];
    while (scanf("%d %s %d", &a, n, &b) != EOF) {
        //f,F -> F
        for (int i = 0; i < strlen(n); ++i) {
            if (n[i] >= 'a' && n[i] <= 'z') {
                n[i] += 'A' - 'a';
            }
        }
        // a -> 10
        long long int ans = 0, num = 0;
        for (int j = strlen(n) - 1; j >= 0; --j) {
            ans += AToTen(n[j]) * pow(a, num++);
        }
        // 10 -> b
        char anss[100];
        num = 0;
        do {
            anss[num++] = TenToA(ans % b);
            ans /= b;
        } while (ans != 0);
        for (int k = num - 1; k >= 0; --k) {
            printf("%c", anss[k]);
        }
        printf("\n");
    }
    return 0;
}
