#include <stdio.h>
int main() {
    int a;
    int c=1;
    scanf("%d",&a);
    for(int i=0;i<a+1;i++){
        for (int j=0;j<i+1;j++){
            printf("%d ",c);
            c+=1;
        }
    }printf("\n");
   
    return 0;
}