#include<stdio.h>

int factorial(int num){
    if(num==0){
        return 1;
    }
    return num*factorial(num-1);
}
int main(){
    int n;
    printf("Nhap so nguyen bat ky\n");
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;
}
