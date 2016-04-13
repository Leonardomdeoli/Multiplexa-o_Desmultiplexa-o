#include"fila.c"
#include"filaC.c"
#include<stdbool.h>
#include<stdio.h>
#include<string.h>

//multiplexação de três fluxos
FILAC *multiplex(FILA *f1, FILA *f2, FILA* f3){
    FILAC * q = criaC();
    while(!vazia(f1)|| !vazia(f2) || !vazia(f3)){
        if(!vazia(f1)){
          inserirC(q,1,remover(f1));
        }
        if(!vazia(f2)){
          inserirC(q,2,remover(f2));
        }
        if(!vazia(f3)){
          inserirC(q,3,remover(f3));
        }
    }
    return q;
}

//demultiplexação de dados
void desMultiplex(FILAC *f){
    FILA  *f1 = cria();
    FILA  *f2 = cria();
    FILA  *f3 = cria();

    while( !vaziaC(f) ){
        NOC * q = getInicioC(f);

        if( getIdC(q) == 1 ){
          inserir(f1,removerC(f));
        }
        if( getIdC(q) == 2 ){
          inserir(f2,removerC(f));
        }
        if( getIdC(q) == 3 ){
          inserir(f3,removerC(f));
        }
    }
 printf("\n\n   Desmultiplexacao\n\n");
 printf("   Fila f1 \n");
 printf("------------\n");
    mostrar(f1);
 printf("\n------------\n");

 printf("   Fila f2 \n");
 printf("------------\n");
    mostrar(f2);
 printf("\n------------\n");

 printf("   Fila f3 \n");
 printf("------------\n");
    mostrar(f3);
 printf("\n------------\n");
}


int main(){

 FILA  *f1 = cria();
 inserir(f1,10);
 inserir(f1,22);
 inserir(f1,37);
 inserir(f1,14);
 //criaFluxo(f1);

 printf("\n\n\n   Fila f1 \n");
 printf("------------\n");
 mostrar(f1);
 printf("\n------------\n");

 FILA  *f2 = cria();
 inserir(f2,98);
 inserir(f2,32);
 inserir(f2,42);
 //criaFluxo(f2);

 printf("\n Fila f2 \n");
 printf("------------\n");
 mostrar(f2);
 printf("\n------------\n");

 FILA  *f3 = cria();
 inserir(f3,17);
 inserir(f3,66);
 inserir(f3,22);
 inserir(f3,98);
 //criaFluxo(f3);

 printf("\n Fila f3 \n");
 printf("------------\n");
 mostrar(f3);
 printf("\n------------\n");

FILAC * f4 = criaC();
f4 = multiplex(f1,f2,f3);
printf("\n  Multiplexacao de tres fluxos\n");
mostrarC(f4);

desMultiplex(f4);

}
