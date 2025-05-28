1.1.
#include <stdio.h>

int max(int num1, int num2) {
  // используется тернарный оператор
  // если первое число большое второго, то функция возвраща первое число, иначе второе (даже если они равны)
  return num1 > num2 ? num1 : num2; 
}

int main()
{
  int num1, num2;
  printf("Введите два числа\n");
  scanf("%d %d", &num1, &num2);
  
   int maxNum = max(num1, num2);
   printf("Максимально число %d", maxNum);
   
  return 0;
}

1.2.
  #include <stdio.h>

//Функция принимает две строки (исходная, искомая)
//если в исходной строке нашлась искомая, то возвращается индекс
//иначе -1
int indexOf(char text[], char target[]) {

    int textLength = 0;
    int targetLength = 0;

    // Считаем длину text
    while (text[textLength] != '\0') {
        textLength++;
    }

    // Считаем длину target
    while (target[targetLength] != '\0') {
        targetLength++;
    }

    // Ищем target в text
    int foundIndex = -1;
    for (int i = 0; i <= textLength - targetLength; i++) {
        int match = 1;
        for (int j = 0; j < targetLength; j++) {
            if (text[i + j] != target[j]) {
                match = 0;
                break;
            }
        }
        if (match == 1) {
            foundIndex = i;
            break;
        }
    }

    return foundIndex;
}

int main()
{
    char text[] = "the sat cat on the  mat";
    char target[] = "cat";
    
    int result = indexOf(text, target);
    printf("%d", result);
    
    return 0;
}
