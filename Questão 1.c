#include <stdio.h>

float olhaDelta(float n1, float n2, float n3){
    float delta;
    delta = n2 * n2 - 4 * n1 * n3;
    return delta;
}

int main(){
    
    double a,b,c, r;
    scanf("%lf %lf %lf", &a, &b, &c);
    r = olhaDelta(a, b, c);
    printf ("%.2lf", r);
    return 0;
}