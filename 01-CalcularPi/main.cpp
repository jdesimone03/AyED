#include <iostream>

using namespace std;

float potencia(float base, int exp)
{
    int mult = 1;
    for (int c = 0; c < exp; c++)
    {
        mult *= base;
    }
    return mult;
}

float leibniz(int n, float valor)
{
    // Formula: [(-1)^n]/(2*n+1)
    float paso = potencia(-1, n) / (2 * n + 1);
    return valor + paso;
}

int main()
{
    int aux;
    const int limite = 3141592;
    const int multiplicador = 1000000;
    float valor = 0;
    cout.precision(7);
    for (int i = 0; aux != limite; i++)
    {
        valor = leibniz(i, valor);
        aux = (valor * 4) * multiplicador;
        cout << i << ".\t" << valor * 4 << endl; // Se multiplica por 4 para que de el valor de pi
    }

    return 0;
}