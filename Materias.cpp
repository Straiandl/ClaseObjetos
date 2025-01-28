#include <iostream>
#include <string>

class materia {
private:
    int clave;
    std::string nombre;
    std::string profesor;
    std::string libroTexto;

public:
    materia() : clave(0), nombre(" "), profesor(" "), libroTexto(" ") {}

    void setClave(int clav) { clave = clav; }
    void setNombre(const std::string& nom) { nombre = nom; }
    void setProfesor(const std::string& profe) { profesor = profe; }
    void setLibro(const std::string& libro) { libroTexto = libro; }

    void imprimir() {
        std::cout << "\nClave de la materia: " << clave
                  << "\nNombre: " << nombre
                  << "\nProfesor de la materia: " << profesor
                  << "\nLibro de texto: " << libroTexto << "\n";
    }

    void cambiarDatos() {
        std::cout << "\nIntroduce la nueva clave de la materia: ";
        std::cin >> clave;
        std::cin.ignore();

        std::cout << "Escribe el nombre de la materia: ";
        std::getline(std::cin, nombre);

        std::cout << "Introduce el nombre del profesor: ";
        std::getline(std::cin, profesor);

        std::cout << "Escribe el libro deseado: ";
        std::getline(std::cin, libroTexto);
    }
};

int main() {
    materia programacion, BaseDatos;
    int op;

    do {
        std::cout << "\n Bienvenido \n\n Elige una opcion. \n1. Mostrar los datos de Programacion. \n2. Mostrar los datos de Base de Datos. \n3. Cambiar los datos de Programacion. \n4. Cambiar los datos de Base de datos. \n9. Salir.\n";
        std::cin >> op;

        switch (op) {
            case 1:
                std::cout << "\nDatos de Programacion:";
                programacion.imprimir();
                break;
            case 2:
                std::cout << "\nDatos de Base de Datos:";
                BaseDatos.imprimir();
                break;
            case 3:
                std::cout << "\nCambiando los datos de Programacion:\n";
                programacion.cambiarDatos();
                break;
            case 4:
                std::cout << "\nCambiando los datos de Base de Datos:\n";
                BaseDatos.cambiarDatos();
                break;
            case 9:
                std::cout << "\nGracias.\n";
                break;
            default:
                std::cout << "\nOpcion invalida. Intenta de nuevo.\n";
                break;
        }
    } while (op != 9);

    return 0;
}
