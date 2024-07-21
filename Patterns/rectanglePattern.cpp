#include <iostream>
using namespace std;

int main()
{
    int totalRows;
    int totalColumns;
    cout << "Enter number of rows:" << endl;
    cin >> totalRows;

    cout << "Enter Number of Columns:" << endl;
    cin >> totalColumns;

    for (int row = 0; row < totalRows; row++)
    {

        for (int col = 0; col < totalColumns; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}