#include <stdio.h>
#include <stdbool.h>

int main() {
    char name[] = "Supatcharanan";
    int age = 20;
    float height = 170.50;
    const char blood = 'O';
    bool Citizen = true;

    printf("+---------------------------------------+\n");
    printf("| Citizen ID                            |\n");
    printf("| Name      : %-25s |\n", name);
    printf("| Age       : %-25d |\n", age);
    printf("| Height    : %-25.2f |\n", height);
    printf("| Blood     : %-25c |\n", blood);
    printf("| Citizen   : %-25s |\n", Citizen ? "true" : "false");
    printf("+---------------------------------------+\n");
}

