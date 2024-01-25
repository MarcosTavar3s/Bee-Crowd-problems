#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int p1, n1, p2,n2;
    float s1,s2;

    cin >> p1 >> n1 >> s1;
    cin >> p2 >> n2 >> s2;

    float total = n1*s1 + n2*s2;

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}
