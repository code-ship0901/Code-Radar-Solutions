#include <stdio.h>
int main() {
    double a,b;
    char c;
    scanf("%lf %lf %c",&a,&b,&c);
    switch(c){
    case '+':
    printf("%lf",a+b);
    break;

    case '-':
    printf("%lf",a-b);
    break;

    case '*':
    printf("%lf",a*b);
    break;

    case '/':
    printf("%lf",a/b);
    break;

    default:
    printf("error");
    return 0;
}}