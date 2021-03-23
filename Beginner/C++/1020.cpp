#include <iostream>

using namespace std;

int main()
{

    int N;

    cin >> N;

    int year = N/365;

    int month = ( N - (year * 365) ) / 30;

    int day = N - ( (year * 365) + (month * 30) );

    cout << year << " ano(s)" << endl;
    cout << month << " mes(es)" << endl;
    cout << day << " dia(s)" << endl;

    return 0;
}
