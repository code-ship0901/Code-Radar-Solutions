#include <stdio.h>
int main() {
    int num,m;
    scanf("%d %d",&num,&m);
    num &= (~(1<<m))
    printf("%d",num);
    return 0;
}