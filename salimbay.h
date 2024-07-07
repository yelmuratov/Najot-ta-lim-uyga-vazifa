#include <stdio.h>

void print_array(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void print_odd_elements(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void print_even_elements(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void print_negative_elements(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void print_positive_elements(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] > 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int sum_odd_elements(int arr[], int size) {
    int sum = 0;
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int count_odd_elements(int arr[], int size) {
    int count = 0;
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

int sum_even_elements(int arr[], int size) {
    int sum = 0;
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int count_even_elements(int arr[], int size) {
    int count = 0;
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int sum_negative_elements(int arr[], int size) {
    int sum = 0;
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] < 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int count_negative_elements(int arr[], int size) {
    int count = 0;
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    return count;
}

int sum_positive_elements(int arr[], int size) {
    int sum = 0;
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int count_positive_elements(int arr[], int size) {
    int count = 0;
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }
    return count;
}

int is_prime(int num) {
    if (num <= 1) return 0;
    int i;
    for (i = 2; i*i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

void print_prime_elements(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (is_prime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int sum_prime_elements(int arr[], int size) {
    int sum = 0;
    int i;
    for (i = 0; i < size; i++) {
        if (is_prime(arr[i])) {
            sum += arr[i];
        }
    }
    return sum;
}

int count_prime_elements(int arr[], int size) {
    int count = 0;
    int i;
    for (i = 0; i < size; i++) {
        if (is_prime(arr[i])) {
            count++;
        }
    }
    return count;
}
