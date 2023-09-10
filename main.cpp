#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;


void MaxMinArray(int);  //Выполняет задания 1-3
void SummArray();   //Выполняет задание 4
void StructSearch();    //Выполняет задание 5


int main()
{
    int action = 0, array_size = 0;

    cout << "Press \"Alt+F4\" to quit" << endl;

    while(1)
    {
        cout << "Choose the task: ";
        cin >> action;
        if ((action < 1) || (action > 5)) {cout << "Invalid operation" << endl;}
        else if(action == 1) MaxMinArray(array_size);
        else if(action == 2) MaxMinArray(array_size);
        else if(action == 3) MaxMinArray(array_size);
        else if(action == 4) SummArray();
        else if(action == 5) StructSearch();
    }

    return 0;
}


void MaxMinArray(int array_size)
{
    int max = 0, min = 0, i, j;

    cout << "Enter array size: ";
    cin >> array_size;

    int *array = new int[array_size];

    cout << "array ->  ";

    for(i = 0; i < array_size; i++)
    {
        array[i] = rand() % 100;
        cout << array[i] << " ";
    }

    cout << endl;

    for(j = 0; j < array_size; j++)
    {
        if(max < array[j])
        {
            max = array[j];
        }
    }

    min = max;

    for(j = 0; j < array_size; j++)
    {
        if(min > array[j])
        {
            min = array[j];
        }
    }

    cout << "max = " << max << endl << "min = " << min << endl << "max - min = " << max - min << endl;


    delete[] array;
}

void SummArray()
{
    int X = 0, Y = 0, i, j, sum = 0;
    int** matrix;

    cout << "Enter Y-positions: ";
    cin >> Y;
    cout << "Enter X-positions: ";
    cin >> X;

    matrix = new int*[Y];
    for(i = 0; i < Y; i++)
    matrix[i] = new int[X];

    for(i = 0; i < Y; i++)
    {
        for(j = 0; j < X; j++)
        {
        matrix[i][j] = rand() % 100;
        cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for(i = 0; i < Y; i++)
    {
        for(j = 0; j < X; j++)
        {
            sum = sum + matrix[i][j];
        }
        cout << sum << endl;
        sum = 0;
    }


    for(i = 0; i < Y; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void StructSearch()
{
    int i, n = 3;
    string serch;
    struct students
    {
        int age;
        string name;
        string surname;
    } student[n];

    for(i = 0; i < n; i++)
    {
    cout << "Enter the name: ";
    cin >> student[i].name;
    cout << "Enter the surname: ";
    cin >> student[i].surname;
    cout << "Enter the age: ";
    cin >> student[i].age;
    cout << endl;
    }

    cout << "Enter a search term: ";
    cin >> serch;

    for(i = 0; i < n; i++)
    {
        if((serch.compare(student[i].name) == 0) || (serch.compare(student[i].surname) == 0))
        {
        cout << student[i].name << " ";
        cout << student[i].surname << " ";
        cout << student[i].age << endl;
        }
    }
}
