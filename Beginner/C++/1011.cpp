#include <iostream>
#include <iomanip>
#define pi 3.14159

using namespace std;

int main()
{

    double R;

    cin >> R;

    double volume = (4.0/3.0) * pi * R * R * R;

    cout<<"VOLUME = "<<fixed<<setprecision(3)<<volume<<endl;

    return 0;
}
