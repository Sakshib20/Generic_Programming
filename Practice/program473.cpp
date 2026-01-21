#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int no)
        {
            cout<<"Inside Constructor\n";
            iSize = no;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside Destructor\n";
            delete [] Arr;
        }

        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter the element : ";

            for(iCnt = 0; iCnt<iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }

        }

        void Display()
        {
            int iCnt = 0;

            cout<<"Element of the Array are : ";

            for(iCnt = 0; iCnt<iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }

};

int main()
{
    
    int iValue = 0;
    cout<<"Enter the number of elements : ";
    cin>>iValue;

    //Step 1 : Allocate the memory
    ArrayX *aobj = new ArrayX(iValue);

    //steo 2: Use the Memory
    aobj->Accept();
    aobj->Display();

    //Step 3 : Delete the memory
    delete aobj;

    return 0;
}