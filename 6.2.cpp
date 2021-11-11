
#include<stdio.h>
#include<math.h>
#define Max_size 100

void NHAPMANG(int arr[],int n){
    printf("\nNHAP MANG : ");
    for (int i = 0; i <n ; i++)
    {
        printf("\narr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
}
void Xuatmang(int arr[],int n){
    printf("\nXUAT MANG :");
    for(int i=0;i<n;i++){
        printf("\tarr[%d] = %d",i,arr[i]);
    }
}

int  Testprime(int n){
    if(n<2) return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n % i ==0){
            return 0;
        }
    }return 1;
}

void Them(int arr[],int &n,int posision){
    for (int  i = n; i > posision;i--)
    {
        arr[i] = arr[i -1];
    }
    arr[posision] = 0;
    n++;
}

void sua_mang(int arr[],int &n){
    for (int  i = 0; i < n; i++)
    {
        if(Testprime(arr[i]) == 1){
            Them(arr,n,i+1);
        }
    }
}
int main(){
    int arr[Max_size];
    int n;
    do
    {
        printf("nhap do dai mang: ");
        scanf("%d",&n);
    } while (n<=0 || n> Max_size);
    NHAPMANG(arr,n);
    Xuatmang(arr,n);
    printf("\nMANG SAU KHI SUA : ");
    sua_mang(arr,n);
    Xuatmang(arr,n);
    return 0;
}