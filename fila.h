#include"no.c"
#include<stdbool.h>
#include<stdio.h>


typedef struct fila FILA;

FILA* cria();
NO* getInicio(FILA *f);
NO* getFim(FILA *f);
void setInicio(FILA *f,NO *t);
void setFim(FILA *f,NO *t);
bool vazia(FILA *f);
void mostrar(FILA *f);
void inserir(FILA *f,int x);
int remover(FILA *f);
void criaFluxo(FILA *f);
