# Métodos de Ordenação em C

## Etapa 1: Geração dos dados de entrada

Implemente um programa que gere os arquivos de entrada para os métodos de ordenação. Este programa irá receber
como parâmetro o número de valores que deverão ser gerados e então sortear números inteiros positivos (números
pseudo aleatórios) entre 1 e 999.999. O programa deve garantir que não sejam gerados números repetidos. Então
gerar um arquivo de saída, contendo a sequência de valores, cada um em uma linha.
Deverão ser gerados 5 arquivos (sequência de valores) para cada quantidade de valores. Considere as quantidades de
valores: 1.000, 10.000 e 100.000. Portanto, ao todo serão 15 arquivos (5 arquivos de 1.000 valores, 5 arquivos de
10.000 valores e 5 arquivos de 100.000 valores).
Nomeie os arquivos com o padrão:
**“1000-arq1.txt”, “1000-arq2.txt”, ..., “100000-arq4.txt”, “100000-arq5.txt”**

## Etapa 2: Execução dos testes
Deverão ser implementados os métodos de ordenação:
1) Insert Sort;
2) Bubble Sort;
3) Selection Sort;
4) Shell Sort;
5) Merge Sort;
6) Quick Sort;

Cada método, irá receber como parâmetro um arquivo de entrada (produzido na Etapa 1) e, além de ordenar a lista,
deverá retornar as informações de quantas trocas (de posição) foram executadas pelo método de ordenação e o tempo
de execução do algoritmo.
