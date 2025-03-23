/*
    Codeforces problem 732A
    Autor: Matheus Procopio Duarte
*/
#include <stdio.h>
int main(void){
    int k, r, p, custo_total;
    scanf("%d %d", &k, &r);
    for (int p=1; p<10; p++){ // Inicia um loop de 1 até 9 para encontrar a menor quantidade de pás que podem ser compradas //
        custo_total=p*k; // Calcula o custo total ao comprar "p" pás
        if (custo_total % 10 == 0 || custo_total % 10 == r){
        /*
            Verifica se o custo termina em 0 (não tem troco)
            Verifica se o custo termina em r (pode pagar o valor exato)
        */
            printf("%d\n", p); // Imprime o menor valor de "p" possível e finaliza o programa //
            break;
        }
    }

    return 0;
}
