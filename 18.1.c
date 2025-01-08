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
   strcpy(sv.name,"Tran Binh An");
   sv.age=13;
   strcpy(sv.phone,"0978654323");
   printf("Thong tin sinh vien");
   printf("\nName: %s",sv.name);
   printf("\nAge: %d",sv.age);
   printf("\nPhone: %s",sv.phone);
   

    return 0;
}
