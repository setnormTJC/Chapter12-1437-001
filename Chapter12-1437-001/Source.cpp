#include <iostream>

#include<vector>

using namespace std;

void demoPassByRef(int& a)
{

}

class A
{
    int a; 
    double b; 

    int* pointerToA; 


}; 

int main()
{   

    ////int a = 42;
    //////if (af a < 100)
    ////cout << &a << endl; 
    ////

    ////int* pointerToA, notAPointer;

    ////pointerToA = &a; 
    ////cout << pointerToA << endl; 

    //////int a = 15;
    ////cout << showbase << oct << a << endl;

    //while (true)
    //{
    //    int* pointerToInt = new int; 
    //    delete pointerToInt; 


    //    //2011 C++ standard -> "smart pointers" 
    //    // 
    //    //automatic "garbage collection" 
    //    //allocates 4 Bytes of memory and stores and address in pointer
    //}

    //cout << "How many records do you want to enter? " << endl; 
    //int numberOfRecords; 

    //cin >> numberOfRecords; 

    //int* pointerToAnIntArray = new int[numberOfRecords];

    //vector<int> dynamicListOfNums; 
    ////dynamicListOfNums.push_back

    ////*pointerToAnIntArray = 5;

    ////pointerToAnIntArray++; 

    ////*pointerToAnIntArray = 10; 

    ////for (int i = 0; i < numberOfRecords; i++)
    ////{
    ////    pointerToAnIntArray[i] = i * i; 

    ////    cout << pointerToAnIntArray[i] << endl; 
    ////   // cout << *pointerToAnIntArray
    ////}

    ////delete [] pointerToAnIntArray; 
    
    vector < vector<int>> dynamicMatrix;

    vector<int> row1; 

    row1.push_back(1);
    row1.push_back(2); //could accept 3, 4, 5, ...n 

    vector<int> row2;
    row2.push_back(3);
    row2.push_back(4);
    row2.push_back(5);

    dynamicMatrix.push_back(row1);
    dynamicMatrix.push_back(row2);

    cout << "INITIAL MATRIX contents: " << endl; 
    for (int i = 0; i < dynamicMatrix.size(); i++)
    {
        for (int j = 0; j < dynamicMatrix[i].size(); j++)
        {
            cout << dynamicMatrix[i][j] << " ";
        }
        cout << "\n";
    }

    //add another row to the matrix (becuase it's dynamic!)

    vector<int> row3 = { 66, 77, 33, 22 }; 

    dynamicMatrix.push_back(row3); 
    cout << "UPDATED matrix: " << endl; 
    for (int i = 0; i < dynamicMatrix.size(); i++)
    {
        for (int j = 0; j < dynamicMatrix[i].size(); j++)
        {
            cout << dynamicMatrix[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;
}