#include <stdio.h>
#include <locale.h>

#define D 2.54
#define P 2.32166

int main()
{
    setlocale(LC_CTYPE, "RUS");
    int num, num1;
    puts("введите число А");
    scanf("%d", &num);  
    printf("Введено число А: %d\n", num);
    puts("введите число В");
    scanf("%d", &num1);
    printf("Введено число B: %d\n", num1);
    printf("Сумма чисел А и В = %d\n", num + num1);
    printf("Разность чисел А и В = %d\n", num - num1);
    printf("Произведение чисел А и В = %d\n", num * num1);
    printf("Частное чисел А и В = %d\n", num / num1);
    printf("Остаток от деления чисел А и В = %d\n", num % num1);
    task2();
    task3();
    return 0;
}
int task2() {
    int dym;
    float result;
    puts("Введите значения для расчета");
    scanf("%d", &dym);
    result = D*dym;
    printf("%d англ. дюймов-это %.1f см\n", dym, result);
    result = P*dym;
    printf("%d испан. дюймов-это %.1f см\n", dym, result);
    return 0;
}
int task3() {
    float a, b;
    
    puts("Введите числа для расчета:");
    scanf_s("%f %f", &a, &b);
    
    puts("----------------------------------------------");
    printf("|  a * b       |  a + b       |  a - b       |\n");
    puts("----------------------------------------------");
    
    printf("|%-4.2f * %-4.2f |%-4.2f + %-4.2f |%-4.2f - %-4.2f |\n", a, b, a, b, a, b);
    puts("----------------------------------------------");
    
    printf("|%-11.2f   |%-11.2f   |%-11.2f   |\n", a * b, a + b, a - b);
    puts("----------------------------------------------");
    
    return 0;
}