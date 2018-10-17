#include <iostream>
#include <string>
//#include <cctype>
//#include <locale>
#include <algorithm>
using namespace std;

void zmiana(string & napis_do_zmiany);

int main()
{
string napis;
    
   for (;;)
{
 cout<<"Podaj łańcuch (q, aby skończyć)\n";
 getline(cin, napis);

 string & referencja = napis;

 zmiana(referencja);  
 
 cout<<napis<<endl;   
 
  if (napis == "q" || napis == "Q")
  {
      cout<<"Do widzenia\n";
        break;
  }
 
}

return 0;
}

/*
void zmiana(string & napis_do_zmiany)
{
    locale loc;
    
for (string::size_type i=0; i<napis_do_zmiany.length(); ++i)
    napis_do_zmiany[i] = toupper(napis_do_zmiany[i],loc);    
}
*/

void zmiana(string & napis_do_zmiany)
{
transform(napis_do_zmiany.begin(), napis_do_zmiany.end(),napis_do_zmiany.begin(), ::toupper);
}

// 3/394
