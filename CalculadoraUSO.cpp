#include <iostream>
using namespace std;

int main()
{
    // Declaracion de Variables
    int calcular, porcentajeLab, porcentajePar;
    float notaL1, notaL2, notaP1, notaP2, Npresentacion, PLab, PPar, NFLabs, NFPars, notaL3;
    

    // Decision del Usuario
    cout << "Elija si Calcular la nota de Presentacion (1) o La nota Final y Nota de Presentacion (2): ";
    cin >> calcular;

    // Switch
    switch (calcular)
    {
    case (1):

        // Ingreso de Datos
        cout << "Ingrese el porcentaje asignado de los laboratorios: (sin el %)";
        cin >> porcentajeLab;
        cout << "Ingrese el porcentaje asignado de los Parciales: (sin el %)";
        cin >> porcentajePar;
        cout << "Ingrese la nota de los laboratorios:" << endl;
        cin >> notaL1;
        cin >> notaL2;
        cin >> notaL3;
        cout << "Ingrese la nota de los Parciales:" << endl;
        cin >> notaP1;
        cin >> notaP2;

        //Caluculo Porcentajes
        PLab=(porcentajeLab/100.0);
        PPar=(porcentajePar/100.0);

        NFLabs=((notaL1+notaL2+notaL3)*PLab);
        NFPars=((notaP1+notaP2)*PPar);
        Npresentacion= NFLabs+NFPars;
        //Salida de Datos
        //cout << "El porcentaje de los Labs es: "<< PLab << endl;
        cout << "nota presentacion "<< Npresentacion << endl;

        break;
    case (2):

        break;
    default:
        cout << "Ingrese un numero valido" << endl;
        break;
    }
    return 0;
}