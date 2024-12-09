#include <stdio.h>

int soma(int n1, int n2, int n3){
    int maior = n1, menor = n1, total = 0;
    
    if (n2 > maior){
        maior = n2;
    }
    
    else if (n3 > maior){
        maior = n3;
    }
    
    if (n2 < menor){
        menor = n2;
    }
    
    else if (n3 < menor){
        menor = n3;
    }

    total = maior + menor;
    return total;
}

int main()
{
	int a, b, c, r;
	scanf("%d %d %d", &a, &b, &c);

	r = soma(a, b, c);
    printf("%d\n", r);
	return 0;
}