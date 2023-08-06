#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p, n, media = 0;

    printf("\nDigite o tamanho do vetor:\n");
        scanf("%d", &n);

    p = (int*)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        printf("\nInforme o %d elemento do vetor:\n", i+1);
            scanf("%d", &p[i]);
            media += p[i];
    }    
    media = media/n;

    printf("\nA media e: %d", media);

free(p);

    return 0;
}
