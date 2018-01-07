//
// Created by jessy on 01/07/18.
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


int main() {
    freopen("..\\in.txt", "r", stdin);
    int m;
    scanf("%d", &m);
    while (m--) {
        int ans[110][110] = {0};
        int n;
        scanf("%d", &n);
        int firstLine[110];
        set<int> firstSet, secondSet;
        map<int, int> firstMap, secondMap;
        for (int i = 1; i <= n; ++i) {
            scanf("%d", firstLine + i);
            if (firstMap.count(firstLine[i]) == 0) {
                firstMap[firstLine[i]] = i;
                firstSet.insert(firstLine[i]);
            }
        }
        for (int i = 1; i <= n; ++i) {
            int a;
            scanf("%d", &a);
            if (secondMap.count(a) == 0) {
                secondMap[a] = i;
                secondSet.insert(a);
            }
            ans[secondMap[a]][firstMap[firstLine[i]]]++;
        }
        for (set<int>::iterator it1 = secondSet.begin(); it1 != secondSet.end(); it1++) {
            printf("%d={", *it1);
            for (set<int>::iterator it2 = firstSet.begin(); it2 != firstSet.end(); it2++) {
                if (it2 != firstSet.begin()) {
                    printf(",");
                }
                printf("%d=%d", *it2, ans[secondMap[*it1]][firstMap[*it2]]);
            }
            printf("}\n");
        }
    }
    return 0;
}
/*
int main() {
    freopen("..\\in.txt", "r", stdin);
    int m;
    while (scanf("%d", &m) != -1) {
        int n;
        scanf("%d", &n);
        int firstLine[200], secondLine[200];
        bool firstLineUnique[2000] = {false}, secondLineUnique[2000] = {false};
        for (int i = 0; i < n; ++i) {
            scanf("%d", firstLine + i);
            firstLineUnique[firstLine[i]] = true;
        }
        for (int i = 0; i < n; ++i) {
            scanf("%d", secondLine + i);
            secondLineUnique[secondLine[i]] = true;
        }
        int firstIndex = 0, secondIndex = 0;
        int firstIndexArray[200], secondIndexArray[200];
        for (int k = 0; k < 2000; ++k) {
            if (firstLineUnique[k])firstIndexArray[firstIndex++] = k;
            if (secondLineUnique[k])secondIndexArray[secondIndex++] = k;
        }
        int r[200][200] = {{},
                           {0}};
        for (int j = 0; j < n; ++j) {
            r[secondLine[j]][firstLine[j]]++;
        }
        for (int l = 0; l < secondIndex; ++l) {
            printf("%d={", secondIndexArray[l]);
            for (int i = 0; i < firstIndex; ++i) {
                printf("%d=%d", firstIndexArray[i], r[secondIndexArray[l]][firstIndexArray[i]]);
                if (i < firstIndex - 1)printf(",");
            }
            printf("}\n");
        }

    }
    return 0;
}*/
