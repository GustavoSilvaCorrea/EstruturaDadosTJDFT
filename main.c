#include <stdio.h>
#include <stdlib.h>

#include "processos.h"

int main(){
    int QtdProcessos = numeroProcessos("TJDFT_filtrado.csv");
    if (QtdProcessos >= 0) {
        printf("Quantidade De Processos: %d\n", QtdProcessos);
    }
    int ultimo_oj = id_ultimo_oj("TJDFT_filtrado.csv", 323961063);
    printf("Codigo do ultimo orgao julgador: %d\n", ultimo_oj);
    int antigo = processoAntigo("TJDFT_filtrado.csv");
    printf("Codigo do processo mais antigo: %d", antigo);
    return 0;

}