#include <iostream>
using namespace std;
int main() {
  float a,b;
  float A;
  int opzione;
  cin >> a>> b;
  cin >> opzione;
  switch (opzione){
      case 0:
          A= ((a*b)/2);
          cout << (A)<< endl;
          break;
      case 1:
          A= (a*a);
          cout << (A) << endl;
          break;
      case 2:
          A= (a*b);
          cout << (A)<< endl;
      break;
    default:
      cout << "opzione non valida"<< endl;
  }
            return 0;
}
