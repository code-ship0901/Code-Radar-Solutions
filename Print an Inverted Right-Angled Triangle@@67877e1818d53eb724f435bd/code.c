#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for (int i=0,i<a;i++){
        for (int j=a;i>0;i--){
           printf("*");
        }printf(" ");
    }
    return 0;
}