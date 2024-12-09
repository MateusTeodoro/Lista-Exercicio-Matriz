#include <stdio.h>

int calculaPar( int n1, int n2, int n3){
    int conta = 0, par;
    
    par = n1 % 2;
    if (par == 0){
        conta++;
    }
    
    par = n2 % 2;
    if (par == 0){
        conta++;
    }
    
    par = n3 % 2;
    if (par == 0){
        conta++;
    }
    return conta;
}

int main(){
    
    int a, b, c, r;
    scanf ("%d %d %d", &a, &b, &c);
    r = calculaPar (a, b, c);
    printf("%d\n", r);
    return 0;
}