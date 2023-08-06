/*Faça um programa que leia o tamanho de um vetor de inteiros e reserve
dinamicamente memória para esse vetor. Em seguida, leia os elementos desse vetor,
imprima o vetor lido, e mostre quantos números pares e impares estão presentes no
vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, tam, *vetor, par = 0, impar = 0;

    printf("Informe o tamanho do vetor:");
        scanf("%d", &tam);

   vetor = (int*)malloc(tam * sizeof(int));
   if(vetor == NULL){
    printf("Erro");
    exit(1);
  }

   printf("\nVetor:");
    for(i = 0; i < tam; i++){
        scanf("%d", &vetor[i]);
    }     
    printf("Elemnetos do vetor:");
        for (i = 0; i < tam; i++) {
        printf(" %d", vetor[i]);

        if(vetor[i] % 2 == 0){
            par++;
        } else {
            impar++;
        }
    }  

    printf("\nQuantidade de numeros pares: %d\n", par);
    printf("Quantidade de numeros impares: %d\n", impar); 

    free(vetor);
    
    return 0;
}
