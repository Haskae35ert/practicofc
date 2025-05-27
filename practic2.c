1.1.
#include <stdio.h>

int main()
{
    const float FIXED_PRICE = 20.5;
    
    int demand; 
    float length, duration ,commission;
    printf("Введите спрос, длину маршрута\n");
    scanf("%d", &demand);
    scanf("%f", &length);
    
    duration = length / 5 + 1;
    
    if (demand < 45) {
        commission = 0.29;
    }
    else if (demand < 75) {
        commission = 0.49;
    }
    else {
        commission = 0.69;
    }
    
    float noFinalPrice = FIXED_PRICE + (length * duration);
    float finalPrice = noFinalPrice + noFinalPrice * commission;
    printf("Цена %.2f\nКомиссия %.2f", finalPrice, commission);
    
    return 0;
}
1.2.
#include <stdio.h>
#include <stdbool.h>

int main() {
    
   
    float maxHeight, max1 = 0, max2 = 0, max3 = 0;
    
    while (true) {
        printf("Введите рост ученика (Чтобы выйти напишите 0)\n");
        scanf("%f", &maxHeight);
        
        if (maxHeight <= 0) break;
        
        if (maxHeight > max1) {
            max3 = max2;
            max2 = max1;
            max1 = maxHeight;
        }
        else if (maxHeight > max2) {
            max3 = max2;
            max2 = maxHeight;
        }
        else if (maxHeight > max3){
            max3 = maxHeight;
        }
    }
    
    printf("Номер 1: %.2f\nНомер 2: %.2f\nНомер 3: %.2f", max1, max2, max3);
    
    return 0;
}

1.3.
#include <stdio.h>

int main() {
    
    int x;
    printf("Введите кол-во хвойных уровней");
    scanf("%d", &x);
    
    for (int i = 1; i <= x; i++) {
        
        for (int j = 0; j < x - i; j++) {
            printf(" ");
        }
        
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    
     for (int i = 0; i < x; i++) {
        for (int j = 0; j < x - 1; j++) {
            printf(" ");
        }
        printf("*\n");
    }

1.4.
#include <stdio.h>

int main() {
    printf("\t|");  // Верхний левый угол (пустое место п.с. также чтобы было красиво)
    
    for (int i = 1; i <= 9; i++) {
        printf("%d\t|", i);
    }
    printf("\n");
   
    printf("____+");
    for (int i = 1; i <= 9; i++) {
        printf("____");
    }
    printf("\n");
    
    for (int i = 1; i <= 9; i++) {
        printf("%d\t|", i);
        
        for (int j = 1; j <= 9; j++) {
            printf("%d\t|", i * j);  
        }
        printf("\n");
    }
    
    return 0;
}
