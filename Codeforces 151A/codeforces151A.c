/*
    Codeforces problem 151A
    Autor: Matheus Procopio Duarte
*/

#include <stdio.h>
int main(void){
    long long n, k, l, c, d, p, nl, np;
    scanf("%lld %lld %lld %lld %lld %lld %lld %lld", &n, &k, &l, &c, &d, &p, &nl, &np);

    long long bebidas, limoes, sal, menor, bpp, lpp, spp;
    bebidas=(k*l)/nl; // Calcula a quantidade de brindes que podem ser feitos com base nos ml de bebidas dispon�veis //
    limoes=(c*d); // Calcula a quantidade de brindes que podem ser feitos com base nos lim�es dispon�veis //
    sal=p/np; // Calcula a quantidade de brindes que podem ser feitos com base na quantidade de sal dispon�vel //

    /*
        Divide a quantidade de brindes pelo n�mero de pessoa para calcular os brindes por pessoa
    */
    bpp=bebidas/n;
    lpp=limoes/n;
    spp=sal/n;

    /*
        Fator limitante para encontrar o menor valor entre os tr�s atrav�s de um If tern�rio
    */

    menor = (bpp < lpp) ? ((bpp < spp) ? bpp : spp) : ((lpp < spp) ? lpp : spp);

    /*
        Imprime o menor dos valores, que � limitante para todos os outros valores de brindes
    */

    printf ("%lld\n", menor);

    return 0;
}



