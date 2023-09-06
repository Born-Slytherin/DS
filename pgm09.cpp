#include <iostream>
using namespace std;
#define MAX 20

class Array{

    int values[MAX];
    int n;

public:
    void ReadA(){
        top:
            cout << "Enter the number of elements : ";
            cin >> n;
            if (n < 1 || n > MAX){
                cout << endl << endl<< "Invalid size entry..Size should be from 1 to "<<MAX<<endl<<endl;
                goto top;
            }
            else{
                cout << endl<< "Enter the elements:" << endl;
               for (int i = 0; i < n; i++) 
                     cin >> values[i];
            }
    }
    void DisplayA(){
        cout << endl;
        for (int i = 0; i < n; i++)
            cout << values[i]<<" ";
    }

    bool SearchItem(int &item)
    {

        for (int i = 0; i < n; i++)
        {

            if (values[i] == item)
            {
                return true;
            }
        }

        return false;
    }
};

int main()
{

    Array a;

    a.ReadA();
    a.DisplayA();

    int x;
    cout << endl
         << endl
         << "Enter the item to be searched : ";
    cin >> x;

    if (a.SearchItem(x))
    {
        cout << endl
             << endl
             << "Item " << x << " is found !" << endl;
    }
    else
    {
        cout << endl
             << endl
             << "Item " << x << " is not found !" << endl;
    }

    return 0;
}