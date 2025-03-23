/*
    Codeforces problem 1692A
    Autor: Matheus Procopio Duarte
*/
#include <stdio.h>
int main(){
    int t; // Vari�vel que define o n�mero de testes //
    scanf("%d", &t);


    while (t--){ // Inicia o loop para processar os dados //
        int a, b, c, d, count=0; // Inicia as vari�veis inseridas e um contador que come�a a partir do 0 //
        scanf("%d %d %d %d", &a, &b, &c, &d);

        /*
            Verifica quantos n�meros b,c,d s�o maiores que "a" e computa no "contador"
        */

        if (b>a) count++;
        if (c>a) count++;
        if (d>a) count++;

        printf("%d\n", count); // Imprime o valor total que foi computado na vari�vel do contador //

    }

    return 0;
}

