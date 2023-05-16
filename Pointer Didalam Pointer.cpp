#include <iostream>
using namespace std;

int main() {
    int tes = 10;
    int *Aptr = &tes;
    int **Bptr = &Aptr;

    cout<<"Nilai variabel number: "<<*Aptr<<endl;
    cout<<"Alamat variabel number: "<<Aptr<<endl;
    cout<<"Nilai variabel tes(menggunakan Bptr): "<<**Bptr<<endl;
    cout<<"Alamat variabel tes(menggunakan Bptr): "<<*Bptr<<endl;
    cout<<"Alamat Aptr: "<<Bptr<<endl;

    return 0;
}
