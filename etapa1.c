#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void embaralhar(int *vet, int n){
    for (int i = 0; i < n; i++){
		int r = rand() % n;
        int temp = vet[i];
		vet[i] = vet[r];
		vet[r] = temp;
	}
}

//Função para evitar a que seja gerado numeros repetidos
void embaralha_vetor(int *vet, int n){
    int aux[1000000], i;
    for(i = 0; i<1000000; i++){
        aux[i] = i;
    }
    embaralhar(aux, 1000000);
    for(i = 0; i<n; i++){
        vet[i] = aux[i];
    }
}

int geraArq(int num){
    FILE *pont_arq1, *pont_arq2, *pont_arq3, *pont_arq4, *pont_arq5;
    if(num == 1000){
        pont_arq1 = fopen("1000-arq1.txt", "w");
        pont_arq2 = fopen("1000-arq2.txt", "w");
        pont_arq3 = fopen("1000-arq3.txt", "w");
        pont_arq4 = fopen("1000-arq4.txt", "w");
        pont_arq5 = fopen("1000-arq5.txt", "w");
        if((pont_arq1 == NULL) || (pont_arq2 == NULL) || (pont_arq3 == NULL) || (pont_arq4 == NULL) || (pont_arq5 == NULL)){
            printf("Falha na criacao dos arquivos.\n");
            return 1;
        }else{
            int vet[num];
            embaralha_vetor(vet, num);
            for(int i = 0; i<num; i++){
                fprintf(pont_arq1, "%i\n", vet[i]);
            }   
            embaralha_vetor(vet, num);
            for(int i = 0; i<num; i++){
                fprintf(pont_arq2, "%i\n", vet[i]);
            } 
            embaralha_vetor(vet, num);
            for(int i = 0; i<num; i++){
                fprintf(pont_arq3, "%i\n", vet[i]);
            } 
            embaralha_vetor(vet, num);
            for(int i = 0; i<num; i++){
                fprintf(pont_arq4, "%i\n", vet[i]);
            } 
            embaralha_vetor(vet, num);
            for(int i = 0; i<num; i++){
                fprintf(pont_arq5, "%i\n", vet[i]);
            } 
            fclose(pont_arq1);
            fclose(pont_arq2); 
            fclose(pont_arq3); 
            fclose(pont_arq4); 
            fclose(pont_arq5);  
        }
   
    }else if(num == 10000){
        pont_arq1 = fopen("10000-arq1.txt", "w");
        pont_arq2 = fopen("10000-arq2.txt", "w");
        pont_arq3 = fopen("10000-arq3.txt", "w");
        pont_arq4 = fopen("10000-arq4.txt", "w");
        pont_arq5 = fopen("10000-arq5.txt", "w");
        if((pont_arq1 == NULL) || (pont_arq2 == NULL) || (pont_arq3 == NULL) || (pont_arq4 == NULL) || (pont_arq5 == NULL)){
            printf("Falha na criacao dos arquivos.\n");
            return 1;
        }else{
            int vet[num];
            
            embaralha_vetor(vet, num);
            for(int i = 0; i<num; i++){
                fprintf(pont_arq1, "%i\n", vet[i]);
            }   
            embaralha_vetor(vet, num);
            for(int i = 0; i<num; i++){
                fprintf(pont_arq2, "%i\n", vet[i]);
            } 
            embaralha_vetor(vet, num);
            for(int i = 0; i<num; i++){
                fprintf(pont_arq3, "%i\n", vet[i]);
            } 
            embaralha_vetor(vet, num);
            for(int i = 0; i<num; i++){
                fprintf(pont_arq4, "%i\n", vet[i]);
            } 
            embaralha_vetor(vet, num);
            for(int i = 0; i<num; i++){
                fprintf(pont_arq5, "%i\n", vet[i]);
            } 
            fclose(pont_arq1);
            fclose(pont_arq2); 
            fclose(pont_arq3); 
            fclose(pont_arq4); 
            fclose(pont_arq5);  
        }
    }else if(num == 100000){
        pont_arq1 = fopen("100000-arq1.txt", "w");
        pont_arq2 = fopen("100000-arq2.txt", "w");
        pont_arq3 = fopen("100000-arq3.txt", "w");
        pont_arq4 = fopen("100000-arq4.txt", "w");
        pont_arq5 = fopen("100000-arq5.txt", "w");
        if((pont_arq1 == NULL) || (pont_arq2 == NULL) || (pont_arq3 == NULL) || (pont_arq4 == NULL) || (pont_arq5 == NULL)){
            printf("Falha na criacao dos arquivos.\n");
            return 1;
        }else{
            int vet[num];
            embaralha_vetor(vet, num);
            for(int i = 0; i<num; i++){
                fprintf(pont_arq1, "%i\n", vet[i]);
            }   
            embaralha_vetor(vet, num);
            for(int i = 0; i<num; i++){
                fprintf(pont_arq2, "%i\n", vet[i]);
            } 
            embaralha_vetor(vet, num);
            for(int i = 0; i<num; i++){
                fprintf(pont_arq3, "%i\n", vet[i]);
            } 
            embaralha_vetor(vet, num);
            for(int i = 0; i<num; i++){
                fprintf(pont_arq4, "%i\n", vet[i]);
            } 
            embaralha_vetor(vet, num);
            for(int i = 0; i<num; i++){
                fprintf(pont_arq5, "%i\n", vet[i]);
            } 
            fclose(pont_arq1);
            fclose(pont_arq2); 
            fclose(pont_arq3); 
            fclose(pont_arq4); 
            fclose(pont_arq5);  
        }    
    }else{
        printf("Valor invalido!\n");
    }    
    return 1;
}
int main(){ 
    srand(time(NULL));
    geraArq(1000);
    geraArq(10000);
    geraArq(100000);
    return 1;
}