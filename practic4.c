1.1.
#include <stdio.h>

int main() {
  int red_balls[10] = {1,2,3,4,5,6,7,8,9,10};

  int size = sizeof(red_balls) / sizeof(red_balls[0]);

  printf("В коробке red_balls помещается %d шариков.\n", size);
  return 0;
}


1.2.
#include <stdio.h>

int main() {
  int blue_balls[5] = {1,2,3,4,5};

  int size = sizeof(blue_balls) / sizeof(blue_balls[0]);

  printf("В коробке blue_balls помещается %d шариков.\n", size);
  return 0;
}

1.3.
#include <stdio.h>

int main() {
  // Создаем массив для 15 шаров разных цветов
  // 1-красный, 2-синий, 3-зеленый, 4-желтый, 5-фиолетовый, 6-Розовый , 7-сиреневый , 8-коричневый , 9-черный , 10-белый , 11-голубой , 12-оранжевый , 13-светло-зеленый , 14-светло-желтый , 15-бордовый .
  int colorful_balls[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

  // Создаем переменную size в котором делится общий размер массива в байтах на размер 1 элемента в массиве
  int size = sizeof(colorful_balls) / sizeof(colorful_balls[0]);

  //Выводим результат
  printf("В коробке colorful_balls помещается %d шариков.\n", size);
  return 0;
}
