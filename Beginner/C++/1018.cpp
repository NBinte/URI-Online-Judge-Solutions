#include <iostream>

using namespace std;

int main()
{

    int N, i=0, j=0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sub1, sub2, sub3,
           sub4, sub5, sub6, sub7;

    int noteArr[7] = {100, 50, 20, 10, 5, 2, 1};

    int ansArr[7] = {0};

    cin >> N;


    ansArr[i] = N/noteArr[i];
    temp1 = ansArr[i] * noteArr[i];
    sub1 = N - temp1;

    i++;
    ansArr[i] = sub1/noteArr[i];
    temp2 = ansArr[i] * noteArr[i];
    sub2 = sub1 - temp2;

    i++;
    ansArr[i] = sub2/noteArr[i];
    temp3 = ansArr[i] * noteArr[i];
    sub3 = sub2 - temp3;

    i++;
    ansArr[i] = sub3/noteArr[i];
    temp4 = ansArr[i] * noteArr[i];
    sub4 = sub3 - temp4;


    i++;
    ansArr[i] = sub4/noteArr[i];
    temp5 = ansArr[i] * noteArr[i];
    sub5 = sub4 - temp5;

    i++;
    ansArr[i] = sub5/noteArr[i];
    temp6 = ansArr[i] * noteArr[i];
    sub6 = sub5 - temp6;

    i++;
    ansArr[i] = sub6/noteArr[i];
    temp7 = ansArr[i] * noteArr[i];
    sub7 = sub6 - temp7;

    cout << N << endl;

    for(i=0; i<7; i++)
    {

        cout << ansArr[i] << " nota(s) de R$ " << noteArr[i] << ",00" << endl;

    }

    return 0;
}
