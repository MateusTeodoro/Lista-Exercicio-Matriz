#include <stdio.h>

void olheiImprime(int A){
    int i, d = 0;
    
    for (i = 1; i <= A; i++){
        d = A % i;
        
        if (d == 0){
            printf ("%d\n", i);
        }
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    olheiImprime(N);
    return 0;
}