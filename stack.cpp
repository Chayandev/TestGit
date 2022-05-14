#include <iostream>
using namespace std;
class Stack
{
private:
    int *arr; // here we pointinf th array for being  dynamicaly aclocated
    int top;
    int i, size;

public:
    Stack(int size)
    {
        this->size = size;   // this->size=size;
        arr = new int[size]; // here the decleared array is delalocated
        top = -1;
        for (i = 0; i < size; i++)
            arr[i] = 0;
    }
    void push(int val)
    {
        if (top == size - 1)
            cout << "Stack Overflow." << endl;
        else
        {
            top++;
            arr[top] = val;
            cout << "sucessfull!!" << endl;
        }
    }
    void pop()
    {
        if (top == -1)
            cout << "Stack Underflow,No value to pop." << endl;
        else
        {
            cout << "The pop value is:" << arr[top] << endl;
            arr[top] = 0;
            top--;
            cout << "POpped sucessfull!!" << endl;
        }
    }
    void isEmpty()
    {
        if (top == -1)
            cout << "The stack is empty." << endl;
        else
            cout << "Isn't Empty..";
    }
    void isFull()
    {
        if (top = size - 1)
            cout << "The stack is full." << endl;
        else
            cout << "Isn't Full.";
    }
    void peek(int pos)
    {
        cout << "The peek value of the stack at position"
             << " " << pos << ":" << arr[pos] << endl;
    }
    void change(int pos, int value)
    {
        arr[pos] = value;
        cout << "The value chaneg at position"
             << " " << pos << " "
             << "Sucessfull!!" << endl;
    }
    int count()
    {
        return top + 1;
    }
    void display()
    {

        for (i = size - 1; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};
int main()
{
    int size, val, pos, con = 1;
    char ch;
    cout << "Enter a size of stack:";
    cin >> size;
    Stack s1(size);
    while (con)
    {

        cout << "1.Push_value." << endl;
        cout << "2.Pop_value." << endl;
        cout << "3.Check_isEmpty_value." << endl;
        cout << "4.Check_isFull." << endl;
        cout << "5.Peek_value at particular position." << endl;
        cout << "6.Change_value at particular position." << endl;
        cout << "7.Count_elements in stack." << endl;
        cout << "8.Display_stack elements." << endl;
        cout << "Press '0'to exit the programm." << endl;
        cout << "\nSelect the option number and give input according to it." << endl;
        cin >> ch;
        switch (ch)
        {
        case '1':
            cout << "\nEnter value to push in the stack:";
            cin >> val;
            s1.push(val);
            cout << endl;
            break;
        case '2':
            s1.pop();
            break;
            cout << endl;
        case '3':
            s1.isEmpty();
            cout << endl;
            break;
        case '4':
            s1.isFull();
            cout << endl;
            break;
            ;
        case '5':
            cout << "\nEnter position to peek the value stored in stack:";
            cin >> pos;
            s1.peek(pos);
            cout << endl;
            break;
            ;
        case '6':
            cout << "\nEnter position & value to replace it at that postion:";
            cin >> pos >> val;

            s1.change(pos, val);
            cout << endl;
            break;
        case '7':
            cout << "\nTotal number of elements present in the stack are: " << s1.count();
            cout << endl;
            break;
        case '8':
            cout << "\nAll the elements present in the stack:" << endl;
            s1.display();
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

    // switch(ch)
    // { case 1:

    // }
    return 0;
}