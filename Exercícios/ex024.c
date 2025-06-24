/*Considerando a estrutura que representa um vetor R3: 
struct Vetor{ 
float x; 
float y; 
float z; 
}; 
Implemente um programa que receba, calcule e apresente a soma de dois vetores.
*/
#include <stdio.h>

struct vetor{
    float x;
    float y;
    float z;
}vetor1, vetor2;

int main ( void ){
   printf("Digite as coordenadas x, y e z do vetor 1: ");
   scanf("%f%f%f", &vetor1.x, &vetor1.y, &vetor1.z);
   
   printf("Digite as coordenadas x, y e z do vetor 2: ");
   scanf("%f%f%f", &vetor2.x, &vetor2.y, &vetor2.z);
   
   float vetor_soma_x = vetor1.x + vetor2.x;
   float vetor_soma_y = vetor1.y + vetor2.y;
   float vetor_soma_z = vetor1.z + vetor2.z;

   printf("vetor1 = (%.2f, %.2f, %.2f)\nvetor2 = (%.2f, %.2f, %.2f)\n", vetor1.x, vetor1.y, vetor1.z, vetor2.x, vetor2.y, vetor2.z);
   printf("vetor1 + vetor2 = (%.2f, %.2f, %.2f)", vetor_soma_x, vetor_soma_y, vetor_soma_z);

   return 0;
}