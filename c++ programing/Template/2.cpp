#include <iostream>

using namespace std;
template <typename T, int size>
void shorting(T (&arr)[size])
{
    int i, j;

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int a[5] = {1, 5, 2, 6, 4}, i;

    cout << "\nBefore sorting value = ";
    for (i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    shorting(a);
    cout << "\nAfter the sorting value = ";
    for (i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}