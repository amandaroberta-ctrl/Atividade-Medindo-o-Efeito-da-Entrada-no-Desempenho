Nossos Diário de Investigação
Integrantes - Amanda Roberta e Antonio Roberto

 *Usamos um computador para está fazendo esse projeto*
 
Antes dos testes, de executar os algoritmos, nossa expectativa era que o Insertion Sort fosse mais afetado pela organização dos dados.
Acreditamos que ele teria um desempenho melhor quando os dados já estivessem ordenados, porque nesse caso haveria menos elementos para movimentar.
Para o Merge Sort, esperamos que a diferença entre uma entrada aleatória e uma entrada ordenada seja menor.
Também esperamos que aumentar o tamanho da entrada faça o tempo de execução aumentar.

O que pretendemos observar
- Insertion Sort com entrada aleatória;
- Insertion Sort com entrada ordenada;
- Merge Sort com entrada aleatória;
- Merge Sort com entrada ordenada.

Os tamanhos utilizados serão:
- 1.000
- 2.000
- 4.000
- 8.000
- 16.000
Cada ponto será executado três vezes e utilizaremos a mediana dos resultados.

-------Durante os testes-----------

Implementamos os algoritmos Insertion Sort e Merge Sort em C++.
Foram gerados dados aleatórios utilizando uma semente fixa para tornar
os testes reproduzíveis. A partir dos mesmos dados aleatórios também
foram criados os dados ordenados.
Os tempos foram medidos em microssegundos.
Para cada tamanho foram realizadas três medições, além de uma execução
de aquecimento. A mediana das três medições foi utilizada nos
resultados.
Os resultados foram armazenados em um arquivo CSV.

Usamos esse site para fazer a implementação - https://www.onlinegdb.com/online_c++_compiler#

-------Depois dos testes-----------

Nos dados aleatórios, o Insertion Sort apresentou crescimento muito
maior no tempo de execução conforme o tamanho da entrada aumentou.
Nos dados ordenados, o Insertion Sort apresentou tempos muito menores.
O Merge Sort apresentou crescimento mais estável nos dois cenários.

Quando o tamanho da entrada foi dobrado, o Insertion Sort com dados
aleatórios apresentou ratios próximos de 4, indicando comportamento
próximo de O(n²).
Com dados ordenados, os ratios do Insertion Sort ficaram próximos de 2,
indicando comportamento próximo de O(n).
O Merge Sort apresentou ratios próximos de 2 nos dois cenários,
mostrando que a organização dos dados teve pouca influência em seu
desempenho.
Concluímos que o desempenho de um algoritmo depende tanto do tamanho
da entrada quanto da organização dos dados.
