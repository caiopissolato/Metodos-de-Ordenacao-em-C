#ifndef ORDENACAO_H
#define ORDENACAO_H

void bubble_sort (int vetor[], int n);
void insert_sort(int vetor[], int n);
void selection_sort(int vetor[], int n);
void shell_sort(int vetor[], int n);
void merge(int *vetor, int ini, int meio, int fim);
void merge_sort(int *vetor, int ini, int fim);
int quick(int *vetor, int ini, int fim);
void quick_sort(int *vetor, int ini, int fim);

void le_arquivo1000(char *end, int *vet);
void le_arquivo10000(char *end, int *vet);
void le_arquivo100000(char *end, int *vet);

float ordena_bub(int *vet, int n);
float ordena_insert(int *vet, int n);
float ordena_selection(int *vet, int n);
float ordena_shell(int *vet, int n);
float ordena_merge(int *vet, int n);
float ordena_quick(int *vet, int n);

#endif