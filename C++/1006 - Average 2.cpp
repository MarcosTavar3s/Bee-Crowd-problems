#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double a, b, c;
    cin >> a >> b >> c;
    double med= (a*2+b*3+c*5)/10;
  
    cout << "MEDIA = " << fixed << setprecision(1) << med << endl;

    return 0;
}
