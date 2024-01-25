#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string name;
    double income, sales;

    cin >> name >> income >> sales;

    double rend = income + (sales*15/100);

    cout << "TOTAL = R$ " <<  fixed << setprecision(2) << rend << endl; 

    return 0;
}
