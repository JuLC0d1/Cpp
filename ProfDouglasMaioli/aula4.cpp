#include <iostream>
#include <math.h> //biblioteca de funções matematicas

using namespace std;

int main() {

    int a=5, b=2;

    int soma = a + b;
    cout << "Soma: " << soma << endl;

    //cout << "Soma; " << a+b << endl; 
    // assim n gasta memoria com algo q n vai mais ser usado

    int sub = a-b;
    cout << "Subtracao: " << sub << endl;

    int mult = a*b;
    cout << "Multiplicacao: " << mult << endl;

    int quocdiv = a/b;
    cout << "Quociente da divisao: " << quocdiv << endl;

    int restodiv = a%b;
    cout << "Resto da divisao: " << restodiv << endl;

    float div = (float)a / (float)b;
    cout << "Divisao: " << div << endl;

    float pot = pow(a,b); // a^b
    cout << "Potencia: " << pot << endl;

    //Incremento
    cout << "a antigo: " << a << endl;
    //a = a+1;
    //a+=1;
    a++;
    cout << "a novo: " << a << endl;

    //Decremento
    cout << "a antigo: " << a << endl;
    //a = a-1;
    //a-=1;
    a--;
    cout << "a novo: " << a << endl;


    system("pause");
    return 0;
}