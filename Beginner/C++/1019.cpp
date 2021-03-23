#include <iostream>

using namespace std;

int main()
{

    int N;

    cin >> N;

    int hour = N/3600;

    int minute = ( N - (hour * 3600) ) / 60;

    int second = N - ( (hour * 3600) + (minute * 60) );

    cout << hour << ":" << minute << ":" << second <<endl;

    return 0;
}
