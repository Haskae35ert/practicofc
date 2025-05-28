1.1.
#include <stdio.h>
#include <string.h>

int main() {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz"; //Алфавит
    char letter = 'l'; // Буква, которую нужно найти
    int index = -1; // Будет хранится индекс, если не найден,  то -1

    for (int i = 0; i < strlen(alphabet); i++) {
        if (alphabet[i] == letter) {
            index = i + 1; // +1, так как позиции в алфавите с 1, а индексы с 0
            break; // Выходим из цикла после нахождения буквы
        }
    }
    // Если буква найдена, то выводим ее позицию
    if (index != -1) {
        printf("Буква '%c' находится на позиции %d в алфавите\n", letter, index);
    } else {
        printf("Буква '%c' не найдена в алфавите\n", letter);
    }

    return 0;
}

1.2.
  include <stdio.h>
#include <string.h>

int main() {
    char word[] = "yellow";
    char result[4]; // Массив для результата ("low\0")
    int start = 3; // Начальная позиция подстроки
    int end = 6;   // Конечная позиция подстроки

    int j = 0; // Индекс для массива result
    for (int i = start; i < end; i++, j++) {
        result[j] = word[i];
    }
    result[j] = '\0'; // Добавляем нуль-терминатор

    printf("Результат: %s\n", result);

    return 0;
}
