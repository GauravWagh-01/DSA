// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <variant>
#include <utility>
using namespace std;
int main()
{
    // Write C++ code here
    vector v = {2, 3, 4, 5, 5, 6, 1};
    cout << endl
         << "\n-----------------------------" << endl;
    cout << "\n           Vector";
    cout << endl
         << "\n-----------------------------" << endl;

    cout << endl
         << "Vector :- \n";
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl
         << "\n-----------------------------" << endl;

    cout << endl
         << "Vector after push back:- \n";
    v.push_back(50);

    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl
         << "\n-----------------------------" << endl;

    v.pop_back();
    cout << endl
         << "Vector after pop back:- \n";
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl
         << "\n-----------------------------" << endl;

    cout << "\nVector Pair:-" << endl;
    vector<pair<int, string>> v1 = {{1, "Keli"}, {2, "Ammba"}, {3, "Chikuu"}, {4, "saparchand"}};

    for (const auto &[no, fall] : v1)
    {
        cout << no << ":-" << fall << "\n";
    }
    cout << endl
         << "\n-----------------------------" << endl;

    cout << "\nVector Pair after emplace_back :-" << endl;
    v1.emplace_back(5, "Peruu");
    v1.emplace_back(6, "Ram Fall");
    for (const auto &[no, fall] : v1)
    {
        cout << no << ":-" << fall << "\n";
    }

    cout << endl
         << "\n-----------------------------" << endl;

    cout << "\nVector1 Varient after push back :-" << endl;
    vector<variant<int, string>> v2;
    v2.push_back(7);
    v2.push_back(8);
    v2.push_back("Sita Fall");
    v2.push_back("Karwand");

    for (auto z : v2)
    {
        cout << z.first << ":-" << z.second << "\n";
    }
    return 0;
}