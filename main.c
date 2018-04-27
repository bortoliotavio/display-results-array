#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

int main()
{
    int n[TAMANHO], cont = 0, i[TAMANHO], soma = 0;
    printf("Digite %i valores inteiros positivos: (Cleusa delicia) \n", TAMANHO);
    while(cont < TAMANHO){
        printf("Vetor [%i] = ", cont);
        scanf("%i", &n[cont]);
        if(n[cont] <= 0)
            printf("Tente novamente.\n");
        else{
            soma += n[cont];
            i[cont] = cont;
            cont++;
        }
    }
    printf("///////////////////////////////\n");
    for(cont = 0; cont < TAMANHO; cont++){
        printf("[%i] %i\n", i[cont], n[cont]);
    }
    printf("///////////////////////////////\n");
    printf("%i", soma);
    return 0;
}
