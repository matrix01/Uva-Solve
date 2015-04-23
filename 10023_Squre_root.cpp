#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int n;
        cin >> n;
    while(n--) {
        long double num;
                cin >> num;
                cout.precision(0);
                cout.setf(ios::fixed);
                cout << sqrt(num)<< endl;
    }

    return 0;
}
