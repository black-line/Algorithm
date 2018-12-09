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

bool Equal(char a, char b) {
    int sub = int(abs(a - b));
    if (sub == 0 || sub == 'a' - 'A') return true;
    else return false;
}

int main() {
    freopen("../in.txt", "r", stdin);
    char in[100], some[100];
    scanf("%s", in);
    int inLen = strlen(in);
    getchar();
    while (fgets(some, 100, stdin) != NULL) {
        int someLen = strlen(some);
        int flag;
        for (int i = 0; i < someLen; ++i) {
            if (some[i] == ' ') continue;
            flag = 1;
            int j = i;
            int k = 0;
            if (Equal(some[i], in[k])) {
                while (i < someLen && k < inLen) {
                    if (Equal(some[i++], in[k++])) {
                        flag = 0;
                    } else flag = 1;
                }
            }
            if (flag) {
                printf("%c", some[j]);
                i = j;
            } else {
                i--;
            }
        }
    }
    return 0;
}
