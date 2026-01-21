//////////////////////////////////////////////////////////////////////////////
//              Final Code of Queue Using Generic Approach
//////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#pragma pack(1)
template<class T>
class Queuenode
{
    public:
        T data;
        Queuenode<T> *next;

        Queuenode(T no)
        {
            this->data = no;
            this->next = NULL;
        }
};

template<class T>
class Queue
{
    private:
        Queuenode<T> *first;
        Queuenode<T> *last;
        int iCount;

    public:
        Queue();
        void enqueue(T);     // InsertLast
        T dequeue();          // DeleteFirst
        void Display();
        int Count();
};

template<class T>
Queue<T> :: Queue()
{
    cout<<"Queue gets created successfully\n";
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

template<class T>
void Queue<T> :: enqueue(T no)    
{
    Queuenode<T> *newn = NULL;

    newn=new Queuenode<T>(no);

    if(this->first == NULL && this->last==NULL
    )
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        this->last->next = newn;
        this->last = this->last->next;
    }

    this->iCount++;
}

template<class T>
T Queue<T> ::dequeue()
{
    int Value = 0;
    Queuenode<T> *temp = this->first;

    if(this->first == NULL && this->last == NULL)
    {
        cout<<"Queue is Empty\n";
        return -1;
    }

    Value = this->first->data;

    this->first = this->first->next;
    delete temp;

    this->iCount--;

    return Value;
} 

template<class T>
void Queue<T> ::Display()
{
    Queuenode<T> *temp = this->first;

    if(this->first == NULL && this->last==NULL)
    {
        cout<<"Queue is Empty\n";
    }

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|-";
        temp = temp->next;
    }
    cout<<"\n";
}

template<class T>
int Queue<T> ::Count()
{
    return this->iCount;
}

int main()
{
    Queue<int> *qobj = new Queue<int>();

    int iChoice = 0;
    int Value = 0;
    int iRet = 0;

    while(1)
    {
        cout<<"--------------------------------------\n";
        cout<<"Please select the option\n";
        cout<<"1:Insert new element into the queue";
        cout<<"2:Remove the element into the queue";
        cout<<"3:DIsplay the element of queue";
        cout<<"4:Count the number of element from the queue";
        cout<<"0:Exit the Application\n";
        cin>>iChoice;

        cout<<"--------------------------------------\n";

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the element that you want to insert";
                cin>>Value;

                qobj->enqueue(Value);
                cout<<"Element gets inserted successfully\n";
                break;

            case 2:
                iRet = qobj->dequeue();
                if(iRet!=-1)
                {
                    cout<<"Element removed from queue is : "<<iRet<<"\n";
                    break;
                }

            case 3:
                cout<<"ELements of queue are : \n";
                qobj->Display();
                break;
            
            case 4:
                iRet = qobj->Count();
                cout<<"Number of elements in queue are : "<<iRet<<"\n";
                break;

            case 0:
                cout<<"Thank you for using our apllication\n";
                delete qobj;

                return 0;

            default:
                cout<<"Please enter valid option\n";

        }//end of switch

    }//end of while
    

    
    return 0;//end of main
}