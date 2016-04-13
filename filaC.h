#include"NOC.c"
#include<stdbool.h>
#include<stdio.h>


typedef struct filaC FILAC;

FILAC* criaC();
NOC* getInicioC(FILAC *f);
NOC* getFimC(FILAC *f);
void setInicioC(FILAC *f,NOC *t);
void setFimC(FILAC *f,NOC *t);
bool vaziaC(FILAC *f);
void mostrarC(FILAC *f);
void inserirC(FILAC *f,int y,int x);
int removerC(FILAC *f);
void criaFluxoC(FILAC *f);
