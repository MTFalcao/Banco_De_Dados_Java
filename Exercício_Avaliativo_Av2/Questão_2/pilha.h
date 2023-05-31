struct NodeP{
    int item;
    struct NodeP *prox;
};
typedef struct NodeP node_pilha;

int vazia(node_pilha *PILHA){
    if(PILHA -> prox == NULL){
        return 1;
    }else{
        return 0;
    }
}

node_pilha* PUSH(node_pilha *PILHA, int tam){
    node_pilha *novo = (node_pilha*)malloc(sizeof(node_pilha));
    novo -> prox = NULL;

    
    printf("\nNovo item: ");
    scanf("%d",&novo -> item);
    printf("\n");
    
    if(vazia(PILHA)){
        PILHA -> prox = novo;
    }else{
        node_pilha *tmp = PILHA -> prox;
        while (tmp -> prox != NULL){
            tmp = tmp -> prox;
        }
        tmp -> prox = novo;
        
    }
    tam++;
    return novo;
}

void IMPRIME(node_pilha *PILHA, int tam){
    if(vazia(PILHA)){
        printf("\nA Pilha está vazia!\n\n");
        return ;
    }
    node_pilha *tmp = PILHA -> prox;
    
    printf("\n Pilha: ");
    
    while (tmp != NULL){
        printf("%3d",tmp -> item);
        tmp = tmp ->prox;
        tam++;
    }
    
    printf("\n Quantidade de itens na Pilha são de: %d",tam);
    printf("\n\n");
}

void POP( node_pilha *PILHA,int tam){
    if(PILHA -> prox == NULL){
        printf("\nA Pilha ja está vazia! \n\n");
        return;
    }else{
        node_pilha *ultimo = PILHA -> prox;
        node_pilha *penultimo = PILHA;
        
    while(ultimo -> prox !=NULL){
        penultimo = ultimo;
        ultimo = ultimo -> prox;
    }
    free(ultimo);
    penultimo -> prox = NULL;
    tam--;
    
    printf("\nÚltimo item da pilha removido com sucesso!\n\n");
    }
}

void TOPOPILHA(node_pilha *PILHA){
    if(vazia(PILHA)){
        
        printf("\nA Pilha ja está vazia! \n\n");
        return ;
        
    }else{
        
        node_pilha *tmp = PILHA -> prox;
        
        printf("\nTopo da pilha é:");
        while (tmp->prox != NULL){
            tmp = tmp -> prox;
        }   
    printf("%3d",tmp -> item);
    printf("\n\n");
    }
}

void LIMPARPILHA(node_pilha *PILHA){
    if(vazia(PILHA)){
        
        printf("\nA Pilha ja está vazia! \n\n");
        return ;
        
    }else{
        while(!vazia(PILHA)){
            node_pilha *ultimo = PILHA -> prox;
            node_pilha *penultimo = PILHA;
            
            while(ultimo -> prox !=NULL){
                penultimo = ultimo;
                ultimo = ultimo -> prox;
            }
            free(ultimo);
            penultimo -> prox = NULL;
        }
        printf("\n\n A Pilha foi limpa com sucesso!\n\n");
    }
}
