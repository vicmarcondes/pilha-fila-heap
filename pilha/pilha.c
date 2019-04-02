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
    if(stack_isfull(*p)) {
        return false;
    }
    else {
        push(p, x);
        return true;
    }
}

stack_info pop(pilha * p) {
    if(!stack_isempty(*p)) {
        return p->itens[p->topo--];
    } 
    else {
        fprintf(stderr, "Pilha vazia!");
        exit(1);
    }
}

bool pop_and_test(pilha * p, stack_info *x) {
    if(stack_isfull(*p)) {
        return false;
    }
    else {
        *x = pop(p);
        return true;
    }
}

stack_info top(pilha p) {
    if(!stack_isempty(p)) {
        return p.itens[p.topo];
    }
    else {
        fprintf(stderr, "Pilha vazia!");
    }
}

bool top_and_test(pilha p, stack_info * x) {
    if(!stack_isempty(p)) {
        * x = top(p);
        return true;
    }
    else {
        return false;
    }
}
