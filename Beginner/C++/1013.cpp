#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    int A, B, C;

    cin >> A >> B >> C;

    int maior1 = (A + B + abs(A-B)) / 2;

    int maior2 = (maior1 + C + abs(maior1-C)) / 2;

    cout << maior2 << " eh o maior" << endl;

    return 0;
}

