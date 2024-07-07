#include <stdio.h>
#include "salimbay.h"

void print_menu() {
    printf("Tanlang:\n");
    printf("1. Massiv elementlarini chiqarish\n");
    printf("2. Toq elementlarni chiqarish\n");
    printf("3. Juft elementlarni chiqarish\n");
    printf("4. Manfiy elementlarni chiqarish\n");
    printf("5. Musbat elementlarni chiqarish\n");
    printf("6. Toq elementlarning yig'indisi va soni\n");
    printf("7. Juft elementlarning yig'indisi va soni\n");
    printf("8. Manfiy elementlarning yig'indisi va soni\n");
    printf("9. Musbat elementlarning yig'indisi va soni\n");
    printf("10. Tub elementlarni chiqarish\n");
    printf("11. Tub elementlarning yig'indisi va soni\n");
    printf("0. Chiqish\n");
}

void handle_choice(int choice, int arr[], int size) {
    switch (choice) {
        case 1:
            printf("Massiv elementlari: ");
            print_array(arr, size);
            break;
        case 2:
            printf("Toq elementlar: ");
            print_odd_elements(arr, size);
            break;
        case 3:
            printf("Juft elementlar: ");
            print_even_elements(arr, size);
            break;
        case 4:
            printf("Manfiy elementlar: ");
            print_negative_elements(arr, size);
            break;
        case 5:
            printf("Musbat elementlar: ");
            print_positive_elements(arr, size);
            break;
        case 6:
            printf("Toq elementlarning yig'indisi: %d\n", sum_odd_elements(arr, size));
            printf("Toq elementlarning soni: %d\n", count_odd_elements(arr, size));
            break;
        case 7:
            printf("Juft elementlarning yig'indisi: %d\n", sum_even_elements(arr, size));
            printf("Juft elementlarning soni: %d\n", count_even_elements(arr, size));
            break;
        case 8:
            printf("Manfiy elementlarning yig'indisi: %d\n", sum_negative_elements(arr, size));
            printf("Manfiy elementlarning soni: %d\n", count_negative_elements(arr, size));
            break;
        case 9:
            printf("Musbat elementlarning yig'indisi: %d\n", sum_positive_elements(arr, size));
            printf("Musbat elementlarning soni: %d\n", count_positive_elements(arr, size));
            break;
        case 10:
            printf("Tub elementlar: ");
            print_prime_elements(arr, size);
            break;
        case 11:
            printf("Tub elementlarning yig'indisi: %d\n", sum_prime_elements(arr, size));
            printf("Tub elementlarning soni: %d\n", count_prime_elements(arr, size));
            break;
        case 0:
            printf("Dastur tugadi.\n");
            break;
        default:
            printf("Noto'g'ri tanlov. Iltimos, qaytadan urinib ko'ring.\n");
    }
}

int main() {
    int arr[] = {3, -1, 4, -5, 6, -7, 8, 9, 10, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int choice;

    do {
        print_menu();
        printf("Tanlovingizni kiriting: ");
        scanf("%d", &choice);
        handle_choice(choice, arr, size);
    } while (choice != 0);

    return 0;
}
