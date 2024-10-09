#include <iostream>

struct casa {
    int codigo_postal = 45020;
    char direccion[20] = "A las Cimas";
    int num_casa = 4870;
    int num_pisos = 2;
    float tamano_terreno = 20.5;
    int num_habitaciones = 6;
};

struct personaje_souls {
    char sexo[12] = 'Masculino';
    char raza[15] = 'Samurai';
    char tipo_de_cuerpo[16] = 'Fornido';
    char recuerdo[25] = 'Tarro agrietado';
    int edad = 45;
    int vigor = 29;
    int mente = 16;
    int aguante = 22;
    int fuerza = 24;
    int destreza = 20;
    int inteligencia = 14;
    int fe = 10;
    int arcano = 29;
};
struct persona {
    char nombre[20];
    int edad;
    char sexo[20];
    float altura;
};
struct estudiante {
    persona datos;
    float promedio;
    char semestre[20];
    char carrera[30];
};

estudiante rodrigo = {{'Rodrigo', 21, 'Masculino', 1.67}, 8.8, 'Segundo', 'Programacion de Videojuegos'};
estudiante raziel = {{'Raziel', 20, 'Masculino', 1.66}, 8.6, 'Segundo', 'Programacion en Videojuegos'};

int main()
{
    personaje_souls atributos;
    personaje_souls* point;
    point = &atributos;
    point->sexo = 'Femenino';
    point->raza = 'Prisionero';
    point->tipo_de_cuerpo = 'Esbelto';
    point->recuerdo = 'Semilla dorada';
    point->edad = 20;
    point->vigor = 30;
    point->mente = 23;
    point->aguante = 15;
    point->fuerza = 30;
    point->destreza = 18;
    point->inteligencia = 22;
    point->fe = 26;
    point->arcano = 25;

    return 0;
}
