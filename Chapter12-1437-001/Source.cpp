#include <iostream>

#include<vector>

using namespace std;

void demoPassByRef(int& a)
{

}

int main()
{   
    int a = 42;
    //if (af a < 100)
    cout << &a << endl; 
    

    int* pointerToA, notAPointer;

    pointerToA = &a; 
    cout << pointerToA << endl; 

    //int a = 15;
    cout << showbase << oct << a << endl;



    return 0;
}