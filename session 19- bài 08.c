#include <stdio.h>
#include <string.h>
struct student {
    int id;
    char name[100];
    int age;
    char phonenumber[20];
};
void sort_students_by_name(struct student students[], int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                struct student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}
void print_students(struct student students[], int length) {
    for (int i = 0; i < length; i++) {
        printf("id: %d, ten: %s, tuoi: %d, so dien thoai: %s\n",
               students[i].id, students[i].name, students[i].age, students[i].phonenumber);
    }
}
int main() {
    struct student students[5] = {
        {1, "Quang Duy Manh", 20, "0365303096"},
        {2, "Nguyen Manh Thang", 21, "0987654321"},
        {3, "Nguyen Tran Bao Khanh", 22, "0192837465"},
        {4, "Phan Phuoc Anh", 23, "0234567890"},
        {5, "Phung Quang Tien", 24, "0345678901"}
    };
    int length = 5;
    printf("danh sach sinh vien truoc khi sap xep:\n");
    print_students(students, length);
    sort_students_by_name(students, length);
    printf("\ndanh sach sinh vien sau khi sap xep:\n");
    print_students(students, length);
    return 0;
}
