#include <stdio.h>

int test(int array1[], int size)
{
    int i;
    for ( i = 0; i<size; i++)
    {
        printf("%d, ", array1[i]);
    }
    printf("\n");
}
int main()
{
    int array_size;
    int array1[] = {1, 2, 5, 3, 5, 4, 6, 9, 11};
    array_size = sizeof(array1)/sizeof(array1[0]);
    printf("Elements in original array are: ");
    test(array1, array_size);

    int size = array_size;
    int index = 0;
    for (int i =0; i < size; i++)
    {
        if (array1[i] % 2 == 0)
        {
            int temp = array1[index];
            array1[index] = array1[i];
            array1[i] = temp;

            index++;
        }
    }
    printf("\nElements in new array are: ");
    test(array1, array_size);

}
