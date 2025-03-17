/* Codeforces problem 1154A
    Autor: Matheus Procopio Duarte
*/
#include <stdio.h>
int main(void){
    long long x1, x2, x3, x4, soma, s1, s2, s3, a, b ,c;
    scanf("%lld %lld %lld %lld", &x1, &x2, &x3, &x4);

    soma=x1;
/* A sequ�ncia de "If" identifica qual dos 4 n�meros representa a soma de a+b+c, que,
    consequentemente, � o maior numero
*/
    if (x2>soma) soma = x2;
    if (x3>soma) soma = x3;
    if (x4>soma) soma = x4;

/* A sequ�ncia l�gica com "If" e "else if" estabelece criterios de posi��o para os outros
    3 n�meros com base na identifica��o de qual deles � o maior
*/
    if (soma == x1) {
        s1 = x2; s2 = x3; s3 = x4;
    } else if (soma == x2) {
        s1 = x1; s2 = x3; s3 = x4;
    } else if (soma == x3) {
        s1 = x1; s2 = x2; s3 = x4;
    } else {
        s1 = x1; s2 = x2; s3 = x3;
    }

/* Ent�o, � feito o calculo com base nas posi��es definidas pelas fun��es "If" e "else if"
*/

    a = soma - s1;
    b = soma - s2;
    c = soma - s3;

    printf("%lld %lld %lld", a, b, c);
    return 0 ;
}
