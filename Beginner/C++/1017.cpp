#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int time, avgSpeed;

    cin >> time >> avgSpeed;

    int distance =  time * avgSpeed;

    double fuel = distance / 12.0 ;

    cout << fixed << setprecision(3) << fuel << endl;

    return 0;
}
