#include <iostream>

using namespace std;

int main()
{
    int nilai[3], *petunjuk;
    nilai[0] = 125;
    nilai[1] = 345;
    nilai[2] = 750;
    petunjuk = &nilai[0];
    
    cout<<"Nilai '"<<*petunjuk<<"' ada di alamat memori: "<<petunjuk<<endl;
    cout<<"Nilai '"<<*petunjuk<<"' ada di alamat memori: "<<petunjuk+1<<endl;
    cout<<"Nilai '"<<*petunjuk<<"' ada di alamat memori: "<<petunjuk+2<<endl;

    return 0;
}