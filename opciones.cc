//Margarita Vega Galindez
//Da calificacion en diferentes casos
#include<iostream>
using namespace std;
int main()
{
  char variable;
  cout<<"dame un valor entre A,B,C,D,F"<<endl;
  cin>>variable;
  switch(variable)
{
  case 'A':cout<<"exelente"<<endl;
    break;
  case 'B':cout<<"muy bien"<<endl;
    break;
  case 'C':cout<<"bien"<<endl;
    break;
  case 'D':cout<<"pasaste"<<endl;
    break;
  case 'F':cout<<"intentalo de nuevo"<<endl;
    break;
  default:cout<<"opcion no valida"<<endl;
  }
  return 0;
}
