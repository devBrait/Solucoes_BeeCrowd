#include <stdio.h>

int main() {
   
    int a, n, soma = 0;

    scanf("%d %d", &a, &n);

    while (n <= 0) {
        scanf("%d", &n);
    }

    for (int i = n; i > 0; i--) 
    {
        soma += a;
        a++;
    }

    printf("%d\n", soma);

    return 0;
}
