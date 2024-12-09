#include <stdio.h>

int funcImprime(int a){
    int i;
    
    for (i = 0; i <= a; i++){
        printf("%d\n", i);
    }
    return 0;
}

int main(){
    
    int n, r;
    scanf("%d", &n);
    r = funcImprime(n);
}