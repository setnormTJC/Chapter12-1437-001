#include <iostream>
#include <vector>

using namespace std;

int* generate1Through5()
{
    int* firstFiveInts = new int[5];
    //int firstFiveInts[5]; //NOT a correct alternative – must use new
    for (int i = 0; i < 5; i++)
    {
        firstFiveInts[i] = i; //static/C-style array is a pointer in disguise
    }

    return firstFiveInts;
}

std::vector<int> generate1Through5InTheModernStyle()
{
    std::vector<int> numsList = { 1, 2, 3, 4, 5 };
    return numsList; 
}

class A
{
    int* a; 
};

int main()
{
    //int* result = generate1Through5(); 

    //for (int i = 0; i < 5; i++)
    //{
    //    cout << *result << endl;
    //    result++;
    //}


    //auto i = 5.0; 
    std::vector<int> result = generate1Through5InTheModernStyle(); 

    for (auto& num : result) //calls two functions (begin) and (end) 
    {
        cout << num << endl; 
    }


    return 0;
}