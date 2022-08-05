#include <stdio.h>
#include <stdlib.h>

void fac(int a){
    int i,B=1;

    for(i = 1; i<=a; i++){
        B = B*i;
    }
    printf(" par la fonction : %d ! = %d\n", a, B );
}

int main()
{
    int A,K,i,B=1;
    printf("Donner un nombre :\n");
    scanf("%d", &A);
    fac(A);
    K=A;
    for(i = 1; i<=K; i++){
        B = B*i;
    }
    printf(" par la methode simple : %d ! = %d", K, B );
}
