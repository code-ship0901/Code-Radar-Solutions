#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float sum=a+b+c;
    float av=sum/3;
    printf("Average: %.2f",av);
    return 0;
}