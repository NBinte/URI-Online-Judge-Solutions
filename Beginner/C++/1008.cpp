#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int  empNo, workedHours;
    double amountPerHour;

    cin>>empNo;

    cin>>workedHours;

    cin>>amountPerHour;

    double salary = workedHours * amountPerHour;

    cout<<"NUMBER = "<<empNo<<endl;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<salary<<endl;

    return 0;
}
