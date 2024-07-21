#include <iostream>
using namespace std;
int main()
{

    // 4 row 4 column ka square pattern print karna hai
    // row outer loop and col inner loop

    for (int row = 0; row < 4; row++)
    { // 4 row ke liye 4 baar run hoga
        // 4 baar *print hoga fir
        // har row mai kya karna hai inner loop batayega
        for (int col = 0; col < 4; col++)
        {
            cout << "* ";
        }

        //*print karne ke baad next line mai ana hai so endl
        cout << endl;
    }

    return 0;
}