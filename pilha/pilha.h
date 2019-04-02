#define STACK_MAX 100
typedef int stack_info; // Tipo de dado da pilha
typedef struct {
    stack_info itens[STACK_MAX];
    int topo;
} pilha;
