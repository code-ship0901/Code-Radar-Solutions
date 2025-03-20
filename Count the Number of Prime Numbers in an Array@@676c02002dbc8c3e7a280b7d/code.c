#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    
    int count=0;
    for (int i=0;i<n;i++){
        int c=0;
        for (int j=1;j<a[i];j++){
            if (a[i]%j==0){
                c++;
            }
        }
        if (c==1){
            count++;
        }
    }
    printf("%d",count);


}