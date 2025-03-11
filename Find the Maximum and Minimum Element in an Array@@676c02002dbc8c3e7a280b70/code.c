#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int t[n];
    for (int i=0;i<n;i++){
        scanf("%d",&t[i]);
        int max=t[0];
        int min=t[0];
        if (t[i]>max){
            max=t[i];
        }
        if (t[i]<min){
            min=t[i];
        }
    }
    printf("%d %d",min,max);
    
}

