/*
    Codeforces problem 1692A
    Autor: Matheus Procopio Duarte
*/
#include <stdio.h>
int main(){
    int t; // Variável que define o número de testes //
    scanf("%d", &t);


    while (t--){ // Inicia o loop para processar os dados //
        int a, b, c, d, count=0; // Inicia as variáveis inseridas e um contador que começa a partir do 0 //
        scanf("%d %d %d %d", &a, &b, &c, &d);

        /*
            Verifica quantos números b,c,d são maiores que "a" e computa no "contador"
        */

        if (b>a) count++;
        if (c>a) count++;
        if (d>a) count++;

        printf("%d\n", count); // Imprime o valor total que foi computado na variável do contador //

    }

    return 0;
}

