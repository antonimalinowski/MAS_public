#include <iostream>
#include <array>
#include <vector>
using namespace std;

int fixed_storage[4];
vector<int> flex_storage(0);
int populate_fixed_storage();
int populate_flex_storage();
int display_fixed_storage();
int display_flex_storage();

int main()
{
    display_fixed_storage();
    // display_flex_storage();
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

int populate_flex_storage()
{
    cout << "Insert numbers into a vector (press 'q' to finish): " << endl;
    int tmp = 0;
    while (-1 < 0)
    {
        if (cin.fail())
        {
            return 0;
        }
        // flex_storage.insert(flex_storage.begin(), fixed_storage, fixed_storage + i);
        cin >> tmp;
        // flex_storage.insert(flex_storage.begin() + 1, tmp);
        flex_storage.push_back(tmp);
    }
}

int display_flex_storage()
{
    populate_flex_storage();
    cout << "Your vector contains following elements:" << endl;
    for (int i = 0; i < flex_storage.size() - 1; i++)
    {
        cout << flex_storage.at(i) << endl;
    }
    return 0;
}
