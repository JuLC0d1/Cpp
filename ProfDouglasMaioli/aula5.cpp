#include <iostream>

using namespace std;

#define pi 3.14 << endl;
#define curtir cout << "curta esse video!" << endl;

int t = 5; // variavel global, vale para todas as funçõs

// dentro do () fica os 'argumentos' da função, ou também, entradas
void semsaida()
{
    cout << "Esta funcao nao tem saida, \nela so imprime algo\n";
}

int somar(int x, int y)
{
    int soma = x + y;

    // int t = 1;//variavel local, seu valor só vale aqui dentro
    t = 2;

    return soma;
}

int main()
{

    // int t = 0;
    t = 1;

    semsaida();
    semsaida();
    semsaida();
    semsaida();
    semsaida();

    int a = 5, b = 4;
    int s = somar(a, b);
    cout << "Soma do valor do s: " << s << endl;

    cout << "Valor de t: " << t << endl;

    cout << pi;

    curtir;

    system("pause");
    return 0;
}