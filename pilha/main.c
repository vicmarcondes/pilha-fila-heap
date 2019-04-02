#include <stdio.h>
#include "pilha.h"

int main() {
    int escolha,x;
    pilha p;
    stack_init(&p);
    while(escolha != 0) {
        printf("<1> Insere na pilha\n");
        printf("<2> Remove da pilha\n");
        printf("<0> Sair\n");
        printf(">>");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("\n--- Inserindo na pilha ---\n");
                printf("\nDigite um valor: ");
                scanf("%d", &x);
                if(!push_and_test(&p,x)) {
                    fprintf(stderr, "Pilha cheia!\n");
                }
                break;   
            case 2:
                printf("\n--- Removendo da pilha ---\n");                             
                if(!pop_and_test(&p, &x)) {
                    fprintf(stderr, "Pilha vazia!\n");
                }
                else 
                {
                    printf("Valor removido: %d\n", x);
                }
                break;       
        }
    }
    
    return 0;
}