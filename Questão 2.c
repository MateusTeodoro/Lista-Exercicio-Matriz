#include <stdio.h>

int funcaoMaior(int a, int b){
    
    if (a > b){
        return a;
    }
    
    else{
        return b;
    }
}

int main()
{
    int x, y, resultado;
    scanf("%d %d", &x, &y);
    
    resultado = funcaoMaior(x, y);
    printf("%d\n", resultado);
}