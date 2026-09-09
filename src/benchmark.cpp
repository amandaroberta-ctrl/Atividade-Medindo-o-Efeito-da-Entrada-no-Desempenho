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
