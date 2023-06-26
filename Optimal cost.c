#include <limits.h>
#include <stdio.h>
#define MAX_R 10
#define MAX_C 10

int min(int x, int y, int z);
int minCost(int cost[MAX_R][MAX_C], int m, int n);

int main() {
    int cost[MAX_R][MAX_C];
    int m, n;

    printf("Enter number of rows (max %d): ", MAX_R);
    scanf("%d", &m);

    printf("Enter number of columns (max %d): ", MAX_C);
    scanf("%d", &n);

    printf("Enter cost matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
        }
    }

    printf("Optimal cost: %d\n", minCost(cost, m-1, n-1));
    return 0;
}

int min(int x, int y, int z) {
    if (x < y)
        return (x < z) ? x : z;
    else
        return (y < z) ? y : z;
}

int minCost(int cost[MAX_R][MAX_C], int m, int n) {
    int tc[MAX_R][MAX_C];
    tc[0][0] = cost[0][0];

    for (int i = 1; i <= m; i++)
        tc[i][0] = tc[i - 1][0] + cost[i][0];

    for (int j = 1; j <= n; j++)
        tc[0][j] = tc[0][j - 1] + cost[0][j];

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            tc[i][j] = min(tc[i - 1][j - 1],
                           tc[i - 1][j],
                           tc[i][j - 1])
                       + cost[i][j];

    return tc[m][n];
}
