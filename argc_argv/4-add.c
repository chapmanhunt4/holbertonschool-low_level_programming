#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main - adds all positive numbers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 if success, 1 if error
 **/

int add_numbers(int argc, char *argv[], int index) {
    if (index >= argc) {
        return 0;
    }

    for (int i = 0; argv[index][i] != '\0'; i++) {
        if (!isdigit(argv[index][i])) {
            return -1;
        }
    }

    int num = atoi(argv[index]);
    int next = add_numbers(argc, argv, index + 1);

    if (next == -1) {
        return -1;
    }

    return num + next;
}

int main(int argc, char *argv[]) {
    int sum = add_numbers(argc, argv, 1);
    if (sum == -1) {
        printf("Error\n");
        return 1;
    } else {
        printf("%d\n", sum);
        return 0;
    }
}
