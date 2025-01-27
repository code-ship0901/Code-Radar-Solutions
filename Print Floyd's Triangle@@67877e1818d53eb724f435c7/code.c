#include <stdio.h>
int main() {
    int a;
    int c=1;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for (int j=0;j<i;j++){
            printf("%d ",c);
            c+=1;
        }
    }printf("\n");
   
    return 0;
}