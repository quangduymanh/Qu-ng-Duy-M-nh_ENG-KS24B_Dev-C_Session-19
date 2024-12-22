#include <stdio.h>
#include <string.h>
struct student {
    int id;
    char name[100];
    int age;
    char phonenumber[20];
};
int main() {
    struct student students[5];
    int current_length = 5;
    students[0] = (struct student){1, "Quang Duy Manh", 20, "0365303096"};
    students[1] = (struct student){2, "Nguyen Manh Thang", 21, "0987654321"};
    students[2] = (struct student){3, "Nguyen Tran Bao Khanh ", 22, "0192837465"};
    students[3] = (struct student){4, "Phan Phuoc Anh", 23, "0234567890"};
    students[4] = (struct student){5, "Phung Quang Tien", 24, "0345678901"};
    printf("danh sach sinh vien ban dau:\n");
    if (current_length == 0) {
        printf("khong co sinh vien trong danh sach.\n");
    } else {
        for (int i = 0; i < current_length; i++) {
            printf("id: %d, ten: %s, tuoi: %d, so dien thoai: %s\n",
                   students[i].id, students[i].name, students[i].age, students[i].phonenumber);
        }
    }
    int id_to_delete;
    printf("\nnhap id sinh vien can xoa: ");
    scanf("%d", &id_to_delete);
    int found = -1;
    for (int i = 0; i < current_length; i++) {
        if (students[i].id == id_to_delete) {
            found = i;
            break;
        }
    }
    if (found == -1) {
        printf("sinh vien voi id %d khong ton tai trong mang.\n",id_to_delete);
    } else {
        for (int i = found; i < current_length - 1; i++) {
            students[i] = students[i + 1];
        }
        current_length--;
        printf("sinh vien voi id %d da bi xoa.\n", id_to_delete);
    }
    printf("\ndanh sach sinh vien sau khi xoa:\n");
    if (current_length == 0) {
        printf("khong co sinh vien trong danh sach.\n");
    } else {
        for (int i = 0; i < current_length; i++) {
            printf("id: %d, ten: %s, tuoi: %d, so dien thoai: %s\n",
                   students[i].id, students[i].name, students[i].age, students[i].phonenumber);
        }
    }
    return 0;
}
