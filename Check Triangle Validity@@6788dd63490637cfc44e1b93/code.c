#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if ((a+b>c) && (a+c>b) && (b+c>d)){
    printf("%Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}