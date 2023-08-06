/*Criar uma estrutura que represente um aluno, contendo nome, media e faltas. Faça um
programa que leia informações de n alunos em um vetor alocado dinamicamente. Em
seguida, imprima as informações lidas na ordem decrescente das medias dos alunos.*/

#include <stdio.h>
#include <stdlib.h>

    typedef struct alunos{
        char nome[50];
        float media; 
        int faltas;
    }aluno;

    int main(){
        int n;

    printf("Informe quantos alunos sao:\n");
        scanf("%d", &n);

    aluno *alunos = (aluno*)malloc(n * sizeof(aluno));
        if(alunos == NULL){
            printf("Erro!");
            exit (1);
        }

        for(int i = 0; i < n; i++){
            printf("\nNome do aluno %d:", i+1);
            scanf("%s", alunos[i].nome);
            printf("\nMedia do aluno %d:", i+1);
            scanf("%f", &alunos[i].media);
            printf("\nFaltas do aluno %d:", i+1);
            scanf("%d", &alunos[i].faltas);
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                aluno temp = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = temp;

            }
        }

/*Imprimir as informações dos alunos em ordem decrescente de médias*/
    printf("\nAlunos em ordem decrescente de medias:\n");
    for (int i = 0; i < n; i++) {
        printf("Aluno: %s\nMedia: %.2f\nFaltas: %d\n\n", alunos[i].nome, alunos[i].media, alunos[i].faltas);
    }

/*Liberar a memória alocada para o vetor de alunos*/
    free(alunos);

    return 0;
    }
