/*Faça um programa para armazenar um vetor de dados contendo n valores do tipo int,
usando a função de alocação dinâmica de memória MALLOC:
a) Atribua para cada elemento do vetor o valor do seu índice.
b) Exibir na tela os 2 primeiros e os 2 últimos elementos do vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor, i, n;

    printf("Informe o tamanho do vetor:");
        scanf("%d", &n);
/*Tamanho que o vetor terá. */

   vetor = (int*)malloc(n * sizeof(int));
   if(vetor == NULL){
    printf("Erro");
    exit(1);
/*Alocando e verificando se a alocação deu certo. */
   }
   
    for (i = 0; i < n; i++) {
        vetor[i] = i;
/*Atribuindo os indices para cada elemento do vetor. */
    }
    
   printf("\nVetor:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
/*Lendo os elementos do vetor. */
    }  

    printf("Elemnetos do vetor:\n");
        for (i = 0; i < n; i++) {
        printf("%d\n", vetor[i]);
/*Mostrando os elementos do vetor. */
    }

/*Exibir os dois primeiros elementos do vetor. */
     if (n >= 2) {
        printf("\nDois primeiros elementos: %d, %d\n", vetor[0], vetor[1]);
    } else if (n == 1) {
        printf("\nApenas um elemento no vetor: %d\n", vetor[0]);
    } else {
        printf("\nO vetor está vazio.\n");
    }

/*Exibir os dois ultimos elementos do vetor*/
    if (n >= 2) {
        printf("Dois ultimos elementos: %d, %d\n", vetor[n - 2], vetor[n - 1]);
/*n-1 porque vai receber o tamanho do vetor e pegar a ultima posição e n-2 é do mesmo jeito*/
    } else if (n == 1) {
        printf("Apenas um elemento no vetor: %d\n", vetor[0]);
    } else {
        printf("O vetor está vazio.\n");
    }

    free(vetor);
/*Liberando a memoria alocada para o vetor*/    

return 0;
}
