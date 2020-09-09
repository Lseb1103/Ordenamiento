#include <iostream>
#include <fstream>
using namespace std;

void ingresar (int A[], int n);
void heapSort(int b[], int n);
void imprimir (int A[],int n);

int main()
{
    ofstream guargardatos;
    guargardatos.open(("heapSort.txt"),ios::out);
    guargardatos << "tipo de algoritmo utilizado: heapSort"<< endl;
    int A[100],n;
    cout<<"Ingresa la cantidad de elementos:";
    cin>>n;
    guargardatos<<"elementos sin ordenar"<< endl;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        guargardatos<< A[i] << endl;
    }
    heapSort(A, n);
    guargardatos<<"elementos ordenados"<< endl;
     for(int i=1;i<=n;i++)
    {
        cout<<"["<<A[i]<<"]";
        guargardatos << "["<<A[i]<<"]" << endl;
    }
    guargardatos.close();
    return 0;
}
void ingresar (int A[], int n)
{

    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }

}

void heapSort(int b[], int n)
{
   int valor,temp,a;

    for(int i=n; i>0; i--)
    {
        for(int j=1; j<=i; j++)
        {
            valor=b[j];
            a=j/2;
            while(a>0 && b[a]<valor)
            {
                b[j]=b[a];
                j=a;
                a=a/2;
            }
            b[j]=valor;
        }
        temp=b[1];
        b[1]=b[i];
        b[i]=temp;
    }
}
void imprimir (int A[],int n)
{
for(int i=1;i<=n;i++)
    {
        cout<<"["<<A[i]<<"]";
    }
}
