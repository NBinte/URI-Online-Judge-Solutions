#include <iostream>

using namespace std;

int main()
{

    int A, B;

    cin >> A >> B;

    switch( ((B%A==0) || (A%B==0)) )
    {

    case(true):
        cout << "Sao Multiplos" << endl;
        break;
    default:
        cout << "Nao sao Multiplos" << endl;
    }

    return 0;
}
























