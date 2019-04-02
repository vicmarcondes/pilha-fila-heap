#include "pilha.h"
#include <stdio.h>

void stack_init(pilha * p) {
    p->topo = -1;
}

bool stack_isempty(pilha p) {
    if(p.topo < 0) 
        return true;
    return false;
}

bool stack_isfull(pilha p) {
    if(p.topo == STACK_MAX - 1) 
        return true;
    return false;
}

void push(pilha * p, stack_info x) {
    if(!stack_isfull(*p)) {
        p->topo++;
        p->itens[p->topo] = x;
    } 
    else {
        fprintf(stderr, "Pilha cheia!\n");
        exit(1);
    }
}

bool push_and_test(pilha * p, stack_info x) {
    if(!stack_isfull) {
        return false;
    }
    else {
        push(p, x);
    }
}