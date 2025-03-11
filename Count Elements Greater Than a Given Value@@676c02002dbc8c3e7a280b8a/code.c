#include <stdio.h>
int main(){
int t;
int l;
int c=0;
scanf("%d %d",&l, &t);
int a[l];
for (int i=0;i<l;i++){
    scanf("%d",&a[i]);
}
for (int i=0;i<l;i++){
    if (a[i]>t){
        c++;
    }
}
printf("%d",c);
}