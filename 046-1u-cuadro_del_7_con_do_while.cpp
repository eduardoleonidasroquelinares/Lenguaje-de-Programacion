#include <iostream>
using namespace std;

int main()
{
    int k = 1,cant= 10;

    cout << "TABLA DEL 7"<< endl;

    do{
        cout<<"7 x "<<k<< " = "<<k*7<<endl;
        k=k+1;
    }while(k<=cant);

    return 0;
}
