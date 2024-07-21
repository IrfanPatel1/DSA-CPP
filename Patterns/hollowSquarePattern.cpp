#include <iostream>
using namespace std;

int main()
{
    int length;
    cout << "Enter the length of Square you want:";
    cin >> length;
    // outer row
    for (int row = 0; row < length; row++)
    { // inner rows

        for (int col = 0; col < length; col++)
        {
            // logic

            if (row == 0 || row == length - 1)
            {
                cout << "* ";
            }
            else
            {

                // middle rows
                if (col == 0 || col == length - 1)
                {
                    cout << "* ";
                }
                else
                { // middle colums
                    cout << "  ";
                }
            }
        }
        // yeh mai bhul jata hu
        cout << endl;
    }
    return 0;
}
