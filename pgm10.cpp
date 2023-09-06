#include<iostream>
using namespace std;

const int MAX = 20;

class Array {
private:
    int a[MAX];
    int size;

public:

    void create() {
        top:
        cout << "Enter the number of elements: ";
        cin >> size;

        if (size > 0 && size <= MAX) {
            cout << "\nEnter the elements:\n";
            for (int i = 0; i < size; i++)
                cin >> a[i];
        }
        else {
            cout << endl << "Size should be between 1 and " << MAX << endl << endl;
            goto top;
        }
    }

    void display() {
        cout << "Array: ";
        for (int i = 0; i < size; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    int MIN(int k) {
        int min = a[k];
        int loc = k;
        for (int i = k + 1; i < size; i++) {
            if (a[i] < min) {
                min = a[i];
                loc = i;
            }
        }
        return loc;
    }

    void selection() {
        for (int k = 0; k < size - 1; k++) {
            int min = MIN(k);
            if (min != k) {
                int temp = a[k];
                a[k] = a[min];
                a[min] = temp;
            }
        }
    }

    int getSize() {
        return size;
    }
};

int main() {
    Array A;
    A.create();

    int size = A.getSize();
    cout << "\nArray before sorting:\n";
    A.display();
    A.selection();
    cout << "\nArray after sorting:\n";
    A.display();

    return 0;
}