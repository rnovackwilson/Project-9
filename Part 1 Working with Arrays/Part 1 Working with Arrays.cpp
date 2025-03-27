#include <iostream>
#include <array>
using namespace std;

int main()
{
    int array[5] = { 45, 12, 59, 78, 22 }; //This holds the original array
    int i;

    cout << "Original array: ";

    for (i = 0; i < 5; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    array[0] = 99;  //Updates element 45 to 99
    array[3] = 1;   //Updates element 78 to 1

    cout << "New array: ";

    for (i = 0; i < 5; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;

}


