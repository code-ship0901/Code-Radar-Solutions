#include <stdio.h>
int main(){
    int l;
    scanf("%d",&l);
   
    int a[l];
    for (int i=0;i<l;i++){
        scanf("%d",&a[i]);
    }

    int t;
    scanf("%d",&t);

    for (int i=0;i<l;i++){
         if (t==a[i]){
            printf("%d",i);
            return 0;
         }

    }
    printf("-1");
    return 0;
} 