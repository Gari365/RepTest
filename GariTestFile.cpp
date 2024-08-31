#include <iostream>
using namespace std;

int main () {
  int nilai;
  string mapel;
  cin>>nilai;
  cin>>mapel;
  
  if (nilai>=75)
    cout<<"Nilai mata pelajaran "<< mapel<< " LULUS."<<endl;
  else
    cout<<"Nilai mata pelajaran "<< mapel<< " GAGAL."<<endl;

return 0;
}
