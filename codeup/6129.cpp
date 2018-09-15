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


int main() {
    freopen("../in.txt", "r", stdin);
    int N;
    while (scanf("%d", &N) != EOF) {
        int result[5] = {0};
        int isExist[5] = {0};
        int A2[1010] = {0}, a2 = 0;
        int a4 = 0;
        while (N--) {
            int tmp;
            scanf("%d", &tmp);
            switch (tmp % 5) {
                case 0:
                    if (!(tmp % 2)) {
                        isExist[0] = 1;
                        result[0] += tmp;
                    }
                    break;
                case 1:
                    isExist[1] = 1;
                    A2[a2++] = tmp;
                    break;
                case 2:
                    isExist[2] = 1;
                    result[2]++;
                    break;
                case 3:
                    isExist[3] = 1;
                    result[3] += tmp;
                    a4++;
                    break;
                case 4:
                    isExist[4] = 1;
                    if (result[4] < tmp)result[4] = tmp;
                    break;
            }
        }
        for (int j = 0; j < a2; ++j) {
            result[1] += pow(-1, j) * A2[j];
        }
        for (int i = 0; i < 5; ++i) {
            if (!isExist[i])printf("N");
            else if (i == 3) printf("%.1f", result[3] / (double) a4);
            else printf("%d", result[i]);

            if (i < 4)printf(" ");
        }
        printf("\n");
    }
    return 0;
}
