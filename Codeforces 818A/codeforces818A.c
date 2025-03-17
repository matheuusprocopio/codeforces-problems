/* Code forces problem 818A
    Autor: Matheus Procopio Duarte
*/
#include <stdio.h>
int main (void){
    long long n, k, w, c, d, nw;
    scanf("%lld %lld", &n, &k);
/* O código lê 2 variaveis e realiza operações matemáticas com base na
    lógica apresentada no problema para imprimir 3 saídas
*/
    d=n/(2*(k+1));
    w=d*(1+k);
    c=d*k;
    w=c+d;
    nw=n-w;


    printf("%lld %lld %lld", d, c, nw);
    return 0;
}
