#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int code, quantity, i;

    float total;

    int codeArr[5] = {1, 2, 3, 4, 5};

    float priceArr[5] = {4.00, 4.50, 5.00, 2.00, 1.50};

    cin >> code >> quantity;

    for(i=0; i<5; i++)
    {

        if(code == codeArr[i])
        {

            total = priceArr[i] * quantity;
            break;
        }

    }

    cout << "Total: R$ " << fixed << setprecision(2) << total <<endl;

    return 0;
}








