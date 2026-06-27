#include <stdio.h>
#include <stdbool.h>

int main() {
    int number = 20;
    float height = 170.2; 
    double salary = 35000.45532; //เลขทศนิยมที่ละเอียดกว่า float
    char singleCharacter = 'A'; //ตัวอักษร1ตัว ใช้ single quote
    char name[] = "Supatcharanan";
    bool isStudent = true; //ถ้าจะใช้ booleen ต้องเพิ่ม stdbool 
    const int Days = 10; //ค่าคงที่

    //-----------------Format-----------------------

    printf("%d\n", number);
    printf("%f\n", height);
    printf("%lf\n", salary);
    printf("%c\n", singleCharacter);
    printf("%s\n", name);
    printf("%d\n", isStudent); //Booleen ไม่มี format จะแสดงผลเป็น 0 / 1

}