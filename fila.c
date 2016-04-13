#include"fila.h"
#include<stdbool.h>
#include<stdio.h>


struct fila{
    NO *inicio;
    NO *fim;

};

NO* getInicio(FILA *f){
    return f->inicio;
}

NO* getFim(FILA *f){
    return f->fim;
}

//o inicio aponta para o no t
void setInicio(FILA *f,NO *t){
    f->inicio = t;
}

void setFim(FILA *f,NO *t){
    f->fim = t;

}
bool vazia(FILA *f){
    if(getInicio(f) == NULL){
        return true;
    }
    return false;
}

void mostrar(FILA *f){

    NO* q;

    for(q=getInicio(f); q!=NULL; q = getProx(q)){
        printf("%d ",getValor(q));
    }

}
void inserir(FILA *f,int x){
    NO * novo = aloca(x,NULL);
    if(vazia(f)){
        setInicio(f,novo);//fazendo o inicio apontar para o novo NO
    }else{
        setProx(getFim(f),novo);
    }//setar prox do fim aponta para o novo NO

    setFim(f,novo);
}
int remover(FILA *f){
    int t;
    if(!vazia(f)){
        NO* q = getInicio(f);

        setInicio(f,getProx(q));
            if(getProx(q) == NULL){//fila com o unico NO
                setFim(f,NULL);
            }
            t = getValor(q);
            desaloca(q);//TAD NO
    }

    return t;
}

int quantidade(FILA* f){
    int cont=0;
    NO *q;

    for(q=getInicio(f); q!= NULL;q = getProx(q)){
        cont++;
    }
  return cont;
}
//Inicializancdo uma fila vazia
FILA* cria(){
    FILA *f = (FILA*)malloc(sizeof(FILA));
    setInicio(f,NULL);
    setFim(f,NULL);
    return f;
}

void criaFluxo(FILA *f){
int i;
 for( i = 0; i< 6;i++){
    inserir(f,i);
    }
}
