#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

    string name;

    double salary, sales;

    cin>>name;

    cin>>salary;

    cin>>sales;

    double total = salary + (sales * 0.15);

    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<total<<endl;

    return 0;
}
