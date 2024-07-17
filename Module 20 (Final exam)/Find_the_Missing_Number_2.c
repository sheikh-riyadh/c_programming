#include <stdio.h>

void find_missing_numbers(int T, long long M[], int A[], int B[], int C[]) {
    for (int i = 0; i < T; i++) {
        long long int abc = A[i] * B[i] * C[i];
        if (abc == 0) {
            if (M[i] == 0) {
                printf("0\n");
            } else {
                printf("-1\n");
            }
        } else if (M[i] % abc == 0) {
            long long int D = M[i] / abc;
            printf("%lld\n", D);
        } else {
            printf("-1\n");
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);
    
    long long int M[T];
    int A[T], B[T], C[T];
    
    for (int i = 0; i < T; i++) {
        scanf("%lld %d %d %d", &M[i], &A[i], &B[i], &C[i]);
    }
    
    find_missing_numbers(T, M, A, B, C);
    
    return 0;
}
