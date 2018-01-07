//
// Created by jessy on 01/07/18.
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
    //freopen("..\\in.txt", "r", stdin);
    int n;
    while (scanf("%d", &n) != -1) {
        int input[n];
        int r[10010] = {0};
        for (int i = 0; i < n; ++i) {
            int j;
            scanf("%d", &j);
            r[j]++;
            input[i] = j;
        }
        int flag = 0, k = 0;
        for (k = 0; k < n; ++k) {
            if (r[input[k]] == 1) {
                flag = input[k];
                break;
            }
        }
        if (flag) {
            printf("%d\n", input[k]);
        } else {
            printf("None\n");
        }
    }
    return 0;
}