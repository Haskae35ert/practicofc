1.1.
#include <stdio.h>

int main()
{
    char colors[3][10] = {"pink", "red", "yellow"};
    
    for (int i = 0; i < 3; i++) {
        printf("%s\n", colors[i]);
    }
    
    return 0;
}

1.2.
#include <stdio.h>

int main()
{
    char colors[3][10] = {"pink", "red", "yellow"};
    
    for (int i = 0; i < 3; i++) {
        printf("%s\n", colors[i]);
    }
    printf("\n");
    strcpy(colors[1], "green");
    
    for (int i = 0; i < 3; i++) {
        printf("%s\n", colors[i]);
    }
    
    return 0;
}

1.3.
#include <stdio.h>

int main()
{
    int numbers[3];
    
    printf("Введите 3 числа\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &numbers[i]);
    }
    
    for (int i = 0; i < 3; i++) {
        printf("\n%d", numbers[i]);
    }
    
    return 0;
}
