/*
   Atividade 1: Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme
                solicitado abaixo:
                                - horário: composto de hora, minutos e segundos.
                                - Data: composto de dia, mês e ano.
                                - Compromisso: composto de uma data, horário e texto que descreve o compromisso.
   Por Luís H.                
*/
#include <stdio.h>

//horário: composto de hora, minutos e segundos.
struct horario
{
  int horas;
  int minutos;
  int segundos;
};

//Data: composto de dia, mês e ano.
struct data
{
  int dia;
  int mes;
  int ano;
};

//Compromisso: composto de uma data, horário e texto que descreve o compromisso.
struct compromisso
{
  struct horario;
  struct data;
  char descricaoCompromisso[200];
};
//...........
