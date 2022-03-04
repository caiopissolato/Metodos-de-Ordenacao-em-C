#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"

int main(){
    void shell_sort(int vetor[], int n){
        int i = (n - 1) / 2;
        int chave, k, aux;
        long long int flag = 0;

        while (i != 0){
            do{
                chave = 1;
                for (k = 0; k < n - i; ++k){
                    if (vetor[k] > vetor[k + i]){
                        flag++;
                        aux = vetor[k];
                        vetor[k] = vetor[k + i];
                        vetor[k + i] = aux;
                        chave = 0;
                    }
                }
            }    
            while (chave == 0);
            i = i / 2;
        }
        printf("Trocas: %lli\n", flag);
    }

    void le_arquivo1000(char *end, int *vet){
        FILE *file = fopen(end, "r");
        int i = 0, retorno_scanf;
        if(file == NULL){
            printf("ERRO ao abrir arquivo.\n");
            exit(1);
        }else{
            for(i = 0; i<1000; i++){
                if(retorno_scanf != EOF){
                    retorno_scanf = fscanf(file, "%i", &vet[i]);
                }
            }
        }   
        fclose(file);     
    }

    void le_arquivo10000(char *end, int *vet){
        FILE *file = fopen(end, "r");
        int i = 0, retorno_scanf;
        if(file == NULL){
            printf("ERRO ao abrir arquivo.\n");
            exit(1);
        }else{
            for(i = 0; i<10000; i++){
                if(retorno_scanf != EOF){
                    retorno_scanf = fscanf(file, "%i", &vet[i]);
                }
            }
        }   
        fclose(file);     
    }

    void le_arquivo100000(char *end, int *vet){
        FILE *file = fopen(end, "r");
        int i = 0, retorno_scanf;
        if(file == NULL){
            printf("ERRO ao abrir arquivo.\n");
            exit(1);
        }else{
            for(i = 0; i<100000; i++){
                if(retorno_scanf != EOF){
                    retorno_scanf = fscanf(file, "%i", &vet[i]);
                }
            }
        }   
        fclose(file);     
    }

    float ordena_shell(int *vet, int n){
        float tempo;
        time_t t_ini, t_fim;
        t_ini = time(NULL);
        shell_sort(vet, n);
        t_fim = time(NULL);
        tempo = difftime(t_fim, t_ini);
        return tempo;
    }

    int vetor1000shell_Arq1[1000-1], vetor1000shell_Arq2[1000-1], vetor1000shell_Arq3[1000-1], vetor1000shell_Arq4[1000-1], vetor1000shell_Arq5[1000-1], vetor10000shell_Arq1[10000-1], vetor10000shell_Arq2[10000-1], vetor10000shell_Arq3[10000-1], vetor10000shell_Arq4[10000-1], vetor10000shell_Arq5[10000-1], vetor100000shell_Arq1[100000-1], vetor100000shell_Arq2[100000-1], vetor100000shell_Arq3[100000-1], vetor100000shell_Arq4[100000-1], vetor100000shell_Arq5[100000-1];
    le_arquivo1000("1000-arq1.txt", vetor1000shell_Arq1); le_arquivo1000("1000-arq2.txt", vetor1000shell_Arq2); le_arquivo1000("1000-arq3.txt", vetor1000shell_Arq3); le_arquivo1000("1000-arq4.txt", vetor1000shell_Arq4); le_arquivo1000("1000-arq5.txt", vetor1000shell_Arq5); le_arquivo10000("10000-arq1.txt", vetor10000shell_Arq1); le_arquivo10000("10000-arq2.txt", vetor10000shell_Arq2); le_arquivo10000("10000-arq3.txt", vetor10000shell_Arq3); le_arquivo10000("10000-arq4.txt", vetor10000shell_Arq4); le_arquivo10000("10000-arq5.txt", vetor10000shell_Arq5); le_arquivo100000("100000-arq1.txt", vetor100000shell_Arq1); le_arquivo100000("100000-arq2.txt", vetor100000shell_Arq2); le_arquivo100000("100000-arq3.txt", vetor100000shell_Arq3); le_arquivo100000("100000-arq4.txt", vetor100000shell_Arq4); le_arquivo100000("100000-arq5.txt", vetor100000shell_Arq5);

    float result1 = ordena_shell(vetor1000shell_Arq1, 1000);
    printf("Tempo Shell Sort Arq1{1000}: %.5f\n\n", result1);

    float result2 = ordena_shell(vetor1000shell_Arq2, 1000);
    printf("Tempo Shell Sort Arq2{1000}: %.5f\n\n", result2);

    float result3 = ordena_shell(vetor1000shell_Arq3, 1000);
    printf("Tempo Shell Sort Arq3{1000}: %.5f\n\n", result3);

    float result4 = ordena_shell(vetor1000shell_Arq4, 1000);
    printf("Tempo Shell Sort Arq4{1000}: %.5f\n\n", result4);

    float result5 = ordena_shell(vetor1000shell_Arq5, 1000);
    printf("Tempo Shell Sort Arq5{1000}: %.5f\n\n", result5);

    float result6 = ordena_shell(vetor10000shell_Arq1, 10000);
    printf("Tempo Shell Sort Arq1{10000}: %.5f\n\n", result6);

    float result7 = ordena_shell(vetor10000shell_Arq2, 10000);
    printf("Tempo Shell Sort Arq2{10000}: %.5f\n\n", result7);

    float result8 = ordena_shell(vetor10000shell_Arq3, 10000);
    printf("Tempo Shell Sort Arq3{10000}: %.5f\n\n", result8);

    float result9 = ordena_shell(vetor10000shell_Arq4, 10000);
    printf("Tempo Shell Sort Arq4{10000}: %.5f\n\n", result9);

    float result10 = ordena_shell(vetor10000shell_Arq5, 10000);
    printf("Tempo Shell Sort Arq5{10000}: %.5f\n\n", result10);

    float result11 = ordena_shell(vetor100000shell_Arq1, 100000);
    printf("Tempo Shell Sort Arq1{100000}: %.5f\n\n", result11);

    float result12 = ordena_shell(vetor100000shell_Arq2, 100000);
    printf("Tempo Shell Sort Arq2{100000}: %.5f\n\n", result12);

    float result13 = ordena_shell(vetor100000shell_Arq3, 100000);
    printf("Tempo Shell Sort Arq3{100000}: %.5f\n\n", result13);

    float result14 = ordena_shell(vetor100000shell_Arq4, 100000);
    printf("Tempo Shell Sort Arq4{100000}: %.5f\n\n", result14);

    float result15 = ordena_shell(vetor100000shell_Arq5, 100000);
    printf("Tempo Shell Sort Arq5{100000}: %.5f\n\n", result15);

    FILE *file1, *file2, *file3, *file4, *file5, *file6, *file7, *file8, *file9, *file10, *file11, *file12, *file13, *file14, *file15;

    file1 = fopen("1-ShellSort{1000}-ORDENADO.txt", "w");
    file2 = fopen("2-ShellSort{1000}-ORDENADO.txt", "w");
    file3 = fopen("3-ShellSort{1000}-ORDENADO.txt", "w");
    file4 = fopen("4-ShellSort{1000}-ORDENADO.txt", "w");
    file5 = fopen("5-ShellSort{1000}-ORDENADO.txt", "w");

    file6 = fopen("1-ShellSort{10000}-ORDENADO.txt", "w");
    file7 = fopen("2-ShellSort{10000}-ORDENADO.txt", "w");
    file8 = fopen("3-ShellSort{10000}-ORDENADO.txt", "w");
    file9 = fopen("4-ShellSort{10000}-ORDENADO.txt", "w");
    file10 = fopen("5-ShellSort{10000}-ORDENADO.txt", "w");

    file11 = fopen("1-ShellSort{100000}-ORDENADO.txt", "w");
    file12 = fopen("2-ShellSort{100000}-ORDENADO.txt", "w");
    file13 = fopen("3-ShellSort{100000}-ORDENADO.txt", "w");
    file14 = fopen("4-ShellSort{100000}-ORDENADO.txt", "w");
    file15 = fopen("5-ShellSort{100000}-ORDENADO.txt", "w");

    for(int i = 0; i<1000; i++){
        fprintf(file1, "%i\n", vetor1000shell_Arq1[i]);
    } 
    for(int i = 0; i<1000; i++){
        fprintf(file2, "%i\n", vetor1000shell_Arq2[i]);
    } 
    for(int i = 0; i<1000; i++){
        fprintf(file3, "%i\n", vetor1000shell_Arq3[i]);
    } 
    for(int i = 0; i<1000; i++){
        fprintf(file4, "%i\n", vetor1000shell_Arq4[i]);
    } 
    for(int i = 0; i<1000; i++){
        fprintf(file5, "%i\n", vetor1000shell_Arq5[i]);
    } 
    for(int i = 0; i<10000; i++){
        fprintf(file6, "%i\n", vetor10000shell_Arq1[i]);
    } 
    for(int i = 0; i<10000; i++){
        fprintf(file7, "%i\n", vetor10000shell_Arq2[i]);
    } 
    for(int i = 0; i<10000; i++){
        fprintf(file8, "%i\n", vetor10000shell_Arq3[i]);
    } 
    for(int i = 0; i<10000; i++){
        fprintf(file9, "%i\n", vetor10000shell_Arq4[i]);
    } 
    for(int i = 0; i<10000; i++){
        fprintf(file10, "%i\n", vetor10000shell_Arq5[i]);
    } 
    for(int i = 0; i<100000; i++){
        fprintf(file11, "%i\n", vetor10000shell_Arq1[i]);
    } 
    for(int i = 0; i<100000; i++){
        fprintf(file12, "%i\n", vetor100000shell_Arq2[i]);
    } 
    for(int i = 0; i<100000; i++){
        fprintf(file13, "%i\n", vetor100000shell_Arq3[i]);
    } 
    for(int i = 0; i<100000; i++){
        fprintf(file14, "%i\n", vetor100000shell_Arq4[i]);
    } 
    for(int i = 0; i<100000; i++){
        fprintf(file15, "%i\n", vetor100000shell_Arq5[i]);
    } 
    fclose(file1);
    fclose(file2);
    fclose(file3);
    fclose(file4);
    fclose(file5);
    fclose(file6);
    fclose(file7);
    fclose(file8);
    fclose(file9);
    fclose(file10);
    fclose(file11);
    fclose(file12);
    fclose(file13);
    fclose(file14);
    fclose(file15);

    return 1;
}    