#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,i,B=1;
    printf("Donner un nombre :\n");
    scanf("%d", &A);

    for(i = 1; i<=A; i++){
        B = B*i;
    }
    printf("%d ! = %d", A, B );

}
