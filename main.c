#include <stdio.h>
#include <stdlib.h>

void fac(int a){
    int i,B=1;

    for(i = 1; i<=a; i++){
        B = B*i;
    }
    printf("%d ! = %d", a, B );
}

int main()
{
    int A;
    printf("Donner un nombre :\n");
    scanf("%d", &A);
    fac(A);
}
