#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double R, vol;

    cin >> R;
    vol = 4.0/3 * 3.14159 * R * R * R;

    cout << "VOLUME = " << fixed << setprecision(3) << vol << endl;


    return 0;
}
