#include <stdio.h>
int main(){
    int n,fd;
    int sum=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        while (a[i]>0){
            fd=a[i]%10;
            sum+=fd;
            a[i]=a[i]/10;
        }
        printf("%d ",sum);
   }
}
