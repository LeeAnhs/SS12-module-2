#include <stdio.h>

int sum (int a, int b) {
    return a + b;
}
int main () {
    int numbera,numberb,tong;
    
    printf ("Nhap so a:\n");
    scanf("%d",&numbera);
    printf("Nhap so b:\n");
    scanf("%d",&numberb);
    
    tong= sum(numbera, numberb);
    
    printf("Tong 2 so a va b la :%d",tong);
    return 0;
    
}
