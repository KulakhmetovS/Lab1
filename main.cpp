#include <iostream>
#include <stdlib.h>
#define array_size 100

using namespace std;

int main()
{
    int arr[array_size];

    for(int i = 0; i < array_size; i++)
    {
        arr[i] = rand() % 100;
    }

    for(int j = 0; j < array_size; j++)
    {
        cout << arr[j] << endl;
    }


    return 0;
}
