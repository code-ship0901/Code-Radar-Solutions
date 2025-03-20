#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    
    for (int i=0;i<a;i++){
       int c=0;
       for (int j=i+1;j<a;j++){ 

          if (arr[i]==arr[j]){
            c++;
          }
         
    }
     printf("%d %d\n",arr[i],c+1);

    }

}