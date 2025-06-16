#include <iostream>

void sort(int array[], int size);
int main()
{
    int array[] = {10, 1, 3, 8, 5, 6, 2, 4, 9, 7};
    int size = sizeof(array) / sizeof(array[0]);
    std::cout << size;

    sort(array, size);

    for (int element : array)
    {
        std::cout << element << " ";
    }

    return 0;
}
void sort(int array[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1]) // change to < for descending order
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}