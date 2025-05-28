#include <stdio.h>

int main() {
    char lines[5][30] = {
        "/test.txt",
        "Привет",
        "Кукушка",
        "Как",
        "Дела"
    };
    
    printf("Имя файла: %s\n", lines[0]);
    
    char content[120];
    int index = 0;
    
    for (int i = 1; i < 5; i++) {
        
        int j = 0;
        while (lines[i][j] != '\0') {
            content[index] = lines[i][j];
            index++;
            j++;
        }    
        content[index] = '\n';
        index++;
    }
    content[index] = '\0';
    printf("Содержимое файла:\n%s", content);
    
    char target[] = "Привет"; //слово которое надо найти
    int contentLength = 0, targetLength = 0; // первая переменная для счета кол-во символов в content, а вторая target
    
    while (content[contentLength] != '\0') contentLength++;
    while (target[targetLength] != '\0') targetLength++;

    int found = 0;
    for (int i = 0; i <= contentLength - targetLength; i++) {
        int match = 1;
        for (int j = 0; j < targetLength; j++) {
            if (content[i + j] != target[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("\nСлово \"%s\" найдено в тексте\n", target);
    } else {
        printf("\nСлово \"%s\" не найдено\n", target);
    }

    return 0;
}
