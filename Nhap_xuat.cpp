#include<stdio.h>
#define MAX 20
#include<stdlib.h>
#include<conio.h>
#include<math.h>

void Input(int arr[][MAX],int dong,int cot){
    printf("\n===== MOI NHAP MANG HAI CHIEU =====");
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            printf("\n\tArray[%d][%d] = ",i,j); scanf("%d",&arr[i][j]);
        }
    }
}
void Output(int arr[][MAX],int dong,int cot){

    printf("\nXUAT MANG : \n");
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            printf("\t\tArray[%d][%d] = %d",i,j,arr[i][j]); 
        }
        printf("\n");
    }
}

void Timkiem(int arr[][MAX],int dong,int cot,int value){
    bool timthay = false;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (arr[i][j] == value)
            {
                printf("\n %d xuat hien o arr[%d][%d] ",value,i,j);
                timthay = true;
            }
        }
    } if (timthay == false)
    {
        printf("\nKhong tim thay gia tri nay trong mang ! ");
    }
    
}

bool  Testprime(int n){
    if(n<2) return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n % i ==0){
            return 0;
        }
    }return 1;
}
void ktprime(int arr[][MAX],int dong,int cot){
    int count = 0;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (Testprime(arr[i][j]) == 1)
            {
                count++;
            }
        }   
    }
    if (count == dong*cot)
    {
        printf("\nMang toan so nguyen to ! ");
    }else if(count == 0){
        printf("\nMang khong chua so nguyen to nao ! ");
    }else{
        printf("\nMang chua : %d so nguyen to ",count);
    }
}
void kt_chanle(int arr[][MAX],int dong,int cot){
    int nchan,nle;
    nchan=nle = 0;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j< cot ; j++)
        {
            if (arr[i][j] % 2 == 0)
            {
                nchan++;
            }else{
                nle++;
            }  
        }
    }
    if(nchan ==0){
        printf("\nMang toan so le ! ");
    }else if (nle == 0)
    {
        printf("\nMang toan so chan ! ");
    }else{
        printf("\nso chan : %d ",nchan);
        printf("\nSo le : %d",nle);
    }
}

int Tong_mang(int arr[][MAX],int dong,int cot){
    int sum=0;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            sum+=arr[i][j];
        }
    }return sum;
}
int Tongdong(int arr[][MAX],int dong,int cot,int posision){
    int sum=0;
    int i=0;
    while (i<cot)
    {
        sum+=arr[posision][i];
        i++;
    }
    return sum;
}
int Tongcot(int arr[][MAX],int dong,int cot,int posision){
    int sum=0;
    int i=0;
    while (i<dong)
    {
        sum+=arr[i][posision];
        i++;
    }
    return sum;
}
int Tongcheochinh(int arr[][MAX],int dong,int cot){
    int sum =0;
    int i = 0;
    while (i<dong)
    {
        sum += arr[i][i];
        i++;
    }
    return sum;
}
int Tongcheophu(int arr[][MAX],int dong,int cot){
    int sum = 0;
    int i = 0;
    int j = dong -1;
    while (true )
    {
        sum+=arr[i][j];
        if (j == 0)
        {
            break;
        }
        i++;
        j--;
    }
    return sum;
}



int Max(int arr[][MAX],int dong,int cot){
    int max = arr[0][0];
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }           
        }      
    } 
    return max;
}
int Min(int arr[][MAX],int dong,int cot){
    int min = arr[0][0];
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }           
        }      
    }  return min;
}

int main(){
    int arr[MAX][MAX];
    int dong,cot;
    int key;
    bool danhap= false;
    while(true){
        system("cls");
        printf("************************************************\n");
        printf("**      CHUONG TRINH THAO TAC MANG 2 CHIEU    **\n");
        printf("**        1. Nhap Mang                        **\n");
        printf("**        2. Xuat Mang                        **\n");
        printf("**        3. Tim Kiem                         **\n");
        printf("**        4. Kiem Tra Tinh Chat               **\n");
        printf("**        5. Tinh Tong Phan Tu                **\n");
        printf("**        6. Tim Gia Tri Lon/Nho Nhat         **\n");
        printf("**        0. Thoat                            **\n");
        printf("************************************************\n");
        printf("**            Nhap lua chon cua ban           **\n");
        printf("\nBan chon : "); scanf("%d",&key);
        switch (key)
        {
        case 1:
            printf("Ban da chon ' Nhap Mang ' ");
            do{
                printf("\n*** NHAP DONG & COT CHO MANG HAI CHIEU *** ");
                printf("\n       Dong : "); scanf("%d",&dong);
                printf("\n       Cot  : "); scanf("%d",&cot);
                if (cot > MAX || cot < 0 || dong > MAX || dong < 0){
                    printf("\n*** Yeu Cau Nhap Lai ! *** ");
                }
        
            } while (cot > MAX || cot < 0 || dong > MAX || dong < 0);
            Input(arr,dong,cot);
            printf("\nBan da nhap thanh cong!");
            danhap = true;
            printf("\nBam phim bat ky de tiep tuc!");
            getch();
            break;
        case 2:
            if (danhap)
            {
                printf("\nBan da chon ' Xuat Mang ' ");
                Output(arr,dong,cot);
            }else{
                printf("\nBan phai ' Nhap Mang '  !");
            }
            printf("\nBam phim bat ky de tiep tuc!");
            getch();
            break;
        case 3:
            int tk;
            if (danhap)
            {
                printf("\nBan da chon ' Tim Kiem ' ");
                printf("\nGia tri ban muon tim : "); scanf("%d",&tk);
                Timkiem(arr,dong,cot,tk);
            }else{
                printf("\nBan phai ' Nhap Mang '  !");
            }
            printf("\nBam phim bat ky de tiep tuc!");
            getch();
            break;
        case 4:
            if (danhap)
            {
                printf("\nBan da chon ' Kiem Tra Tinh Chat ' ");
                ktprime(arr,dong,cot);
                kt_chanle(arr,dong,cot);
            }else{
                printf("\nBan phai ' Nhap Mang '  !");
            }
            printf("\nBam phim bat ky de tiep tuc!");
            getch();
            break;
        case 5:
            if (danhap)
            {
            printf("\nBan da chon ' Tinh Tong ' ");
            int key1;
            while (key1 != 0)
            {
                system("cls");
                printf("*****************************************************\n");
                printf("**           TINH TONG CO BAN TREN MANG            **\n");
                printf("**             1. Tong Tat Ca Phan Tu              **\n");
                printf("**             2. Tong Mot Dong Bat Ki             **\n");
                printf("**             3. Tong Mot Cot Bat Ki              **\n");
                printf("**    *** Phep tinh Yeu Cau Ma Tran Vuong ***      **\n");
                printf("**             4. Tong Duong Cheo Chinh            **\n");
                printf("**             5. Tong Duong Cheo Phu              **\n");
                printf("**             0. Thoat                            **\n");
                printf("*****************************************************\n");
                printf("**              Nhap lua chon cua ban              **\n");
                printf("\nBan chon : "); scanf("%d",&key1);
                switch (key1)
                {
                case 1:
                    printf("\nBan chon ' Tong Mang ' ");
                    printf("\nTong Mang : %d ",Tong_mang(arr,dong,cot));
                    printf("\nBam phim bat ky de tiep tuc!");
                    getch();
                    break;
                case 2:
                    printf("\nBan chon ' Tong Dong ' ");
                    int dong1;
                    do
                    {
                        printf("\nNhap dong muon tinh : "); scanf("%d",&dong1);
                        if (dong1>=dong || dong1 < 0)
                        {
                            printf("\nQua gioi han, Nhap lai ! ");
                        }
                    } while (dong1>=dong || dong1 < 0);
                    printf("\nTong dong %d = %d ",dong1,Tongdong(arr,dong,cot,dong1));
                    printf("\nBam phim bat ky de tiep tuc!");
                    getch();
                    break;
                case 3:
                    printf("\nBan chon ' Tong Cot ' ");
                    int cot1;
                    do
                    {
                        printf("\nNhap cot muon tinh : "); scanf("%d",&cot1);
                        if (cot1>=dong || cot1 < 0)
                        {
                            printf("\nQua gioi han, Nhap lai ! ");
                        }
                    } while (cot1>=cot || cot1 < 0);
                    printf("\nTong dong %d = %d ",cot1,Tongcot(arr,dong,cot,cot1));
                    printf("\nBam phim bat ky de tiep tuc!");
                    getch();
                    break;
                case 4:
                    printf("\nBan Chon ' Tong Duong Cheo Chinh '");
                    if (dong == cot)
                    {
                        printf("\nTong duong cheo chinh : %d ",Tongcheochinh(arr,dong,cot));
                    }else{
                        printf("\nKhong thoa yeu cau ! ");
                    }
                    printf("\nBam phim bat ky de tiep tuc!");
                    getch();
                    break;
                case 5:
                    printf("\nBan Chon ' Tong Duong Cheo Phu '");
                    if (dong == cot)
                    {
                        printf("\nTong duong cheo phu : %d ",Tongcheophu(arr,dong,cot));
                    }else{
                        printf("\nKhong thoa yeu cau ! ");
                    }
                    printf("\nBam phim bat ky de tiep tuc!");
                    getch();
                    break;
                case 0:
                    printf("\nBan chon ' Thoat ' ");
                    key1 = 0;
                default:
                    printf("\nKhong co chuc nang nay ! ");
                    printf("\nBam phim bat ky de tiep tuc ! ");
                    getch();
                    break;
                }
            }
            }else{
                printf("\nBan phai ' Nhap Mang '  !");
            }
            printf("\nBam phim bat ky de tiep tuc!");
            getch();
            break;        
        case 6:
            if (danhap)
            {
                printf("\nBan da chon tim so lon va nho nhat :");
                printf("\nGia tri lon nhat cua  mang : %d",Max(arr,dong,cot));
                printf("\nGia tri nho nhat cua  mang : %d",Min(arr,dong,cot));
            }else{
                printf("\nBan phai ' Nhap Mang '  !");
            }
            printf("\nBam phim bat ky de tiep tuc!");
            getch();
            break;
        case 0:
            printf("\nBan da chon thoat chuong trinh !");
            getch();
            return 0;
        default:
            printf("\nKhong co chuc nang nay ! ");
            printf("\nBam phim bat ky de tiep tuc ! ");
            getch();
            break;
        }
    }
}