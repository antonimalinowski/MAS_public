#include <iostream>
#include <array>
using namespace std;

int fixed_storage[4];
int populate_fixed_storage();
int display_fixed_storage();

int main()
{
    display_fixed_storage();
    return 0;
}

int populate_fixed_storage()
{
    cout << "Insert numbers into an array: " << endl;
    for (int i = 0; i < sizeof(fixed_storage) / sizeof(fixed_storage[0]); i++)
    {
        cin >> fixed_storage[i];
    }
    return 0;
}

int display_fixed_storage()
{
    populate_fixed_storage();
    cout << "Your array contains following elements:" << endl;
    for (int i = 0; i < sizeof(fixed_storage) / sizeof(fixed_storage[0]); i++)
    {
        cout << fixed_storage[i] << endl;
    }
    return 0;
}