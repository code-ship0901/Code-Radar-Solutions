#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int inc=1;
    int dec=1;
    
    for(int i=0;i<n;i++){
        if (a[i]>a[i+1]){
            inc=0;
        }
    }
    

    for(int i=0;i<n;i++){
        if (a[i]>=a[i+1]){
            dec=0;
        }
   
    }
    
   if (inc||dec){
    printf("YES");
   }
    else{
        printf("NO");
    }

}