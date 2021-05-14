#include <iostream>
using namespace std;

string mG;
string bS;

int main()
{
    cout << "Mother Gene : ";
    cin >> mG;

    for (int i = 0; i < mG.size(); i++)
    {
        if (mG[i] <= 122 && mG[i] >= 97)
        {
            mG[i] = mG[i] - 32;
        }
        else
        {
            mG[i] = mG[i];
        }
    }

    cout << "Babe Sex : ";
    cin >> bS;

    for (int i = 0; i < bS.size(); i++)
    {
        if (bS[i] <= 122 && bS[i] >= 97)
        {
            bS[i] = bS[i] - 32;
        }
        else
        {
            bS[i] = bS[i];
        }
    }

    if (mG == "MUTATED" && bS == "XY")
        cout << "Baby Status : "
             << "Affected" << endl;
    else
    {
        if (mG == "MUTATED" && bS == "XX")
            cout << "Baby Status : "
                 << "Carrier" << endl;
        else
            cout << "Baby Status : "
                 << "Unaffected" << endl;
    }
}
