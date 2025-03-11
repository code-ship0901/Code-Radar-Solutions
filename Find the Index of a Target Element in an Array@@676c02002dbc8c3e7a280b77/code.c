#include <stdio.h>
int main(){
    int l;
    scanf("%d",&l);
    int t;
    scanf("%d",&t);
    int a[l];
    for (int i=0;i<l;i++){
         scanf("%d",&a[i]);
    }

    for (int i=0;i<l;i++){
         if (t==a[i]){
            printf("%d",i);
            
         }

    }
    printf("-1");
} 