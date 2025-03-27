#include <vector>
#include <iostream>
using namespace std;


int main()
{
    int i;
    vector <int> intVect = { 66, 43, 79 };  //Initial vector

    cout << "Original vector elements: ";
    for (i = 0; i < intVect.size(); ++i) {
        cout << intVect[i] << " ";
    }
    cout << endl;

    cout << "One specific element: " << intVect.at(1) << endl; 
    
    intVect.push_back(13);  //Adds another element to intVect

    cout << "After push_back: ";

    for (i = 0; i < intVect.size(); ++i) {
        cout << intVect[i] << " ";
    }
    cout << endl;

    cout << "Vector size: " << intVect.size() << endl;  //Shows size of vector
    cout << "Final vector elements: ";

    for (i = 0; i < intVect.size(); ++i) {
        cout << intVect[i] << " ";
    }
    cout << endl;



}

