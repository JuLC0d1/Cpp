#include <iostream>

using namespace std;

int main() {

    int inteiro = 5;
    //inteiro = 5;
    cout << inteiro << endl;

    float real = 5.2;
    //real = 5.2;
    cout << real << endl;

    double real2 = 5.2e99;
    //real2 = 5.2e99;
    cout << real2 << endl;

    bool booleano = true;
    //booleano = true;
    cout << booleano << endl;
    //false = 0  /  true = 1

//char letra[4]     para forçar a variavel char aceitar imprimir mais de uma letra
    char letra = 'b';
    //letra = 'b';
    cout << letra << endl;    

    string palavra = "bola";
    //palavra = "bola";
    cout << palavra << endl;

    //--------------------------------------------------------------------------

    int idade;
    cout << "Qual sua idade? " << endl;
    cin >> idade ;
    cout << "idade: " << idade << endl;

    system("pause");
    return 0;
}

/*
Bool: em geral, utiliza 1 byte da memória e os valores *True* ou *False*.

Char: em geral, utiliza 1 byte da memória, permite armazenar um caractere ou uma cadeia de caracteres.

Int: em geral, utiliza 4 bytes da memória e armazena números inteiros (sem casas decimais) com valores que vão de -2.147.483.648 a 2.147.483.647.

Double: em geral, utiliza 8 bytes de memória e armazena números com menos de 15 casas decimais com valores que vão de 2.2e-308 a 1.79e308.

Float: em geral, utiliza 4 bytes de memória e armazena números com menos de 6 casas decimais com valores que vão de 1.2e-38 a 3.4e-38
*/