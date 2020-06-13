#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void nhap(float KWH, float Tien)
{
	printf("Nhap so KWH da su sung: ");
 scanf("%f",&KWH);
 printf("\n*****************************************");
if(KWH>400) Tien=909000+(KWH-400)*2927;
   else if(KWH>300) Tien=625600+(KWH-300)*2834;
    else if(KWH>200) Tien=372000+(KWH-200)*2536;
     else if(KWH>100) Tien=170600+(KWH-100)*2014;
      else if(KWH>50) Tien=83900+(KWH-50)*1734;
       else Tien=KWH*1678;
 printf("\n\nSo tien ban phai tra la: %.0f dong",Tien);
 printf("\n*****************************************");
 printf("\ncam on co va cac ban da xem!");
 printf("\nnhan enter de ket thuc bai nay!\n");	
printf("\n*******************************************");
if(KWH>400) printf(" \n\n canh bao tien dien cua ban dang o bac cao nhat voi gia dien là 2927 vnd/kw");
else if(KWH>300) printf("\n canh bao tien dien cua ban dang o bac 5 voi gia dien là 2834 vnd/kw ");
else if(KWH>200) printf("\n canh bao tien dien cua ban dang o bac 4 voi gia dien là 2536 vnd/kw");
else if(KWH>100) printf("\n canh bao tien dien cua ban dang o bac 3 voi gia dien là 2014 vnd/kw");
}
void sokhoi(float KWH, float Tien, float Khoi)
{
	 printf("\n\n Nhap so Khoi da su sung: ");
 scanf("%f",&Khoi);
	printf("\n*****************************************");
	if(Khoi>30) Tien=289540+(Khoi-30)*15929;
     else if(Khoi>20) Tien=130250+(Khoi-20)*8669;
      else if(Khoi>10) Tien=59730+(Khoi-10)*7052;
       else Tien=Khoi*5973;
 printf("\n\nSo tien nuoc ban phai tra la: %.0f dong",Tien);
 printf("\n*****************************************");
 printf("\ncam on co va cac ban da xem!");
 printf("\nnhan enter de ket thuc bai nay!");
	}
void Menu(float KWH,float Tien,float Khoi ) {
	int k;
	while(true){
	  system("cls");
        printf("                                     ----------------------------------------\n");
        printf("                                     |                MENU                  |\n");
        printf("                                     |      1. tinh tien dien               |\n");
        printf("                                     |      2. tinh tien nuoc               |\n");
        printf("                                     |      3. thoat                        |\n");
        printf("                                     ----------------------------------------\n");
        printf("                                     **       Nhap lua chon cua ban        **\n");
        scanf("%d",&k);
        switch(k){
        	case 1:
        		printf("\nBan da chon tính tien dien!\n");
                nhap(KWH,Tien);
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 2:
                    printf("\nBan da chon tinh tien nuoc!\n");
                    sokhoi(KWH,Tien,Khoi);
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            default:
                printf("\nKhong co chuc nang nay!\n");
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 3:
                    printf("\nBan da chon thoat!\n");
                exit(0);
                
}}}
int main()
{
 float KWH, Tien, Khoi;
 nhap(KWH,Tien);
 int k;
 sokhoi(KWH,Tien,Khoi);
 bool DaNhap = false;
 Menu(KWH,Tien,Khoi);}
