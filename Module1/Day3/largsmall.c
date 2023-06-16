#include<stdio.h>

int largeandsmall(int n);
int lenofnum(int n);

int main(){
    int x;
    scanf("%d",&x);
    largeandsmall(x);
    return 0;
}

int largeandsmall(int n){
    int len = lenofnum(n);
    int x[len];
    for(int i=len-1;i>=0;--i){
       x[i] = n%10;
        n = n/10;
    }
    int lar =x[0], small =x[0];
    for(int i=0;i<len;i++){
        if(lar<x[i]){
            lar = x[i];
        }
        if(small>x[i]){
            small = x[i];
        }
    }
    if(len==1){
        printf("Not Valid");
    }
    else{
        printf("%d and %d", small, lar);
    }

}

int lenofnum(int n){
    int len = 0;
    if(n<10){
        return 1;
    }
    if(n<0){
        n = -n;
    }
    while (n>0){
        len+=1;
        n = n/10;
    }
    return len;
    
}

