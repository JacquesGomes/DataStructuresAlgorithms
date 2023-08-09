#include <iostream>

using namespace std;

int main()
{

    int tam;

    cin >> tam;

    int arr[tam];

    for (int i = 0; i < tam; i++)
    {
        cin >> arr[i];
    }

    int key, j;

    for (int i = 1; i < tam; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            arr[j + 1] = key;
        }
    }

    for (int i = 0; i < tam; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}