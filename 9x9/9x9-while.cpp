#include <iostream>
using namespace std;
int main() {
    // while
    int i = 1;
    while (i <= 9)
    {
        int j = 1;
        while (j <= i)
        {
            cout << j << "x" << i << "= " << i * j << " ";
            ++j;
        }
        cout << endl;
        ++i;
    }
}