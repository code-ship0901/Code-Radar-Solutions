#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n]; 
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int max;
    if (a[0]>a[1]){
        printf("%d\n",a[0]);
        return 0;
    }
    
    for (int i=1;i<n-1;i++){
        if((a[i]>a[i+1]) && (a[i]>a[i-1])){
            max=a[i];
            printf("%d",max);
            return 0;
        }
    }
    
    if (a[n-1]>a[n-2]){
        printf("%d",a[n-1]);
        return 0;
    }

    printf("-1");
}