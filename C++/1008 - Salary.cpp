#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n, wh;
    float amt;

    cin >> n >> wh >> amt;

    cout << "NUMBER = " << n << endl << "SALARY = U$ " << fixed  << setprecision(2) << amt*wh << endl;

    return 0;
}
