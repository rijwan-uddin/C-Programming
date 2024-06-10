#include <stdio.h>
main()
{
    int arr[100], size, i, arrIndex, revIndex,temp;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter array A: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    revIndex = 0;
    arrIndex = size - 1;
    while(revIndex < arrIndex)
    {
        temp = arr[revIndex];
        arr[revIndex] = arr[arrIndex];
        arr[arrIndex] = temp;

        revIndex++;
        arrIndex--;
    }
    printf("\narray B : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }
}
