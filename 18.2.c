#include <stdio.h>
#include <string.h>
struct sinhvien
{
    char name[30];
    int age;
    char phone[20];
};

int main()
{
    struct sinhvien sv;
    printf("Nhap ten sv: ");
    fgets(sv.name,sizeof(sv.name),stdin);
    sv.name[strcspn(sv.name, "\n")] = '\0';
    printf("Nhap tuoi sv: ");
    scanf("%d",&sv.age);
    getchar();
    printf("Nhap SDT sv: ");
    fgets(sv.phone,sizeof(sv.phone),stdin);
    sv.phone[strcspn(sv.phone, "\n")] = '\0';
   printf("Thong tin sinh vien");
   printf("\nName: %s",sv.name);
   printf("\nAge: %d",sv.age);
   printf("\nPhone: %s",sv.phone);
   

    return 0;
}
