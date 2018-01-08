//
// Created by jessy on 01/08/18.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <set>
#include <string>
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

int hashTable[9] = {false};
int cnt = 0;
int r[100][10];
int t[9];

void P(int index) {
    if (index == 9) {
        cnt++;
        for (int i = 1; i <= 8; ++i) {
            r[cnt][i] = t[i];
        }
        return;
    }
    for (int j = 1; j <= 8; ++j) {
        if (hashTable[j] == false) {
            bool flag = true;
            for (int i = 1; i < index; ++i) {
                if (abs(index - i) == abs(j - t[i])) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                t[index] = j;
                hashTable[j] = true;
                P(index + 1);
                hashTable[j] = false;
            }
        }
    }
}

int main() {
    freopen("..\\in.txt", "r", stdin);
    P(1);
    int n;
    scanf("%d", &n);
    while (n--) {
        int a;
        scanf("%d", &a);
        for (int i = 1; i <= 8; ++i) {
            printf("%d", r[a][i]);
        }
        printf("\n");
    }
    return 0;
}