//Alumno: Vargas Lucas
//Comision : 2
//Numero de Integrantes del Grupo: 1
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
#include"lucas.h"
int main()
{
    int f=3,c=3;
    int codigo_de_obra[20];
    int cliente[20];
    int m2_a_construir[20];
    int cant_operarios[20];
    int cant_tecnicos[20];
    int cant_profesionales[20];
    int tiempo_estimado[20];
    int fecha_de_inicio[20][3];
    int fecha_de_fin[20][3];
    int vband_fecha_inicio[20];
    int vband_fecha_fin[20];
    int vband_obra_cargada[20];
    int i;
    int cont_obras=0;
    int password;

    float costo_de_obra[20];
    float costo_de_materiales[3][3];
    float salarios[3];
    float sumar_costos[1];
    float promedio_de_obras=0;

    char direccion[20][30];
    char tipo_de_material[20];

    int opcion1;
    char opcion2;

    poner_cero_salarios(f,salarios);

    poner_cero_materiales(f,c,costo_de_materiales);

    poner_ceros(vband_obra_cargada,costo_de_obra);

    valores_salarios(salarios);

    valores_materiales(costo_de_materiales);

    sumar_costos[0]=0;
cout<<"Usuario: Luk3"<<endl<<endl;
cout<<"Contrase"<<(char) 164<<"a:  ";
cin>>password;
if(password==123456)
{
    system ("cls");
    while(1)
    {
        system("color 69");
    cout<<"Usuario: Luk3""\t""\t""""Bienvenido a PC-TECH OBRAS S.A"<<endl<<endl;
    Sleep (1000);
    cout<<"\t""\t""A continuacion se le daran opciones a elegir"<<endl<<endl<<endl;
    Sleep (500);
    cout<< " 1) Cargar tabla de valores de mano de obra" <<endl;
    Sleep (300);
    cout<< " 2) Listar valores de mano de obra" <<endl;
    Sleep (300);

    cout<< " 3) Cargar tabla de costo de materiales" <<endl;
    Sleep (300);
    cout<< " 4) Listar tabla de costo de materiales" <<endl;
    Sleep(300);

    cout<< " 5) Cargar Obras" <<endl;
    Sleep (300);
    cout<< " 6) Listar obras" <<endl;
    Sleep (300);

    cout<< " 7) Iniciar obra" <<endl;
    Sleep (300);
    cout<< " 8) Finalizar obra" <<endl;
    Sleep (300);

    cout<< " 9) Presupuesto" <<endl;
    Sleep (300);

    cout<< " 10) Estadisticas"<<endl;
    Sleep (300);

    cout<< " 11) Cerrar Programa"<<endl;
    Sleep (300);

    cout<<" 12) Listar el Promedio de Costos"<<endl<<endl;

    cout<<" Elija una de las Opciones:   ";


    cin>>opcion1;
    cout<<endl;

    system("cls");

    switch (opcion1)
    {
        case 1: //Cargar tabla de valores de mano de obra
        system ("color 12");

        cargar_mano_de_obra(salarios);

        break;


        case 2: //Listar valores de mano de obra
        system ("color 12");
        listar_salarios(salarios);

        break;

        case 3: //Cargar tabla de costo de materiales
        system("color 24");

        cargar_materiales(costo_de_materiales);

        break;

        case 4: //Listar tabla de costo de materiales
        system("color 24");
        listar_costo_materiales(costo_de_materiales);

        break;

        case 5: //Cargar Obras


        system("color 42");
        cout<<"Desea Cargar una Obra? (S/N):   ";
        cin>>opcion2;
        cout<<endl;
        system("cls");
        while((opcion2!='s') && (opcion2!='S') && (opcion2!='n') && (opcion2!='N'))
        {
            cout<<"Opcion Incorrecta!!"<<endl;
            cout<<"Presione (S) Para Cargar una Obra"<<endl;
            cout<<"Para (N) Para no Cargar una Obra"<<endl<<endl;
            cout<<"Elija una Opcion:  ";
            cin>>opcion2;
            system("cls");
        }
        while(opcion2=='s' || opcion2=='S')
        {
            if(cont_obras!=20)
            {
                cargar_obras(codigo_de_obra,cont_obras,direccion,cliente,m2_a_construir,tipo_de_material,
                cant_operarios,cant_tecnicos,cant_profesionales,tiempo_estimado,vband_fecha_inicio,vband_fecha_fin,vband_obra_cargada);

                cout<<"Desea Guardar la Obra? (S/N):   ";
                cin>>opcion2;
                cout<<endl;
                system("cls");
                while((opcion2!='s') && (opcion2!='S') && (opcion2!='n') && (opcion2!='N'))
                {
                    cout<<"Opcion Incorrecta!!"<<endl;
                    cout<<"Presione (S) Para Guardar la Obra"<<endl;
                    cout<<"Para (N) Para no Guardar la Obra"<<endl<<endl;
                    cout<<"Elija una Opcion:  ";
                    cin>>opcion2;
                    system("cls");
                }

                if(opcion2=='s' || opcion2=='S')
                {
                    cont_obras++;
                }

            }


            else
            {
                cout<<"No se Pueden Cargar Mas de 20 Obras";
            }

            cout<<endl;
            cout<<"Desea Cargar Otra Obra (S/N):  ";
            cin>>opcion2;
            cout<<endl;
            system("cls");
            while(opcion2!='s' && opcion2!='S' && opcion2!='n' && opcion2!='N')
            {
                cout<<"Opcion Incorrecta!!"<<endl;
                cout<<"Presione (S) Para Cargar Otra Obra"<<endl;
                cout<<"Para (N) Para no Cargar Otra Obra"<<endl<<endl;
                cout<<"Elija una Opcion:  ";
                cin>>opcion2;
                cout<<endl;
                system("cls");
            }
        }

        break;

        case 6: //Listar obras
        system("color 42");
        if(cont_obras!=0)
        {

                listar_obras(codigo_de_obra,direccion,cliente,m2_a_construir,tipo_de_material,cant_operarios,cant_tecnicos,
                cant_profesionales,tiempo_estimado,vband_fecha_inicio,fecha_de_inicio,vband_fecha_fin,fecha_de_fin,cont_obras);

        }
        else
        {
            cout<<"No Hay Obras Cargadas. Por Favor Cargue Una/s Obra/s";
        }

        break;

        case 7: //Iniciar obra
        system("color 20");

        iniciar_obra(vband_fecha_inicio,fecha_de_inicio);


        break;

        case 8: //Finalizar obra
        system("color 20");

        finalizar_obra(vband_fecha_inicio,vband_fecha_fin,fecha_de_fin);


        break;

        case 9: //Calcular presupuesto

        system ("color 76");

        cout<< " 1) Calcular costo de una obra" <<endl;
        cout<< " 2) Listar el costo del valor de una obra" <<endl;
        cout<< " 3) Recalcular costos de TODAS LAS OBRAS EN EJECUCION" <<endl;
        cout<< " 4) Listar el costo de TODAS LAS OBRAS EN EJECUCION" <<endl<<endl;

        cout<<" Elija una de las Opciones:   ";

        cin>>opcion1;
        cout<<endl;
        system("cls");

        switch (opcion1)
        {

            case 1: //Calcular costo de una obra

            calcular_una_obra(vband_fecha_fin,vband_obra_cargada,tipo_de_material,m2_a_construir,costo_de_obra,tiempo_estimado
                              ,cant_operarios,cant_tecnicos,cant_profesionales,salarios,costo_de_materiales);

            break;

            case 2: //Listar el costo del valor de una obra

            listar_costo_de_una_obra(costo_de_obra);

            break;

            case 3: //Recalcular costos de TODAS LAS OBRAS EN EJECUCION

            calcular_obras_en_ejecucion(vband_fecha_inicio,vband_fecha_fin,vband_obra_cargada,tipo_de_material,m2_a_construir,costo_de_obra,tiempo_estimado
                              ,cant_operarios,cant_tecnicos,cant_profesionales,salarios,costo_de_materiales,cont_obras);

            break;

            case 4: //Listar el costo de TODAS LAS OBRAS EN EJECUCION

            listar_costos_de_obras_en_ejecucion(vband_fecha_inicio,vband_fecha_fin,costo_de_obra,cont_obras,codigo_de_obra);

            break;

            default:
            cout<<endl<<"Opcion Incorrecta!";

        }

        break;

        case 10: //Estadisticas
        system ("color 16");

        ordenar_menor_a_mayor_costos(cont_obras,costo_de_obra,codigo_de_obra,direccion);

        mostrar_estadisticas(codigo_de_obra,direccion,costo_de_obra,cont_obras);

        ordenar_menor_a_mayor_codigo(cont_obras,costo_de_obra,codigo_de_obra,direccion);


        break;

        case 11:
        cout<<"Esta Seguro de querer cerrar el programa (S/N)??";
        cin>>opcion2;
        system("cls");
        while((opcion2!='s') && (opcion2!='n')
             && (opcion2!='S') && (opcion2!='N'))
        {
            cout<<"Opcion Incorrecta!!"<<endl;
            cout<<"Ingrese (S) si quiere cerrar el programa"<<endl;
            cout<<"(N) Si quiere seguir usandolo";
            cin>>opcion2;
            system("cls");
        }
        if((opcion2=='s') || (opcion2=='S'))
        {
            cout<<endl<<endl<<endl<<endl;
            cout<<"\t""\t""\t""QUE TENGA UN BUEN DIA!!!!";
            system ("pause>nul");
            return 0;
        }
        if((opcion2=='n') || (opcion2=='N'))
        {
        }

        break;

        case 12:
        sumar_costos_de_obras(costo_de_obra,cont_obras,sumar_costos);

        listar_promedio(sumar_costos,cont_obras,promedio_de_obras);

        sumar_costos[0]=0;

        break;

        default: cout<<endl<<"Opcion Incorrecta!";

        }
        system ("pause>null");
        system ("cls");

    }
}
else
{
    cout<<endl;
    cout<<"CONTRASE"<<(char) 165<<"A INCORREECTA!!"<<endl<<endl;
    system ("pause>nul");
    system ("cls");
    for(i=5;i>0;i--)
    {

        cout<<"El programa se cerrara en.... "<<i;
        Sleep (1000);
        system ("cls");

    }
    return 0;
}
}
