#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%lf %lf %c",&a,&b,&c);
    switch(c){
    case '+':
    printf("%0.lf",a+b);
    break;

    case '-':
    printf("%0.lf",a-b);
    break;

    case '*':
    printf("%0.lf",a*b);
    break;

    case '/':
    if(b==0){
        printf("error");
    }
    else{
    printf("%0.lf",a/b);
    }
    break;

    default:
    printf("error");
    return 0;
}}