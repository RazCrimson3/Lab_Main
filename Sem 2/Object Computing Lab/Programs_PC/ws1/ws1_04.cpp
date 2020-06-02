
#include <iostream>
#include <cstdlib>

using namespace std;

struct Element
{
    int atomicNumber, atomicWeight, electrons[7];
    char *name, *symbol, *chemicalClass;
};

void disp(struct Element a)
{
    cout << "\nName of the Element : " << a.name;
    cout << "\nAtomic Number of the Element : " << a.atomicNumber;
    cout << "\nSymbol of the Element : " << a.symbol;
    cout << "\nAtomic Weight of the Element : " << a.atomicWeight;
    cout << "\nClass of the Element : " << a.chemicalClass;
    cout << "\nNo of electrons in the Seven shells :";
    for (int i = 0; i < 7; i++)
        cout << a.electrons[i] << "\t";
    cout << endl;
}

Element create()
{
    struct Element Na;
    cout << "\nEnter the Name of the Element : ";
    cin >> Na.name;
    cout << "\nEnter the Atomic Number of the Element : ";
    cin >> Na.atomicNumber;
    cout << "\nEnter the Symbol of the Element : ";
    cin >> Na.symbol;
    cout << "\nEnter the Atomic Weight of the Element : ";
    cin >> Na.atomicWeight;
    cout << "\nEnter the Class of the Element : ";
    cin >> Na.chemicalClass;
    cout << "\nEnter the No of electrons in the Seven shells";
    for (int i = 0; i < 7; i++)
        cin >> Na.electrons[i];
    return Na;
}

int main()
{
    Element ptr[10];
    for (int i = 0; i < 10; i++)
        ptr[i] = create();
    for (int i = 0; i < 10; i++)
    {
        if (ptr[i].atomicNumber > 11)
            disp(ptr[i]);
    }
    return 0;
}
