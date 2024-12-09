#include <stdio.h>
#include <math.h>

float calculaRaiz(float n1, float n2, float n3){
    float delta, raiz1, raiz2;
    
    delta = n2 * n2 - 4 * n1 * n3;
    
    if (delta < 0){
        printf("Nao existem raizes");
    }
    
    else if (delta == 0){
        raiz1 = -n2 / (2 * n1);
        printf("%.2lf\n", raiz1);
    }
    
    else if (delta > 0){
        raiz1 = (-n2 + sqrt(delta)) / (2 * n1);
        raiz2 = (-n2 - sqrt(delta)) / (2 * n1);
        printf("%.2lf\n", raiz1);
        printf("%.2lf\n", raiz2);
    }
}

int main(){
    
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    calculaRaiz(a, b, c);
    return 0;
}