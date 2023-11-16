#include <stdio.h>
int main ()
{
    int skorostbolshoy;
    int skorostmalenkoy;
    int obsaya;
    int srednaya;
     printf ("Введите скорость большой машины: ");
     scanf("%d",&skorostbolshoy);
     printf ("Введите скорость маленькой машины: ");
     scanf("%d",&skorostmalenkoy);
    obsaya=skorostbolshoy + skorostmalenkoy;
    srednaya=(skorostbolshoy+skorostmalenkoy )/2;
    printf("Средняя скорость автомобилей %d\n", srednaya);
    printf("Общая скорость автомобилей %d\n", obsaya);
    return 0;


}