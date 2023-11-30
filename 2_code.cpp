#include <bits/stdc++.h>
using namespace std;

int counts = 0;

void printCounter()
{
    if (counts == 5)
    {
        return;
    };

    cout << counts << endl;
    counts++;

    printCounter();
}

int main()
{
    printCounter();
    cout << "Completed.." << endl;
    return 0;
}