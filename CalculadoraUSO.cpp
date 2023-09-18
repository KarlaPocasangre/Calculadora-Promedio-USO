#include <iostream>
using namespace std;

int main()
{
    // Declaracion de Variables
    int calcular, porcentajeLab, porcentajePar;
    float notaL1, notaL2, notaP1, notaP2, PLab, PPar, NFLabs, NFPars, notaL3, ExamenFinal, recuperacion,  notaNecesaria;
    double Npresentacion, NotaFinal, NotaFinal2;
    char SiNo, continuar;

    // Ingreso de Notas
    cout << "Ingrese la nota de los laboratorios:" << endl;
    cout << "Laboratorio 1: ";
    cin >> notaL1;
    cout << "Laboratorio 2: ";
    cin >> notaL2;
    cout << "Laboratorio 3: ";
    cin >> notaL3;
    cout << "Ingrese la nota de los Parciales:" << endl;
    cout << "Parcial 1: ";
    cin >> notaP1;
    cout << "Parcial 2: ";
    cin >> notaP2;

     // Ingreso de Datos Porcentaje
    cout << "Ingrese el porcentaje (sin el %) asignado de los laboratorios: ";
    cin >> porcentajeLab;
    cout << "Ingrese el porcentaje (sin el %) asignado de los Parciales: ";
    cin >> porcentajePar;

    // Calculo Porcentajes
    PLab = (porcentajeLab / 100.0);
    PPar = (porcentajePar / 100.0);

    // Calculo de Nota de Presentacion
    NFLabs = ((notaL1 + notaL2 + notaL3) * PLab);
    NFPars = ((notaP1 + notaP2) * PPar);
    Npresentacion = NFLabs + NFPars;

    // Decision del Usuario
    do
    {
        cout << "Menu: "<<endl;
      cout << "1. Calcular Nota de Presentacion" <<endl;
      cout << "2. Calcular Nota Final" <<endl;
      cout << "3. Calcular CUM de ciclo" <<endl;
      cout << "4. Salir" <<endl;
       cout << "Elija una opcion: "; cin >> calcular;

    switch (calcular)
    {
    case (1): // Nota de Presentacion

        // Salida de Datos
        cout << "La nota de presentacion es: " << Npresentacion << endl;

         notaNecesaria = (6.0 - Npresentacion) / 0.4;
        if (Npresentacion>=2)
        {
            cout<< "Su nota de presentacion le permite realizar el examen de recuperacion"<<endl;
            cout<< "Usted necesita obtener "<<notaNecesaria<<" en el Examen Final Para poder pasar con 6"<<endl;
        }else{
            cout<< "Su nota de presentacion NO le permite realizar el examen de recuperacion"<<endl;
        }

        break;

    case (2): // Nota Final

        // Ingreso de Datos Examen Final
        cout << "Ingrese la nota del Examen Final: ";
        cin >> ExamenFinal;

        // Calculando la Nota final
        NotaFinal = (Npresentacion + (ExamenFinal * 0.4));
        cout << "La nota Final es: " << NotaFinal << endl;

        // Condicionales SI el estudiante Aprueba o No
        if (NotaFinal >= 6)
        {
            cout << "Usted a aprobado la Materia, Felicidades!" << endl;
        }
        else if (NotaFinal <= 6 && Npresentacion >= 2)
        {
            cout << "Usted a reprobado, pero tiene derecho a un Examen de Recuperacion" << endl;

            // Eleccion del Usuario, ingresar nota de reposicion
            cout << "Desea Ingresar la Nota del Examen de recuperacion para recalcular su nota final? (y/n): ";
            cin >> SiNo;

            // Calcular Nota Final con el Examen de recuperacion
            if (SiNo == 'y' || SiNo == 'Y')
            {
                cout << "Ingrese la nota del Examen de recuperacion: ";
                cin >> recuperacion;
                NotaFinal2 = ((recuperacion * 0.4) + Npresentacion);
                cout << "La nota Final es: " << NotaFinal2 << endl;
                if (NotaFinal2 >= 6)
                {
                    cout << "Usted a aprobado la Materia, Felicidades!" << endl;
                }
                else
                {
                    cout << "Usted a reprobado la Materia, Suerte para la proxima" << endl;
                }
            }
            else
            {
                cout << "Gracias por usar mi Calculadora, suerte!" << endl;
            }
        }
        else
        {
            cout << "Usted a reprobado la Materia y su nota de presentacion es menor que 2 por lo que no tiene derecho a un examen de recuperacion" << endl;
        }
        break;
        case (3):
        cout << "Por el momento esta opcion no esta disponible, lo siento" << endl;
        break;
         case (4):
        cout << "Gracias por usar mi Calculadora hasta luego!" << endl;
        return 0;
        break;
    default:
        cout << "OJO! Ingrese un numero valido" << endl;
        break;
    } 
    cout << "Desea ver el menu nuevamente? (s/n): "; cin >> continuar;
    } while (continuar == 's' || continuar == 'S');  
    return 0;
}