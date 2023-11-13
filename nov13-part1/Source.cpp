#include <iostream>

using namespace std;

class Animal
{
private:
    string name;
public:
    Animal()
    {
        cout << "Creating Animal object" << endl; 
    }

    ~Animal() //tilde 
        //Tilde (~) before class name means DESTRUCTOR function
    {
        cout << "Destroying (deallocating memory for) Animal object" << endl;
    }
};


void createAnimal()
{
    //Animal a1; //creates Animal object on "the stack"
    Animal* a2 = new Animal; //creates Animal object on "the heap"
    delete a2;
}


class A
{
public:
    int x, y;

    A(int x_, int y_)
    {
        x = x_;
        y = y_;
    }
};


int main()
{
    A a1{ 1, 2 }; 
    A a2 = a1; 

    int a = 2; 
    int& aliasOfA = a; //"deep" copy (by using a "reference" variable)


    a = 3; 

    cout << aliasOfA << endl;
    //A a3{}



    ////{//empty scope 
    ////    //Animal a1; //creates Animal object on "the stack"
    ////    Animal a1; 
    ////    //Animal* a2 = new Animal; //creates Animal object on "the heap"
    ////    //delete a2;

    ////} //this calls the destructor on a1

    ////cout << "This is a print line in main BEFORE calling `createAnimal`" << endl; 
    ////createAnimal(); 
    //cout << "This is a print line in main AFTER the close brace on line 39" << endl;

    return 0;
}