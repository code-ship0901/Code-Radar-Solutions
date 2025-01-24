#include <stdio.h>
int main() {
    int a;
    int c=0;
    scanf("%d",&a);
    for (int i=2;i<a;i++){
        if (a%i==0){
        c+=1;
        }
        else{
            continue;
        }
    }
    if (c>0){
    printf("Prime");
    }
    else{
printf("Not Prime");
    }
    return 0;
}