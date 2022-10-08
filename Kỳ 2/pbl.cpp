#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
struct Food
{
    int quantity;
    char name[44];
    int price;
};
 
struct Food fd[101];
 
void title()//Tieu de
{
	printf("\t\t-------------------------------------------------------------------------------------\n");
    printf("\t\t|                   DO AN PBL1: LAP TRINH DO AN TINH TOAN                           |\n");
    printf("\t\t|                                                                                   |\n");
    printf("\t\t|                                                                                   |\n");
    printf("\t\t|           DE TAI: XAY DUNG UNG DUNG DAT MON AN VA THANH TOAN DON HANG             |\n");
    printf("\t\t|                                                                                   |\n");
    printf("\t\t|                                                                                   |\n");
    printf("\t\t| Giao vien huong dan            Sinh vien thuc hien          Ma sinh vien          |\n");
    printf("\t\t| Tran Ho Thuy Tien              Phan Hoang Duc Huy           102210256             |\n");
    printf("\t\t|                                Pham Xuan Tuan Hung          102210254             |\n");
    printf("\t\t|                                                                                   |\n");
    printf("\t\t|                                                                                   |\n");
    printf("\t\t-------------------------------------------------------------------------------------\n");
}

 
void menu()//Menu
{
   
    printf("\t\t  =========================== MENU ==============================\n");
    printf("\t\t  _______________________________________________________________\n");
    printf("\t\t  |STT   |         TEN MON       |          GIA TIEN (VND)      |\n");
    printf("\t\t  |______|_______________________|______________________________|\n");
    printf("\t\t  |      |                       |                              |\n");
    printf("\t\t  |  1   |        Pizza          |            100000            |\n");
    printf("\t\t  |______|_______________________|______________________________|\n");
    printf("\t\t  |      |                       |                              |\n");
    printf("\t\t  |  2   |         Coca          |            10000             |\n");
    printf("\t\t  |______|_______________________|______________________________|\n");
    printf("\t\t  |      |                       |                              |\n");
    printf("\t\t  |  3   |         Cream         |            15000             |\n");
    printf("\t\t  |______|_______________________|______________________________|\n");
    printf("\t\t  |      |                       |                              |\n");
    printf("\t\t  |  4   |         Bread         |            5000              |\n");
    printf("\t\t  |______|_______________________|______________________________|\n");
    printf("\t\t  |      |                       |                              |\n");
    printf("\t\t  |  5   |         Lobster       |            1500000           |\n");
    printf("\t\t  |______|_______________________|______________________________|\n");
    printf("\t\t  |      |                       |                              |\n");
    printf("\t\t  |  6   |          Soup         |            30000             |\n");
    printf("\t\t  |______|_______________________|______________________________|\n");
    printf("\t\t  |      |                       |                              |\n");
    printf("\t\t  |  7   |         Abalone       |             2000000          |\n");
    printf("\t\t  |______|_______________________|______________________________|\n");
   
    printf("\t\t  ===============================================================\n");
 
}

void enterCode(char maSo[])//Nhap ma giao dich
{
	printf("\nNhap ma giao dich: ");
    gets(maSo);
}

void display()//Giao dien lua chon
{
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\t\t==================================================================\n");
	printf("\t\t|                                                                |\n");
	printf("\t\t|                1. Chua ket thuc ngay                           |\n");
	printf("\t\t|                2. In ra toan bo hoa don va tong ket doanh thu  |\n");
	printf("\t\t|                                                                |\n");
	printf("\t\t|                                                                |\n");
	printf("\t\t==================================================================\n");
}

 
void charge(int *tongTien, int *count)  //Tinh tien
{
	  	
	int i, j, quantity, number;
 	printf("Nhap so luong va so thu tu cua mon an (0 0 de ket thuc)\n");
        printf("\n");

        for(i = 0; i < 5; i++)
        {
            printf("Item %d: ", i);
            scanf("%d", &quantity);
            scanf("%d", &number);
            if(quantity != 0)
            {
                switch(number)
                {
                case 1:
                    for(j = 1; j <= quantity; j++)
                    {
                        *tongTien += 100000;
                    }
                    strcpy(fd[i].name,"Pizaa");
                    fd[i].price = 100000;
                    fd[i].quantity = quantity;
                    *count += 1;
                    break;
                case 2:
                    for(j = 1; j <= quantity; j++)
                    {
                        *tongTien += 10000;
                    }
                    strcpy(fd[i].name,"Coca");
                    fd[i].price = 10000;
                    fd[i].quantity = quantity;
                    *count += 1;
                    break;
                case 3:
                    for(j = 1; j <= quantity; j++)
                    {
                        *tongTien += 15000;
                    }
                    strcpy(fd[i].name,"Cream");
                    fd[i].price = 15000 ;
                    fd[i].quantity = quantity;
                    *count += 1;
                    break;
                case 4:
                    for(j = 1; j <= quantity; j++)
                    {
                        *tongTien += 5000;
                    }
                    strcpy(fd[i].name,"Bread");
                    fd[i].price = 5000 ;
                    fd[i].quantity = quantity;
                    *count += 1;
                    break;
                case 5:
                    for(j = 1; j <= quantity; j++)
                    {
                        *tongTien += 1500000;
                    }
                    strcpy(fd[i].name,"Lobster");
                    fd[i].price = 1500000;
                    fd[i].quantity = quantity;
                    *count += 1;
                    break;
                case 6:
                    for(j = 1; j <= quantity; j++)
                    {
                        *tongTien += 30000;
                    }
                    strcpy(fd[i].name,"Soup");
                    fd[i].price = 30000;
                    fd[i].quantity = quantity;
                    *count += 1;
                    break;
                case 7:
                    for(j = 1; j <= quantity; j++)
                    {
                        *tongTien += 2000000;
                    }
                    strcpy(fd[i].name,"Abalone");
                    fd[i].price = 2000000;
                    fd[i].quantity = quantity;
                    *count += 1;
                    break;
                case 0:
                    break;
                }
            } else
                break;
        }
        printf("\nKet thuc tien trinh chon mon!");
 }
 
void discount(int *tongTien, float *giamGia, float *thanhTien)//Giam gia
{
    if((*tongTien) >= 2000000)
    {
        (*giamGia) = 0.25 * (*tongTien);
        (*thanhTien) = (*tongTien) - (*giamGia);
    }
    else
    {
        (*giamGia) = 0;
        (*thanhTien) = (*tongTien);
    }
}
 
 
void bill(int count,int tongTien, float giamGia, float thanhTien,int dem)//In ra hoa don
{
	int i;
    printf("\n");
    printf("\n");
    printf("\t\t                                                           \n");
    printf("\t\t                       Hoa Don %d                              \n", dem);
    printf("\t\t-------------------------------------------------------------\n");
    printf("\t\tTEN MON               SO LUONG                GIA TIEN     \n");
    printf("\t\t----------          -------------         -----------------\n");
    for(i = 0; i < count; i++)
    {
        printf("\t\t%-8s                 %-1d                 %-3d VND  \n", fd[i].name, fd[i].quantity, fd[i].price);
    }
    printf("\t\t-------------------------------------------------------------\n"); 
    printf("\t\t                                                           \n");
    printf("\t\tTONG CONG:                                  %d VND      \n", tongTien);
    printf("\t\tGIAM GIA:                                   %.2f VND    \n", giamGia);
    printf("\t\tTHANH TIEN:                                 %.2f VND   \n", thanhTien);
    printf("\t\t                                                          \n");
    printf("\t\t---------------Cam on Quy khach. Hen gap lai!---------------\n");
}
 
void printBill(char *maso)//IN ra toan bo hoa don
{
    FILE *fptr;
 
    char c, filename[101];
    strcpy(filename, maso);
    strcat(filename,".txt");
 
    fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
 
    printf("Tat ca hoa don co trong ngay la: \n");
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fptr);
    }
    fclose(fptr);
}
 
void sumBill(char *maso)//Tinh doanh thu cua ngay
{
    FILE *fptr;
 
    char filename[101];
    strcpy(filename, maso);
    strcat(filename,"_tmp.txt");
    fptr = fopen(filename, "r");
    int tongTien = 0, tien;
    float tongGiamGia = 0, tongThanhTien = 0, giamgia, thanhtien;
    printf("\n");
    while (!feof(fptr)) {
        fscanf(fptr, "%d %f %f", &tien, &giamgia, &thanhtien);
        tongTien += tien; tongGiamGia += giamgia; tongThanhTien += thanhtien;
    }
    fclose(fptr);
    printf("\t\t===============================================================\n");
    printf("\t\tTONG TIEN :                                        %d VND    \n", tongTien - tien);
    printf("\t\tGIAM GIA :                                        %.2f VND   \n", tongGiamGia - giamgia);
    printf("\t\tTHANH TIEN :                                      %.2f VND   \n", tongThanhTien - thanhtien);
    printf("\t\t===============================================================\n");
}

int checkEndOfDay()//Kiem tra cuoi ngay
{
    int n;
    display();
    printf("\n");
    printf("Nhap su lua chon: \n");
    scanf("%d", &n);
    if(n == 1)
    {
        return 0;
    }
    else if(n == 2)
    {
        char filename[101];
        printf("Nhap ma giao dich de in ra toan bo don hang co trong ngay:\n");
        scanf("%s", filename);
        printBill(filename);
        printf("\n");
        sumBill(filename);
        return 1;
    }
}
void saveBill(int tongTien, float giamGia, float thanhTien, int count, char maSo[], char tmp[],int dem)//Luu hoa don
{
		int i;
        FILE *FileIn, *ftmp;
        
        //Luu gia tri cac bien vao file tmp
        ftmp = fopen(tmp, "a+");
        fprintf(ftmp, "%d %f %f\n", tongTien, giamGia, thanhTien);
        
        
		//Luu hoa don vao file maSo
		FileIn = fopen(maSo, "a+");
        fprintf(FileIn, "\n");
        fprintf(FileIn, "\n");
        fprintf(FileIn, "\t\t                                                           \n");
        fprintf(FileIn, "\t\t                      Hoa Don %d                              \n", dem);
        fprintf(FileIn, "\t\t-------------------------------------------------------------\n");
        fprintf(FileIn, "\t\tTEN MON               SO LUONG                GIA TIEN     \n");
        fprintf(FileIn, "\t\t----------          -------------         -----------------\n");
        for(i = 0; i < count; i++){
        	fprintf(FileIn, "\t\t%-8s                 %-1d                 %-3d VND  \n", fd[i].name, fd[i].quantity, fd[i].price);
		}
		fprintf(FileIn, "\t\t-------------------------------------------------------------\n");
		fprintf(FileIn, "\t\t                                                           \n");
		fprintf(FileIn, "\t\tTONG CONG:                                  %d VND      \n", tongTien);
		fprintf(FileIn, "\t\tGIAM GIA:                                   %.2f VND    \n", giamGia);
		fprintf(FileIn, "\t\tTHANH TIEN:                                 %.2f VND   \n", thanhTien);
        fclose(ftmp);
        fclose(FileIn);

}


int main()
{
	system("color 2");
	int dem = 0;
    int EndOfDay = 0, FirstTime = 1;
    char maSo[101], tmp[101];
    float giamGia;
    float thanhTien;
    int i, j;
    int tongTien = 0, count = 0;
    
	while (EndOfDay == 0){
        system("cls");
        title();
        dem++;
        if (FirstTime == 1) {
            enterCode(maSo);
            strcpy(tmp, maSo);
            strcat(maSo,".txt");
            strcat(tmp, "_tmp.txt");
            FirstTime = 0;
        }
 
       
        menu();
 
        float giamGia;
        float thanhTien;
        int i, j;
        int tongTien = 0, count = 0;
        
		charge(&tongTien, &count);
 
        discount(&tongTien,&giamGia,&thanhTien);
 
        bill(count,tongTien,giamGia,thanhTien,dem);
        
		saveBill(tongTien,giamGia,thanhTien,count,maSo,tmp,dem);
        
		EndOfDay = checkEndOfDay();
    }
 
    return 0;
}
 
 
