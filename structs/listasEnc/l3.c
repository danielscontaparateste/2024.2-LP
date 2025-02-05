#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10

struct Node{
	int x;
    int y;
	struct Node *prox;
};

void imprimir(struct Node *);
struct Node *getMenorDistancia(struct Node *);

int main(){
	struct Node h, n1, n2, n3, n4;

    srand(time(NULL));

	h.prox = &n1;

	n1.x = rand() % MX;
    n1.y = rand() % MX;
	n1.prox = &n2;

	n2.x = rand() % MX;
    n2.y = rand() % MX;
	n2.prox = &n3;

	n3.x = rand() % MX;
    n3.y = rand() % MX;
	n3.prox = &n4;

    n4.x = rand() % MX;
    n4.y = rand() % MX;
	n4.prox = NULL;

    imprimir(&h);

    printf("\n\nEndereço do menor: %p\n",getMenorDistancia(&h));
    
	return 0;
}

void imprimir(struct Node *p){
	struct Node *k;
	
	for (k=p->prox; k!=NULL; k=k->prox){
        puts("===");
        printf("Endereço: %p\n",k);
		printf("%d\n",k->x);
        printf("%d\n",k->y);
    }
}

struct Node *getMenorDistancia(struct Node *p){
	struct Node *k;
	int menor = abs(p->prox->x - p->prox->y);
    struct Node *pMenor = p->prox;

	for (k=p->prox->prox; k!=NULL; k=k->prox){
        if (menor > ( abs(k->x - k->y) )){
            menor = abs(k->x - k->y);
            pMenor = k;
        }
    }

    return pMenor;
    
}
