#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[100];
    int c=0;
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if (a[i]>a[i-1]){
            continue;
        }
        else{
            c+=1;
            break;
        }
    }
    if (c>1){
        printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }
    
    }
  
    return 0;
