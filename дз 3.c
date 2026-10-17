#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    double mm;
    double p;
    double bar;

    const double MM_TO_PA = 133.322;

    printf("Введите давление в миллиметрах ртутного столба: ");
    scanf("%lf", &mm);

    p = mm * MM_TO_PA;
    bar = p / 100000.0;

    printf("Результат:\n");
    printf("%.3f мм рт.ст. = %.3f Па\n", mm, p);
    printf("%.3f мм рт.ст. = %.6f бар\n", mm, bar);

}
