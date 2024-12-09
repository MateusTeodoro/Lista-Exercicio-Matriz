#include <stdio.h>

int calculaPA(int a, int b, int c){
    int i, soma;
    
    soma = c * (a + b) / 2;
    return soma;
}

int main()
{
    int num1, num2, n, r;
    scanf ("%d %d %d", &num1, &num2, &n);
    r = calculaPA(num1, num2, n);
    printf ("%d\n", r);
    return 0;
}