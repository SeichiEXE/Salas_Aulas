#include <iostream>
using namespace std;

int main() {
    const int NUM_SALAS = 6;  // Número total de salas
    int pessoas[NUM_SALAS];  // Número de pessoas em cada sala

    // Solicita a entrada da quantidade de alunos em cada sala
    for (int i = 0; i < NUM_SALAS; i++) {
        cout << "Digite a quantidade de alunos na sala " << i + 1 << ": ";
        cin >> pessoas[i];
    }

    int somaPessoas = 0;  // Variável para armazenar a soma das pessoas

    // Calcula a soma das pessoas
    for (int i = 0; i < NUM_SALAS; i++) {
        somaPessoas += pessoas[i];
    }

    float mediaPessoas = static_cast<float>(somaPessoas) / NUM_SALAS;  // Calcula a média das pessoas

    cout << "A média de pessoas nas salas é: " << mediaPessoas << endl;

    int salaMaior = 0;  // Variável para armazenar o índice da sala com maior número de alunos
    int salaMenor = 0;  // Variável para armazenar o índice da sala com menor número de alunos

    // Verifica a sala com maior e menor número de alunos
    for (int i = 1; i < NUM_SALAS; i++) {
        if (pessoas[i] > pessoas[salaMaior]) {
            salaMaior = i;
        }
        if (pessoas[i] < pessoas[salaMenor]) {
            salaMenor = i;
        }
    }

    cout << "A sala com maior número de alunos é a sala " << salaMaior + 1 << " com " << pessoas[salaMaior] << " alunos." << endl;
    cout << "A sala com menor número de alunos é a sala " << salaMenor + 1 << " com " << pessoas[salaMenor] << " alunos." << endl;

    return 0;
}
