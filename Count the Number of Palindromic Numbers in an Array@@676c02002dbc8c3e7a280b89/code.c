#include <stdio.h>
int main(){
    int n,fd;
    int rev=0;
    int c=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for (int i=0;i<n;i++){
        int og=a[i];
        while (a[i]>0){
            fd=a[i]%10;
            rev=rev*10+fd;
            a[i]=a[i]/10;
        }
        if (a[i]==rev){
            c++;
        }
    }
    printf("%d",c);
}