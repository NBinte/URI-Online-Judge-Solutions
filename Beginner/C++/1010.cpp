#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int productCode1, noOfUnit1, productCode2, noOfUnit2;

    double pricePerUnit1, pricePerUnit2;

    cin >> productCode1 >> noOfUnit1 >> pricePerUnit1;

    cin >> productCode1 >> noOfUnit2 >> pricePerUnit2;

    double total = (noOfUnit1 * pricePerUnit1) + (noOfUnit2 * pricePerUnit2);

    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<total<<endl;

    return 0;
}
