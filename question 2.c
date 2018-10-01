#include <stdlib.h>
int main() {
    int A[10];
    int x;
    printf("Input 10 numbers:\n";
    for(int i = 0; i < 10; i++) {
        scanf("%d", &x);
        A[i] = x;
    }
    printf(" The numbers you entered were:");
    for(int i = 0; i <10; i++) {
        printf("%d ", A[i]);
    }
}
