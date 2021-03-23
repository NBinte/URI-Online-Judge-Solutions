#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double  A, B, C;

    cin>>A;

    cin>>B;

    cin>>C;

    double MEDIA = ((A * 2) + (B * 3)  + (C * 5)) / (2 + 3 + 5);

    cout<<"MEDIA = "<<fixed<<setprecision(1)<<MEDIA<<endl;

    return 0;
}
