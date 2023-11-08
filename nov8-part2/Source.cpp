#include <iostream>

using namespace std;


class Person
{
public:
    string firstName = "Joe";
    string lastName = "Blow";

    //Person(); 
};

class Animal
{
public:
    virtual void eat() { cout << "Eating something" << endl; }
};

class Dog : public Animal
{
public:
    void eat() override 
    { 
        cout << "Eating dog food" << endl; 
    }
};

class Cat : public Animal
{
public:
    void eat() { cout << "Eating cat food" << endl; }
};

void callToEat(Animal* a)
{
    a->eat(); 
}

int main()
{
    Animal* a = new Animal; 
    Dog* d = new Dog; 
    Cat* c = new Cat; 

    //a->eat(); 
    //d->eat();  //Dog's EAT function OVERRIDES Animal's eat function
    //c->eat(); 

    callToEat(a); 
    callToEat(d);
    callToEat(c);
    ////int array[1'000'000'000];

    ////Now create a Person object and point to the object in main:
    //Person* you = new Person;

   // cout << you->firstName << "\t" << you->lastName << endl; 

    //cout << pointerToYou->firstName << "\t" << pointerToYou->lastName << endl; 

    //member access operator 
        //-> member access operator arrow
    

    return 0;
}