#include<stdio.h>
#include<math.h>

int main() {
double a,b,y;
int c;

printf("Введіть дійсні значення змінних a та b:");
scanf("%lf %lf", &a,&b);

printf("Введіть число c:");
scanf("%d", &c);

if (c>0 && a<=b)
    y = sqrt(b - a) + 2 * sqrt(c);
if (c==0 && (c - 6 * a)!=0)
    y = b / (c - 6 * a);
if (c<0) 
    y = b + 12 * pow(c, 3);

printf("y=%.2lf", y);

return 0;

}

