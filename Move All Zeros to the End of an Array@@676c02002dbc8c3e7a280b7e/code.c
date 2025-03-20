#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int c=0;
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for (int i=0;i<n;i++){
        if (a[i]!=0){
            printf("%d ",a[i]);
        }
        else{
            c++;
        }
    }
    while(c--){
        printf("0 ");
    }
}