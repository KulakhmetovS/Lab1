#include <iostream>
#include <stdlib.h>
#define array_size 100

using namespace std;


void MaxMinArray();
void RandArray();
void DinamicArray();
void SummArray();
void StructSearch();


int main()
{
    int action = 0;

    cout << "Press \"Alt+F4\" to quit" << endl;

    while(1)
    {
        cout << "Choose the task: ";
        cin >> action;
        if ((action < 1) || (action > 5)) {cout << "Invalid operation" << endl;}
        else if(action == 1) MaxMinArray();
        else if(action == 2) RandArray();
        else if(action == 3) DinamicArray();
        else if(action == 4) SummArray();
        else if(action == 5) StructSearch();
    }

    return 0;
}


void MaxMinArray()
{
    cout << "Task 1" << endl;
}

void RandArray()
{
    cout << "Task 2" << endl;
}

void DinamicArray()
{
    cout << "Task 3" << endl;
}

void SummArray()
{
    cout << "Task 4" << endl;
}

void StructSearch()
{
    cout << "Task 5" << endl;
}
