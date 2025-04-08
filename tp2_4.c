#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CANT_PC 5

struct compu {
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_cpu;
};

void listarPCs(struct compu pcs[], int cantidad);
void mostrarMasVieja(struct compu pcs[], int cantidad);
void mostrarMasVeloz(struct compu pcs[], int cantidad);

int main () {

    return 0;
}

void listarPCs(struct compu pcs[], int cantidad) {
    for(int i = 0; i < cantidad; i++) {
        printf("PC %d:\n", i+1);
        printf("  Velocidad: %d GHz\n", pcs[i].velocidad);
        printf("  Año: %d\n", pcs[i].anio);
        printf("  Núcleos: %d\n", pcs[i].cantidad_nucleos);
        printf("  Tipo CPU: %s\n", pcs[i].tipo_cpu);
        printf("------------------------\n");
    }
}

void mostrarMasVieja(struct compu pcs[], int cantidad) {
    int min = pcs[0].anio;
    int indice = 0;
    for(int i = 1; i < cantidad; i++) {
        if(pcs[i].anio < min) {
            min = pcs[i].anio;
            indice = i;
        }
    }
    listarPCs(&pcs[indice], 1);
}

void mostrarMasVeloz(struct compu pcs[], int cantidad) {
    int max = pcs[0].velocidad;
    int indice = 0;
    for(int i = 1; i < cantidad; i++) {
        if(pcs[i].velocidad > max) {
            max = pcs[i].velocidad;
            indice = i;
        }
    }
    listarPCs(&pcs[indice], 1);
}