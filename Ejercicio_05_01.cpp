// Materia: Programación I, Paralelo 4
// Autor: Juan Jose Condori Yucra
// Fecha creación: 02/10/2025
// Número de ejercicio: 1
// Problema planteado:  Escriba un programa con 6 funciones utilizando vectores
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void genVoltajes(double arr[], int n)
{
    for(int i=0; i<=n; i++)
        arr[i]=(rand()%(220-20+1))+20;//Enteros entre 20-220
}
void genTemperaturas(double arr[],int n)
{
    for (int i=0; i<=n; i++)
        arr[i]=(rand()%(100-0+1))+0;
}
void genAlfanum(char arr[], int n)
{
    string pool="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    for (int i=0; i<=n;i++)
        arr[i]=pool[rand()%pool.size()];
}
void genAnios(int arr[], int n)
{
    for(int i=0;i<=n;i++)
        arr[i]=(rand()%(2025-1990+1))+1990;
}
void genVelocidades(double arr[],int n)
{
    for(int i=0;i<=n;i++)
        arr[i]=(rand()%(300-10+1))+10;
}
void genDistancias(double arr[], int n)
{
    for(int i=0;i<=n;i++)

        arr[i]=(rand()%(1000-1+1))+1;
}
int main()
{
    srand(time(0));
    double voltajes[100],temperaturas[50],velocidades[32],distancias[1000];
    char alfanume[30];
    int anios[100];

    genVoltajes(voltajes,100);
    genTemperaturas(temperaturas,50);
    genAlfanum(alfanume,30);
    genAnios(anios,100);
    genVelocidades(velocidades,32);
    genDistancias(distancias,1000);

    cout<<"Voltajes: "<<endl;
    for(int i=0;i<100;i++)
    {
        cout<<voltajes[i]<<"  ";
        if ((i+1)%10==0)
            cout<<"  "<<endl;
    }
    cout<<"temperaturas: "<<endl;
    for(int i=0; i<50;i++)
    {
        cout<<temperaturas[i]<<"  ";
        if ((i+1)%10==0)
            cout<<"  "<<endl;
    }
    cout<<"Alfanumerico: "<<endl;
    for (int i=0; i<=30;i++)
    {
        cout<<alfanume[i]<<" ";
    }
    cout<<"\nAnios: "<<endl;
    for (int i=0;i<100;i++)
    {
        cout<<anios[i]<<" ";
        if((i+1)%10==0)
            cout<<" "<<endl;
    }
    cout<<"\nVelocidades: "<<endl;
    for(int i=0; i<32;i++)
    {
        cout<<velocidades[i]<<" ";
        if((i+1)%10==0)
            cout<<" "<<endl;
    }
    cout<<"\nDistancias: "<<endl;
    for(int i=0;i<50;i++)
    {
        cout<<distancias[i]<<" ";
        if((i+1)%10==0)
            cout<<" "<<endl;
    }
    return 0;

}
