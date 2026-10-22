#include <iostream>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int k=1, acum = 0 ;
    do{
        cout<<"Numero :"<<k<<endl;
        acum = k + 1;
        k=k+1;
    }while(k<=10);

    cout << "La suma total es : " << acum ;

    return 0;
}
