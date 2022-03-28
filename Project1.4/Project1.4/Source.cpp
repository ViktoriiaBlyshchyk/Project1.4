#include <iostream>
#include "Complex.h"

using namespace std;

int menu()
{
    int menu_;
    cout << endl;
    cout << "------------------ MENU ------------------\n";
    cout << endl;
    cout << "Press '1': add\n"
            "Press '2': mul\n"
            "Press '3': sub\n" << endl;
    cout << "------------------------------------------\n";
    cin >> menu_;
    return menu_;
}

void menu1()
{
    Complex a, b, c;
    a.Read();
    b.Read();
    switch (menu())
    {
    case 1:
    {
        c = add(a, b);
        c.Display();
        break;
    }
    case 2:
    {
        c = mul(a, b);
        c.Display();
        break;
    }
    case 3:
    {
        c = sub(a, b);
        c.Display();
        break;
    }
    default: exit(0);
    }
    system("pause");
    system("cls");
    menu1();
}

    
int main()
{
	menu1();
	return 0;
}