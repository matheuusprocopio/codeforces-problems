/*
    Codeforces problem 151A
    Autor: Matheus Procopio Duarte
*/

#include <stdio.h>
int main(void){
    long long n, k, l, c, d, p, nl, np;
    scanf("%lld %lld %lld %lld %lld %lld %lld %lld", &n, &k, &l, &c, &d, &p, &nl, &np);

    long long bebidas, limoes, sal, menor, bpp, lpp, spp;
    bebidas=(k*l)/nl; // Calcula a quantidade de brindes que podem ser feitos com base nos ml de bebidas disponíveis //
    limoes=(c*d); // Calcula a quantidade de brindes que podem ser feitos com base nos limões disponíveis //
    sal=p/np; // Calcula a quantidade de brindes que podem ser feitos com base na quantidade de sal disponível //

    /*
        Divide a quantidade de brindes pelo número de pessoa para calcular os brindes por pessoa
    */
    bpp=bebidas/n;
    lpp=limoes/n;
    spp=sal/n;

    /*
        Fator limitante para encontrar o menor valor entre os três através de um If ternário
    */

    menor = (bpp < lpp) ? ((bpp < spp) ? bpp : spp) : ((lpp < spp) ? lpp : spp);

    /*
        Imprime o menor dos valores, que é limitante para todos os outros valores de brindes
    */

    printf ("%lld\n", menor);

    return 0;
}



