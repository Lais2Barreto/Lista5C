#include <stdio.h>

typedef struct {
  int hora, minutos, segundos;
} hora;

typedef struct {
  int dia, mes, ano;
} data;

typedef struct {
  data data_comp, hora_comp;
  char texto[50];
} compromisso;
