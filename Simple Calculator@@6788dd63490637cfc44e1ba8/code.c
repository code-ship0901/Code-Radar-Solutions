#include <stdio.h>
int main() {
    double a,b;
    char c;
    scanf("%df %d %c",&a,&b,&c);
    switch(c){
    case '+':
    printf("%d",a+b);
    break;

    case '-':
    printf("%d",a-b);
    break;

    case '*':
    printf("%0.lf",a*b);
    break;

    case '/':
    printf("%0.lf",a/b);
    break;

    default:
    printf("error");
    return 0;
}}