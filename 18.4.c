#include <stdio.h>
#include <string.h>
struct sinhvien
{
    int ID;
    char name[30];
    int age;
    char phone[20];
};

int main()
{
    struct sinhvien sv[5];
    for(int i=0;i<5;i++)
    {
    printf("Nhap thong tin sv thu %d",i+1);
    printf("\nID cua sinh vien la: %d",sv[i].ID=i+1);
    printf("\nNhap ten sv: ");
    fgets(sv[i].name,sizeof(sv[i].name),stdin);
    sv[i].name[strcspn(sv[i].name, "\n")] = '\0';
    printf("Nhap tuoi sv: ");
    scanf("%d",&sv[i].age);
    getchar();
    printf("Nhap SDT sv: ");
    fgets(sv[i].phone,sizeof(sv[i].phone),stdin);
    sv[i].phone[strcspn(sv[i].phone, "\n")] = '\0';
    }
    for(int i=0;i<5;i++)
    {
    printf("\nThong tin sinh vien thu %d",i+1);
    printf("\nID cua sinh vien la: %d",sv[i].ID);
   printf("\nName: %s",sv[i].name);
   printf("\nAge: %d",sv[i].age);
   printf("\nPhone: %s",sv[i].phone);
    }
   

    return 0;
}
