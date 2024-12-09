#include <stdio.h>

double calculaJuros(float a, float b, float d){
    float juros;
    
    juros = a * b * d / 100;
    return juros;
}

int main()
{
    double c, m, t, r;
    scanf ("%lf %lf %lf", &c, &m, &t);
    r = calculaJuros(c, m, t);
    printf ("%.2lf\n", r);
    return 0;
}