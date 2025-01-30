#include <stdio.h>
int main() {
    double a,b;
    char c;
    scanf("%.0lf %0.lf %c",&a,&b,&c);
    switch(c){
    case '+':
    printf("%d",a+b);
    break;

    case '-':
    printf("%d",a-b);
    break;

    case '*':
    printf("%d",a*b);
    break;

    case '/':
    printf("%d",a/b);
    break;

    default:
    printf("error");
    return 0;
}}