#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    double x1, x2, y1, y2;

    cin >> x1 >> y1;

    cin >> x2 >> y2;

    double distance = sqrt( pow( (x2 - x1), 2.0 ) + pow( (y2 - y1), 2.0 ) );

    cout << fixed << setprecision(4) << distance << endl;

    return 0;
}
