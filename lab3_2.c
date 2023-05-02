#include<stdio.h>
#include<math.h>

int main() {
    int num, thousands, hundreds,tens, ones, sum;
    printf("Введіть чотиризначне число:");
    scanf("%d", &num);

    thousands=num/1000;
    hundreds=(num/100)%10;
    tens=(num/10)%10;
    ones=num%10;

    sum=thousands+hundreds+tens+ones;

    if (sum<25) {
        printf("Сума цифир менше 25:");
    }else {
        printf("Сума цифир менша або дорівнює 25");
    }
    
    return 0;
}