#include <iostream>
using namespace std;
class Queue
{
private:
    int *arr;
    int front, end, size, i;

public:
    Queue(int size)
    {
        this->size = size;
        front = -1;
        end = -1;
        for (i = 0; i < size; i++)
            arr[i] = 0;
    }

    bool isEmpty()
    {
        if (front == -1 && end == -1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if (end == size - 1)
            return true;
        else
            return false;
    }
    void enqueue(int value)
    {
        if (isFull())
            cout << "The Queue is full." << endl;
        else if (isEmpty())
        {
            front = end = 0;
            arr[end] = value;
            cout << "\n sucessfully! Inserted." << endl;
        }

        else
        {
            end++;
            arr[end] = value;
            cout << "\n sucessfully! Inserted." << endl;
        }
    }
    void dequeue()
    {
        int temp;
        if (isEmpty())
            cout << "The Queue is totally empty, no value to remove" << endl;

        else if (front == end)
        {
            temp = arr[front];
              cout<<"The value for dequeued/removed is="<<temp<<endl;
            arr[front] = 0;
            front = end = -1;
             
        }
        else{
            temp = arr[front];
            cout<<"The value for dequeued/removed is="<<temp<<endl;;
        arr[front] = 0;
        front++;
        
        }
    }

    int count()
    {
        if (front == -1 && end == -1)
            return 0;
        else
            return (front - end + 1);
    }
    void display()
    {
        cout << "The elementes present in the queuqe are:-" << endl;
        for (i = 0; i < size; i++)
            cout << arr[i] << " ";
    }
};
int main()
{
    char ch;
    int value, size, con = 1;
    cout << "Enter the size of Queue:";
    cin >> size;
    Queue q(size);
    while (con)
    {

        cout << "\n1.For_insert value." << endl;
        cout << "2.For_remove value." << endl;
        cout << "3.Check_isEmpty."<<endl;
        cout << "4.Check_isFull." << endl;
        cout << "5.Count_elements in Queue." << endl;
        cout << "6.Display_Queue elements." << endl;
        cout << "To display the queue." << endl;
        cout << "Press '0'to exit the programm." << endl;
        cout << "\nSelect the option number and give input according to it." << endl;
        cin >> ch;
        switch (ch)
        {
        case '1':
            cout << "\nEnter value to push in the queue:";
            cin >> value;
            q.enqueue(value);
            cout << endl;
            break;
        case '2':
            q.dequeue();
            break;
            cout << endl;
        case '3':
            if(q.isEmpty())
            cout <<"\nThe Queue is Empty."<<endl;
            else
            cout<<"\nThe Queue isn't Empty"<<endl;
            break;
        case '4':
            if(q.isFull())
            cout <<"\nthe Queue is Full."<<endl;
            else
            cout<<"\nThe Queue isn't Full"<<endl;
            break;
        case '5':
            cout << "\nTotal number of elements present in the queue are: " << q.count();
            cout << endl;
            break;
        case '6':
            cout << "\nAll the elements present in the stack:" << endl;
            q.display();
            cout << endl;
            break;
        case '0':
        {
            con = 0;
            cout << "\nExit sucessfully!!" << endl;
        }
        break;
        default:
            cout << "\n Try Again wrong input!!" << endl;
            break;
        }
    }

    return 0;
}