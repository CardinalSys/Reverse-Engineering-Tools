#include <iostream>
#include <string>
#include "Windows.h"
using namespace std;

int compNum = 1;

void Compare(string f, string s);
void Continue(string first);
int main()
{
    cout << "This is an array of byte comparer" << endl << endl;

    cout << "Input the first array:" << endl;

    string first;

    getline(cin, first);

    cout << "Input the second array" << endl;

    string second;

    getline(cin, second);

    Compare(first, second);


}

void Compare(string f, string s)
{
    cout << "Comparing..." << endl << endl;

    if (f.size() == s.size())
    {
        string result;
        cout << "Sizes match..." << endl;
        int dif = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (f.at(i) == s.at(i))
            {
                result += f.at(i);
            }
            else
            {
                result += "?";
                dif++;
            }
        }

        cout << result << endl;

        cout << "Differences: " << dif << endl;

        cout << "Num of comparations: " << compNum << endl << endl;

        compNum++;

        Continue(result);
    }
    else
    {
        cout << "String has different size" << endl;
    }
}

void Continue(string first)
{
    cout << "Input the array number: " << compNum + 1 << endl;

    string second;
    getline(cin, second);

    Compare(first, second);
}

