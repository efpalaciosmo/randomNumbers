#include <iostream>
#include <iomanip>
#include  "dados.h"
using namespace std;

int main()
{
    for(int i = 1; i <= 20; i = i + 1){
        cout << setw(10) << simulacionDados2();

        if(i%5 == 0){
            cout << "\n";
        }
    }
    cout << "Simulacion al tirar dados: " << "\n";
    simulaConteo();
    return 0;
}
