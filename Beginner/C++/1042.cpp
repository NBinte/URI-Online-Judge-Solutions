#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[3] = {0};

    int sortedArr[3] = {0};

    int i;

    for(i=0; i<3; i++)
    {

        cin >> arr[i];
        sortedArr[i] = arr[i];
    }

    int n = sizeof(sortedArr) / sizeof(sortedArr[0]);

    sort(sortedArr, sortedArr + n);

    for(i=0; i<3; i++)
    {

        cout << sortedArr[i] << endl;

    }

    cout << endl;

    for(i=0; i<3; i++)
    {

        cout << arr[i] << endl;

    }

    return 0;
}











