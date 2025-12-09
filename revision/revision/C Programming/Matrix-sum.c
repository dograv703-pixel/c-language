#include <stdio.h>
int main() {
    int m[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i, j, rSum, cSum;
    for(i=0; i<3; i++) {
        rSum = 0; cSum = 0;
        for(j=0; j<3; j++) {
            rSum += m[i][j];
            cSum += m[j][i];
        }
        printf("Row %d Sum: %d, Col %d Sum: %d\n", i, rSum, i, cSum);
    }
    return 0;
}