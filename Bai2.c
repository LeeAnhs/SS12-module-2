#include <stdio.h>

void InMang (int arr[100],int n) {
   for(int i=0;i<n;i++){
       printf("%d\n",arr[i]);
   }
   }
int main () {
    int arr[100],n;
    printf("Nhap vao so mang:\n");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("Nhap phan tu trong mang:");
        scanf("%d",&arr[i]);
    }
    InMang(arr,n);
    return 0;
}
