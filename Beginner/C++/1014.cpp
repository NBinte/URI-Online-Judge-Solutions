#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int X;

    float Y;

    cin >> X >> Y;

    float avgConsumption = X / Y;

    cout << fixed << setprecision(3) << avgConsumption << " km/l" << endl;

    return 0;
}
