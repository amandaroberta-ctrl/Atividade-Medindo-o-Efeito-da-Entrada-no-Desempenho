Medindo o Efeito da Entrada no Desempenho
Dupla: 
- Amanda Roberta Bandeira Santos
- Antonio Roberto Da Silva Santos

Neste trabalho vamos comparar dois algoritmos de ordenação:
- Insertion Sort vs Merge Sort

Queremos descobrir se o desempenho dos algoritmos depende somente do tamanho da entrada ou se também depende da forma como os dados estão organizados.

Algoritmos utilizados

O Insertion Sort organiza os elementos um por um, inserindo cada
elemento na posição correta.

O Merge Sort divide os dados em partes menores, ordena essas partes
e depois junta os resultados.

Metodologia
Foram utilizados cinco tamanhos de entrada:
- 1000
- 2000
- 4000
- 8000
- 16000

Foram testados dois tipos de organização:
- Dados aleatórios
- Dados ordenados

Cada combinação foi executada três vezes e foi utilizada a mediana
dos tempos obtidos.
Os tempos foram medidos em microssegundos.

Resultados

Os resultados completos estão no arquivo:

`resultados.csv`

Dados aleatórios

| Tamanho | Insertion Sort | Merge Sort |
|---:|---:|---:|
| 1000 | 1664 | 767 |
| 2000 | 6728 | 1549 |
| 4000 | 25865 | 3158 |
| 8000 | 102892 | 6505 |
| 16000 | 436853 | 14212 |

Dados ordenados

| Tamanho | Insertion Sort | Merge Sort |
|---:|---:|---:|
| 1000 | 8 | 679 |
| 2000 | 16 | 1326 |
| 4000 | 33 | 2742 |
| 8000 | 67 | 5577 |
| 16000 | 137 | 11678 |

Análise dos ratios

Nos dados aleatórios, o Insertion Sort apresentou ratios próximos
de 4 quando o tamanho da entrada foi dobrado. Isso indica crescimento
próximo de O(n²).

Nos dados ordenados, o Insertion Sort apresentou ratios próximos de 2,
indicando comportamento próximo de O(n).

O Merge Sort apresentou ratios próximos de 2 nos dois cenários,
mostrando que seu desempenho foi menos afetado pela organização dos
dados e é compatível com O(n log n).

Gráficos

Dados aleatórios

<img width="1653" height="993" alt="dados_aleatorios" src="https://github.com/user-attachments/assets/1bbeeade-b1c9-4355-88f5-7320ffd35e9b" />


Dados ordenados

<img width="1652" height="997" alt="dados_ordenados" src="https://github.com/user-attachments/assets/68e00d82-56ab-44ce-aa7d-99d34846a9ba" />


Conclusão

Os resultados mostram que o desempenho de um algoritmo não depende
somente do tamanho da entrada, mas também da organização dos dados.
O Insertion Sort foi muito mais afetado pelos dados aleatórios,
enquanto apresentou desempenho muito melhor quando os dados já estavam
ordenados.
O Merge Sort apresentou comportamento mais estável nos dois cenários.
