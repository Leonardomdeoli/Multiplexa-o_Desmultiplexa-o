typedef struct nohC NOC;
NOC *alocaC(int y,int x , NOC *p);
void desalocaC(NOC *p);
int getIdC(NOC *p);
int getValorC(NOC *p);
NOC * getProxC(NOC *p);//retorna a posição do proximo nó
void setValorC(NOC *p, int x);//setar um novo  valor no nó
void setProxC(NOC *p,NOC *q);// seta um novo end de memoria no nó
void setIdC(NOC *p, int x);
void mostraC(NOC *p);//mostra o vetor
int somaC(NOC *p);//efetua a soma
