#include <stdio.h>

int fazSoma(int n1, int n2){
    int c, i, soma;
    
    for (i = n1; i < n2; i++){
        c = i % 2;
        
        if (c == 0){
            soma = soma + i;
        }
    }
    printf("%d", soma);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    fazSoma(a, b);
    return 0;
}