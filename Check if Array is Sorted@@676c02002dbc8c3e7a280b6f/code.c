#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[100];
    for (int i=1;i<n;i++){
        scanf("%d",&a[i]);
        if (a[i]<a[i-1]){
             printf("Not Sorted");
             return 0;
        }
       
    }
  
    printf("Sorted");
}
  
    
