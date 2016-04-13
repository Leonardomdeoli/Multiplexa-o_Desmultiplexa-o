#include"NOC.h"
#include<stdlib.h>
#include<stdbool.h>

struct nohC{
    int id;
    int valor;
    NOC *prox;
};

NOC * alocaC(int y,int x,NOC *p){
    NOC *novo = (NOC *)malloc(sizeof(NOC));
    novo->id = y;
    novo->valor = x;
    novo->prox = p;
    return novo;
}

void desalocaC(NOC *p){
    free(p);
}
int getValorC(NOC *p){
    return p->valor;
}

int getIdC(NOC *p){
    return p->id;
}

NOC * getProxC(NOC *p){

    return p->prox;

}
void setValorC(NOC *p, int x){

    p->valor=x;

}
void setIdC(NOC *p, int x){

    p->id=x;

}
void setProxC(NOC *p,NOC *q){

    p->prox = q;

}
