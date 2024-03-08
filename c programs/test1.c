#include <stdio.h>
void sort(int arr[], int len3)
{
    for (int i = 0; i < len3; i++)
    {
        for (int j = i+1; j < len3; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void main()
{
    int num1[] = {2, 3, 4};
    int num2[] = {3, 4};
    int mer[100];
    int len1 = sizeof(num1) / sizeof(num1[0]);
    int len2 = sizeof(num2) / sizeof(num2[1]);
    int len3 = len1 + len2;
    for (int i = 0; i < len3; i++)
    {
        if (i < len1)
        {
            mer[i] = num1[i];
        }
        else
        {
            mer[i] = num2[i - len1];
        }
    }
    sort(mer, len3);
    for (int i = 0; i < len3; i++)
    {
        printf("%d ", mer[i]);
    }
    float median;
    if (len3 % 2 == 0)
    {
        median = (mer[len3 / 2] + mer[(len3 / 2) - 1]) / 2;
    }
    else
    {
        median = mer[len3 / 2];
    }
    printf("\n%.2f ", median);
}
