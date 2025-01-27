#include <stdio.h>
int main() {
    int a;
    int c=1;
    scanf("%d",&a);
    for(int i=1;i<=a+1;i++){
        for (int j=1;j<i+1;j++){
            printf("%d ",c);
            c+=1;
        }
        printf("\n");
    }
   
    return 0;
}