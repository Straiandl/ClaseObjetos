//De la Paz Mendoza Ian ALexandro. 25A.
//Clases y objetos.

#include <iostream>
#include <string>

class empleado {
private: //Atributos deben de ir aqui
    int ClaveEmpleado;
    std::string nombre;
    std::string domicilio;
    float sueldo;
    std::string ReportaA;
public:
    empleado() { ClaveEmpleado = 0; nombre = " "; domicilio = " "; sueldo = 0; ReportaA = " "; } //constructor

    void setClaveE(int clave) { ClaveEmpleado = clave; }
    void setnombre(std::string nom) { nombre = nom; }
    void setdomicilio(std::string dom) { domicilio = dom; }
    void setsueldo(float s) { sueldo = s; }
    void setReporta(std::string reporta) { ReportaA = reporta; }
    std::string getnombre() { return nombre; }

    void imprime() {
        std::cout << " Tu clave de empleado: " << ClaveEmpleado << std::endl;
        std::cout << " Tu nombre: " << nombre << std::endl;
        std::cout << " El domicilio: " << domicilio << std::endl;
        std::cout << " Sueldo: " << sueldo << std::endl;
        std::cout << " Reporte: " << ReportaA << std::endl;
    }

    void cambiaDomic() {

    }

};

int main()
{
    int claveE;
    std::string nomb;
    std::string domicil;
    float sueld;
    std::string Reporta;
    empleado JefePlanta;
    empleado JefePersonal;
    int op=1;
    while (op != 5) {
        std::cout << "\n Bienvenido \n elige una opcion: \n 1: Mostrar los datos de empleado (Jefe de Planta). \n 2: Mostrar los datos de empleado (Jefe de Personal). \n 3: Cambiar los datos de Jefe de planta. \n 4: Cambiar los datos de Jefe de personal. \nPresiona 5 para salir. \n \n";
        std::cin >> op;
        switch (op){
        case 1:
            JefePlanta.imprime();
            break;
        case 2:
            JefePersonal.imprime();
            break;
        case 3:
            std::cout << "Jefe de Planta: \n";
            std::cout << "Introduce la nueva clave de empleado:\n";
            std::cin >> claveE;
            JefePlanta.setClaveE(claveE);

            std::cout << "Introduce el nombre. \n";
            std::cin >> nomb;
            JefePlanta.setnombre(nomb);

            std::cout << "Introduce el domicilio: \n";
            std::cin >> domicil;
            JefePlanta.setdomicilio(domicil);

            std::cout << "Suledo del empleado. \n";
            std::cin >> sueld;
            JefePlanta.setsueldo(sueld);

            std::cout << "Reporte: \n";
            std::cin >> Reporta;
            JefePlanta.setReporta(Reporta);

            break;
        case 4:
            std::cout << "Jefe de Personal: \n";
            std::cout << "Introduce la nueva clave de empleado:\n";
            std::cin >> claveE;
            JefePersonal.setClaveE(claveE);

            std::cout << "Introduce el nombre. \n";
            std::cin >> nomb;
            JefePersonal.setnombre(nomb);

            std::cout << "Introduce el domicilio: \n";
            std::cin >> domicil;
            JefePersonal.setdomicilio(domicil);

            std::cout << "Suledo del empleado. \n";
            std::cin >> sueld;
            JefePersonal.setsueldo(sueld);

            std::cout << "Reporte: \n";
            std::cin >> Reporta;
            JefePersonal.setReporta(Reporta);
            break;
        case 5:
            std::cout << "\n Gracias. \n";
            break;
        default:
            std::cout << "Introduce una opcion correcta. \n";
            break;
        }
    }
}