void bubblesort_Crescente(int *vetor, int num){
    for(int i = 0; i < num - 1; i++){
        for(int m = 0; m < num - i - 1 ; m++){
            if( vetor[m] > vetor[m + 1]){
                int auxiliar = vetor[m];
                vetor[m] = vetor[m+1];
                vetor[m+1] = auxiliar;
                
            }
        }
    }
    
    printf("Os vetores ordenados em ordem crescente são: ");
    for(int i = 0; i < num; i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");
}

void bubblesort_Decrescente(int *vetor, int num){
    for(int i = 0; i < num - 1; i++){
        for(int m = 0; m < num - i - 1 ; m++){
            if( vetor[m] < vetor[m + 1]){
                int auxiliar = vetor[m];
                vetor[m] = vetor[m+1];
                vetor[m+1] = auxiliar;
                
            }
        }
    }
    
    printf("Os vetores ordenados em ordem decrescente são: ");
    for(int i = 0; i < num; i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");
}

void insertionSort(int vetor[], int num) { 
     int auxiliar;
     int m,i;
    
    for (i = 1; i < num; i++) {
        auxiliar = vetor[i];
        m = i - 1;
        
        while ( m >= 0 && vetor[m] > auxiliar) {
            vetor[m + 1] = vetor[m];
            m = m - 1;
        }
        
        vetor[m + 1] = auxiliar;
    }
    
    printf("Os vetores ordenados em ordem crescente são: ");
    for(int i = 0; i < num; i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");
}
