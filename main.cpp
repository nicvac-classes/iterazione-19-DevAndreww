#include <iostream>
using namespace std;

int main()
{
    int N, ndivisori, divisori, resto;

    cout << "Scrivi un numero intero." << endl;

    cin >> N;

    ndivisori=0;

    for(divisori=1; divisori <= N; divisori=divisori+1)
    {
        resto=N%divisori;

        if(resto==0)
        {
            cout << divisori << "è divisore." << endl;
            ndivisori=ndivisori+1;

        }
        
    }
    cout << "I divisori sono " << ndivisori << "." << endl;

    if(ndivisori==2)
    {
        cout << N << " è un numero primo." << endl;
    }
    else
    {
        cout << N << " non è un numero primo." << endl;
    }
}


