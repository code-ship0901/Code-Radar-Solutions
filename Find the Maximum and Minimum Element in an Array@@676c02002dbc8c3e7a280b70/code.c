#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int t[n];
    int max;
    int min;
    for (int i=0;i<n;i++){
        scanf("%d",&t[i]);
        max=t[0];
        min=-100;
        if (t[i]>max){
            max=t[i];
        }
        if (t[i]<min){
            min=t[i];
        }
    }
    printf("%d %d",min,max);
    
}

