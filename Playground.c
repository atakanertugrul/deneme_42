#include <stdio.h>
//değişti
int main()
{
    int ata;
int islem=0;

int a=0;
int b=0;
int result=0;

printf("Yapılacak işlemi seç: 1- toplama, 2-çıkarma\n");
scanf("%d", &islem);

printf("İlk sayıyı giriniz:\n");
scanf("%d", &a);

printf("İkinci sayıyı giriniz:\n");
scanf("%d", &b);

if(islem==1){
result = a+b;
}else{
result = a-b;}

printf("Sonuç: %d\n", result);

return 0;

}





