#include <iostream>
using namespace std;

//Za unesenu temperaturu u stepenima celzijusima izračunati temperaturu u farenhajtima. F = C * 1,8 + 32

int main() {
  float temp_C, temp_F;

  cout<<"Unesite temperaturu u stepenima celzijusima:"<<endl;
  cin>> temp_C;

  temp_F = temp_C * 1.8 + 32;

  cout<<"Temperatura u farenhajtima je "<< temp_F << "°F"<< endl;

  return 0;
 
}