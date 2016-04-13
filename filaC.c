#include"filaC.h"
#include<stdbool.h>
#include<stdio.h>


struct filaC{
    NOC *inicio;
    NOC *fim;

};

NOC* getInicioC(FILAC *f){
    return f->inicio;
}

NOC* getFimC(FILAC *f){
    return f->fim;
}

//o inicio aponta para o no t
void setInicioC(FILAC *f,NOC *t){
    f->inicio = t;
}

void setFimC(FILAC *f,NOC *t){
    f->fim = t;

}
bool vaziaC(FILAC *f){
    if(getInicioC(f) == NULL){
        return true;
    }
    return false;
}

void mostrarC(FILAC *f){

    NOC* q;
    for(q=getInicioC(f); q!=NULL; q = getProxC(q)){
        printf("\n( %d , %d )",getIdC(q),getValorC(q));
    }
}
void inserirC(FILAC *f,int y,int x){
    NOC * novo = alocaC(y,x,NULL);
    if(vazia(f)){
        setInicioC(f,novo);//fazendo o inicio apontar para o novo NOC
    }else{
        setProxC(getFimC(f),novo);
    }//setar prox do fim aponta para o novo NOC

    setFimC(f,novo);
}
int removerC(FILAC *f){
    int t;
    if(!vaziaC(f)){
        NOC* q = getInicioC(f);
        setInicioC(f,getProxC(q));
            if(getProxC(q) == NULL){//fila com o unico NOC
                setFimC(f,NULL);
            }
            t = getValorC(q);
            desalocaC(q);
    }
    return t;
}
int quantidadeC(FILAC * f){
    int cont=0;
    NOC *q;

    for(q=getInicioC(f); q!= NULL;q = getProxC(q)){
        cont++;
    }
  return cont;
}
//Inicializancdo uma fila vazia
FILAC* criaC(){
    FILAC *f = (FILAC*)malloc(sizeof(FILAC));
    setInicioC(f,NULL);
    setFimC(f,NULL);
    return f;
}




