#include <stdio.h>
int main(){
    int a, b;
    printf("Digite 2 numeros para saber a ordem crescente.\n");
    scanf("%i%i", &a, &b);
    if (a > b){
        printf("%i %i", a, b);
    }
    else if (b > a){
        printf ("%i %i", b, a);
    }
    else{
        printf("%i %i", a ,b);
    }
return 0;
}
