#include <math.h>
#include <stdio.h>
float calculateSD(float data[]);

float calculateStDev(float data[]) {
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i <8; ++i) {
        sum += data[i];
    }
    mean = sum / 8;
    for (i = 0; i < 8; ++i)
        SD += pow(data[i] - mean, 2);
    return sqrt(SD / 8);
}


main()
{
    int i;
    float data[100];
    printf("Enter 8 elements: \n");
    for (i = 0; i < 8; ++i)
        scanf("%f", &data[i]);
    printf("\nStandard Deviation = %.3f", calculateStDev(data));

}

