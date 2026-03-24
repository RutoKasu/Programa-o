#include<stdio.h>

void main(){
    float raio, perimetro;
    double pi = 3.1415927, area;

    printf("Qual o valor do raio: ");
    scanf("%f",&raio);
    area = pi * (raio*raio);
    perimetro = 2 * pi * raio;

    printf("A área é %f e o perimetro é %f\n", area, perimetro);


}