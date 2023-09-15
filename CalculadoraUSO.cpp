#include <iostream>
using namespace std;

int main()
{
    // Declaracion de Variables
    int calcular, porcentajeLab, porcentajePar;
    float notaL1, notaL2, notaP1, notaP2, PLab, PPar, NFLabs, NFPars, notaL3, ExamenFinal;
    double Npresentacion, NFexamenfinal, NotaFinal;

    // Ingreso de Datos
    cout << "Ingrese el porcentaje (sin el %) asignado de los laboratorios: ";
    cin >> porcentajeLab;
    cout << "Ingrese el porcentaje (sin el %) asignado de los Parciales: ";
    cin >> porcentajePar;
    cout << "Ingrese la nota de los laboratorios:" << endl;
    cin >> notaL1;
    cin >> notaL2;
    cin >> notaL3;
    cout << "Ingrese la nota de los Parciales:" << endl;
    cin >> notaP1;
    cin >> notaP2;

    // Caluculo Porcentajes
    PLab = (porcentajeLab / 100.0);
    PPar = (porcentajePar / 100.0);

    // Caluculo de Nota de Presentacion
    NFLabs = ((notaL1 + notaL2 + notaL3) * PLab);
    NFPars = ((notaP1 + notaP2) * PPar);
    Npresentacion = NFLabs + NFPars;

    // Decision del Usuario
    cout << "Elija si Calcular la nota de Presentacion (1) o La nota Final (2): ";
    cin >> calcular;

    // Switch
    switch (calcular)
    {
    case (1):

        // Salida de Datos
        cout << " la nota de presentacion es" << Npresentacion << endl;

        break;

    case (2):

        // Ingreso de Datos Examen Final
        cout << "Ingrese la nota del Examen Final" << endl;
        cin >> ExamenFinal;

        //Calculando la Nota final
        NFexamenfinal = (ExamenFinal * 0.4);
        NotaFinal = (Npresentacion + NFexamenfinal);
        cout << "La nota Final es: " << NotaFinal << endl;

    
        break;
    default:
        cout << "Ingrese un numero valido" << endl;
        break;
    }
    return 0;
}