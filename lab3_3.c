/*Дана програма за заданим номером серії першого сезону серіала «Downton Abbey» виводить її назву та дату прем’єрного показу */
#include<stdio.h> //підключаємо бібліотеки
#include<string.h> 

int main() {
    int episode_number;

    printf("Введіть номер серії: ");
    scanf("%d", &episode_number);

    switch(episode_number) {
    case 1:
       printf("Episode 1, 26 Sep. 2010");
      break;
    case 2:
       printf("Episode 2, 3 Oct. 2010");
       break;
    case 3:
       printf("Episode 3, 10 Oct. 2010");
       break;
    case 4:
       printf("Episode 4, 17 Oct. 2010");
       break;
    case 5:
       printf("Episode 5, 24 Oct. 2010");
       break;
    case 6:
       printf("Episode 6, 31 Oct. 2010");
       break;
    case 7:
       printf("Episode 7, 7 Nov. 2010");
       break;
    case 8:
       printf("Episode 8, 14 Nov. 2010");
       break;
    default:
       printf("Невірний номер серії");
    }
    return 0;
}
