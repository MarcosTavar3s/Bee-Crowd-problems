#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  double pi=3.14159;
  double A;
  double R;

  cin >> R;
  A=R*R*pi;

  cout << "A=" << fixed << setprecision(4) << A << endl;

    return 0;
}
