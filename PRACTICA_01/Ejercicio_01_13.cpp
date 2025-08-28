#include<iostream>
using namespace std;
int main()
{
    int N=0;
    int suma=0;
    cout<<"Introduzca un numero para calcular la suma: ";
    cin>>N;
    cout<<"Resultado=";
    for(int i=1;i<=N;i++)
    {
        suma +=i;
        cout<<i;
        if (i<N)
        {
            cout<<"+";
        }
    }
    cout<<"="<<suma;
    return 0;
}
