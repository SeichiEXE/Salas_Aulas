#include <iostream>
using namespace std;

int main() {
    const int NUM_SALAS = 6;  // Número total de salas
    int pessoas[NUM_SALAS] = {35, 4, 22, 20, 36, 30};  // Número de pessoas em cada sala

    int somaPessoas = 0;  // Variável para armazenar a soma das pessoas

    // Calcula a soma das pessoas
    for (int i = 0; i < NUM_SALAS; i++) {
        somaPessoas += pessoas[i];
    }

    float mediaPessoas = static_cast<float>(somaPessoas) / NUM_SALAS;  // Calcula a média das pessoas

    cout << "A média de pessoas nas salas é: " << mediaPessoas << endl;

    cout << "Salas com quantidade de pessoas acima da média:" << endl;

    // Verifica quais salas têm uma quantidade de pessoas acima da média
    for (int i = 0; i < NUM_SALAS; i++) {
        if (pessoas[i] > mediaPessoas) {
            cout << "Sala " << i + 1 << ": " << pessoas[i] << " pessoas" << endl;
        }
    }

    return 0;
}
