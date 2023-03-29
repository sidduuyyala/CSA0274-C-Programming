#include <stdio.h>
 
void printodd(int array[], int size)
{
    int xor2 = array[0]; 
    int set;
    int i;
    int n = size - 2;
    int x = 0, y = 0;
 
    
    for (i = 1; i < size; i++)
        xor2 = xor2 ^ array[i]; 
    
    set = xor2 & ~(xor2 - 1);
    
    for (i = 0; i < size; i++)
    {
        
        if (array[i] & set)
        x = x ^ array[i];
        
        else
        y = y ^ array[i];
    }
    printf("\n The ODD elements are %d & %d ", x, y);
}
 
int main()
{
    int array[] = {10, 3, 2, 10, 2, 8, 8, 7};
    int arr_size = sizeof(array) / sizeof(array[0]);
    printodd(array, arr_size);
    getchar();
    return 0;
}
