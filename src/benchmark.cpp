#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& dados) {

    for (int i = 1; i < dados.size(); i++) {

        int chave = dados[i];
        int j = i - 1;

        while (j >= 0 && dados[j] > chave) {
            dados[j + 1] = dados[j];
            j--;
        }

        dados[j + 1] = chave;
    }
}

void merge(vector<int>& dados, int inicio, int meio, int fim) {

    vector<int> esquerda;
    vector<int> direita;

    for (int i = inicio; i <= meio; i++) {
        esquerda.push_back(dados[i]);
    }

    for (int i = meio + 1; i <= fim; i++) {
        direita.push_back(dados[i]);
    }

    int i = 0;
    int j = 0;
    int k = inicio;

    while (i < esquerda.size() && j < direita.size()) {

        if (esquerda[i] <= direita[j]) {
            dados[k] = esquerda[i];
            i++;
        } else {
            dados[k] = direita[j];
            j++;
        }

        k++;
    }

    while (i < esquerda.size()) {
        dados[k] = esquerda[i];
        i++;
        k++;
    }

    while (j < direita.size()) {
        dados[k] = direita[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& dados, int inicio, int fim) {

    if (inicio >= fim) {
        return;
    }

    int meio = (inicio + fim) / 2;

    mergeSort(dados, inicio, meio);
    mergeSort(dados, meio + 1, fim);

    merge(dados, inicio, meio, fim);
}
