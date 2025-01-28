#include <stdio.h>
void unset(int num, int pos){
    num &=(~(1<<pos));
}
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    unset(n,m);
    printf("%d",num);
    return 0;
}