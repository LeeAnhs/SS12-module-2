#include <stdio.h>

void InMang () {
   int arr[100],n;
   printf("Nhap so mang:");
   scanf("%d",&n);
   for(int i=0;i<n;i++){
       printf("Nhap so phan tu cua mang:");
       scanf("%d",&arr[i]);
   }
   for(int i=0;i<n;i++){
       printf("%d\n",arr[i]);
   }
    }
int main () {
    InMang();
    return 0;
}
