#include <iostream>
using namespace std;
void TOH(int n, char s, char d, char a)
{
    if (n == 1)
    {
        cout << "Move one disk"<<" "<< s<<" "<< "-->"<<" "<< d << endl;
        return;}
    else if(n>1){
        TOH(n - 1, s, a, d);
     cout << "Move one disk"<<" "<< s<<" "<< "-->"<<" "<< d << endl;
    TOH(n - 1, a, d, s);
    }
    }
int main()
{
    int n;
    char source = 'S', Ax = 'A', Des = 'D';
    cout << "Enter number of plates you have:";
    cin >> n;
    cout << "Ok let's recreat the tower." << endl;
    TOH(n, source, Des, Ax);
        //iahdfihasjk
    return 0;
}