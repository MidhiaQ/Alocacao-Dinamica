/*Crie uma função que receba como parâmetros dois vetores de inteiros, v1 e v2, e as
suas respectivas quantidades de elementos, n1 e n2. A função deverá retornar um
ponteiro para um terceiro vetor, v3, com capacidade para (n1 + n2) elementos, alocado
dinamicamente, contendo a união de v1 e v2.
Por exemplo, se v1 = {11, 13, 45, 7} e v2 = {24, 4, 16, 81, 10, 12}, v3 irá conter
{11, 13, 45, 7, 24, 4, 16, 81, 10, 12}.
O cabeçalho dessa função deverá ser o seguinte:
void uniao(int *v1, int n1, int *v2, int n2);
Em seguida, crie a função principal do programa para chamar a função uniao passando
dois vetores informados pelo usuário. Em seguida, o programa deve exibir na tela os
elementos do vetor resultante. Não esqueça de liberar a memória alocada
dinamicamente.*/

#include <stdio.h>
#include <stdlib.h>

void uniao(int *v1, int n1, int *v2, int n2){
    int *v3, n3;

  n3 = n1 + n2;
  v3 = (int*)malloc(n3 * sizeof(int));

  if(v3 == NULL){
    printf("Erro 3");
    exit(1);
  }

for(int i = 0; i < n1; i++){
    v3[i] = v1[i];
}
for(int i = 0; i < n2; i++){
    v3[n1+i] = v2[i];
}
for(int i = 0; i < n3; i++){
    printf("%d\n", v3[i]);
}
free(v3);
}

int main(void){
    int *v1, *v2, n1, n2;

    printf("Informe o tamanho dos vetores:");
        scanf("%d %d", &n1, &n2);

    v1 = (int*) malloc (n1 * sizeof(int));
     if(v2 == NULL){
    printf("Erro 1");
    exit(1);
  }
    v2 = (int*) malloc (n2 * sizeof(int));

     if(v2 == NULL){
    printf("Erro 2");
    exit(1);
  }

    printf("Digite os elementos do vetor 1:\n");
        for(int i = 0; i < n1; i++){
        scanf("%d", &v1[i]);
    }

    printf("Digite os elementos do vetor 2:");
        for(int i = 0; i < n2; i++){
        scanf("%d", &v2[i]);
    }

    uniao(v1, n1, v2, n2);

    free(v1);
    free(v2);

    return 0;
}
