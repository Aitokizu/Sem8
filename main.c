#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shell_sort.h"

int strend(char *s, char *t) {
    int i, j;
    for (i = 0; s[i] != '\0'; i++);  // найти конец строки s
    for (j = 0; t[j] != '\0'; j++); //...строки t

    while (i >= 0 && j >= 0) { // является ли строка t подстрокой s
        if (s[i] != t[j]) { // если символы не совпадают, строки не совпадают
            return 0;
        }
        i--;
        j--;
    }
    return (j < 0); // если строка t закончилась (j < 0), значит она была в конце строки s, иначе строки не совпадают
}

int main() {
    char s[100];
    char t[100];

    printf("Input the first string: \n");
    scanf("%s", s);

    printf("Input the second string: \n");
    scanf("%s", t);

    int result = strend(s, t);

    if (result) {
        printf("The second string is a substring.\n");
    } else {
        printf("The seconf string is NOT a substring.\n");
    }
//-------------------------------------------------------------------------------------//

/*    int n, i;
    printf("Enter the number of strings: \n");
    scanf("%d", &n);

    char** arr = (char**)malloc(n * sizeof(char*));// массив указателей на строки

    printf("Enter %d strings:\n", n); // cчитываем строки от пользователя
    for (i = 0; i < n; i++) {
        char buffer[256];
        scanf("%s", buffer);
        arr[i] = strdup(buffer); // дублируем строку и сохраняем указатель
    }

    shellSort(arr, n);

    printf("Sorted strings:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
        free(arr[i]); // освобождаем память для каждой строки
    }

    free(arr); // освобождаем память для массива указателей
*/
    return 0;
}
