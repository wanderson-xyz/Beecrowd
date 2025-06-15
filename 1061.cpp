#include <iostream>
using namespace std;

int main() {
    int dia_inicio, dia_fim;
    int hi, mi, si; // hora, minuto, segundo de início
    int hf, mf, sf; // hora, minuto, segundo de fim

    string s; // Para descartar a palavra "Dia"

    // Entrada
    cin >> s >> dia_inicio;
    cin >> hi >> s >> mi >> s >> si;
    cin >> s >> dia_fim;
    cin >> hf >> s >> mf >> s >> sf;

    // Converte tudo para segundos
    int inicio = dia_inicio * 24 * 3600 + hi * 3600 + mi * 60 + si;
    int fim = dia_fim * 24 * 3600 + hf * 3600 + mf * 60 + sf;

    int duracao = fim - inicio;

    int dias = duracao / (24 * 3600);
    duracao = duracao % (24 * 3600);

    int horas = duracao / 3600;
    duracao = duracao % 3600;

    int minutos = duracao / 60;
    int segundos = duracao % 60;

    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;

    return 0;
}
