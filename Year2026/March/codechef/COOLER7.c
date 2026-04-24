#include <stdio.h>

int main() {
    int T;   // number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, M,sum;
        scanf("%d %d", &N, &M);
    
sum = ((N * (N + 1))  - (M * (M + 1))) / 2;
printf("%d\n",sum);
    }
    return 0;
}
