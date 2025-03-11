#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int ce=0;
    int co=0;
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if (a[i]%2==0){
             ce++;
        }
        else if (a[i]%2!=0){
             co++;
        }
    }
    printf("%d %d",ce,co);
}
  