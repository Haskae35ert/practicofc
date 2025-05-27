1.1.
#include <stdio.h>

int main() {
    
    float celsius, fahrenheit;
    printf("Введите градусы в Цельсия:\n");
    scanf("%f", &celsius);
    
    fahrenheit = celsius * 9 / 5 + 32;
    printf("C: %.00f; F: %.2f", celsius, fahrenheit);
    return 0;
}

1.2.
#include <stdio.h>

int main() {
    
    int userNum;
    printf("Введите число:\n");
    scanf("%d", &userNum);

    printf("%d", userNum % 2 == 0);
    return 0;
}

1.3.
#include <stdio.h>

int main() {
    
    int a, b, c;
    printf("Введите три числа a, b, c:\n");
    //Пример: a = -1, b = 2, c = 3
    scanf("%d %d %d", &a, &b, &c); 
    
    // Для проверки на наличии нулей
    int isZero = (a == 0) || (b == 0) || (c == 0); // isZero = 0
    
    /* Проверяет является ли число a, b, c отрицательным, 
    если да, то в переменную записывается 1, иначе 0 */
    //Пример: isANegative = 1, isBNegative = 0, isCNegative = 0
    int isANegative = a < 0, isBNegative = b < 0, isCNegative = c < 0; 
    
    // Счетчки отрицательныx чисел
    int negativeNumCount = isANegative + isBNegative + isCNegative; // 1
    // Для определения знака
    int compisitionSign = (1 - isZero) * (1 - 2 * (negativeNumCount % 2)); 
    /* Пример:
    compisitionSign = (1 - 0) * (1 - 2 * (1 % 2)) 
     compisitionSign = 1 * (-1) = -1
     */
    
    printf("%d", compisitionSign); //Вывод: -1
    return 0;
}

1.4.
#include <stdio.h>

int main() {
    
    int n;
    printf("Введите число n:\n");
    scanf("%d", &n); 
    
    /*
    Число n, например 4, переводтся в 2 систему. n - 1 тоже переводится (будет 3)
    4 в двочиной = 100, 3 в двоичной = 011
    Программа сравнавает поочерёдно цифры чисел, и там, где совпадают единицы он подставляет их
    В данном случае единницы не совпадают и в переменной будет 0
    Вывод будет 1.
    Если n будет 5, а n - 1 будет 4, в двоичной 5 - 101, а 4 - 100.
    Единицы совпадают лишь в одном месте и будет новое число 100 в двоичной или 4 в 10.
    Вывод будет 0
    */
    n &= n - 1;
    
    printf("%d", (n  & (n - 1)) == 0);
    return 0;
}
