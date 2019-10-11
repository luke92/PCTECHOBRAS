#ifndef LUCAS_H_INCLUDED
#define LUCAS_H_INCLUDED

#include <string>


//Poner en cero

void poner_cero_salarios(int f, float salarios[3])
{
    int i;
    for(i=0;i<3;i++)
    {
        salarios[i]=0;
    }
}
/////////////////////////////////////////////////////////////////////////
void poner_cero_materiales(int f,int c,float costo_de_materiales[3][3])
{
int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        costo_de_materiales[i][j]=0;
        }
    }
}

void poner_ceros(int vband_obra_cargada[20],float costo_de_obra[20])
{
    int i;
    for(i=0;i<20;i++)
    {
        vband_obra_cargada[i]=0;
        costo_de_obra[i]=0;
    }
}

////////////////////////////////////////////////////////////////////////
// Valores Predeterminados
void valores_salarios(float salarios[3])
{
    salarios[0]=100;
    salarios[1]=130;
    salarios[2]=200;
}

void valores_materiales(float costo_de_materiales[3][3])
{
    costo_de_materiales[0][0]=600;
    costo_de_materiales[0][1]=700;
    costo_de_materiales[0][2]=800;
    costo_de_materiales[1][0]=580;
    costo_de_materiales[1][1]=680;
    costo_de_materiales[1][2]=800;
    costo_de_materiales[2][0]=570;
    costo_de_materiales[2][1]=660;
    costo_de_materiales[2][2]=800;
}


//Cargar tabla mano de obra Opcion 1

     void cargar_mano_de_obra(float salarios[3])
    {
            int opc;
            cout<<"1) Salario Diario de un Operario"<<endl;
            cout<<"2) Salario Diario de un Tecnico"<<endl;
            cout<<"3) Salario Diario de un Profesional"<<endl<<endl;

            cout<<" Elija una de las Opciones:   ";

            cin>>opc;
            cout<<endl;
            system("cls");

        switch (opc)

           {

            case 1:
            cout<<"Ingrese el Salario Diario de un Operario:   ";
            cin>>salarios[0];

            break;

            case 2:
            cout<<"Ingrese el Salario Diario de un Tecnico:   ";
            cin>>salarios[1];

            break;

            case 3:
            cout<<"Ingrese el Salario Diario de un Profesional:   ";
            cin>>salarios[2];

            break;

            default:
            cout<<endl<<"Opcion Incorrecta!";

           }
    }

//Listar Mano de obra : Opcion 2

       void listar_salarios(float salarios[3])
       {

        cout<<"El Salario Diario de un Operario es:  "<<salarios[0]<<endl;
        cout<<"El Salario Diario de un Tecnico es:  "<<salarios[1]<<endl;
        cout<<"El Salario Diario de un Profesional es:  "<<salarios[2]<<endl;

       }


// Cargar Costo de Materiales : Opcion 3

void cargar_materiales(float costo_de_materiales [3][3])
{
    int opc1;
    char opc2;
        cout<<"E) Tipo Estandar por m2"<<endl;
        cout<<"R) Tipo Regular por m2"<<endl;
        cout<<"P) Tipo Premium por m2"<<endl<<endl;

        cout<<" Elija una de las Opciones:   ";

        cin>>opc2;
        cout<<endl;
        system("cls");


        switch (opc2)
        {
            case 'e':
            case 'E':

            cout<<"1) Hasta 100 m2"<<endl;
            cout<<"2) 101 a 200 m2"<<endl;
            cout<<"3) Mas de 200 m2"<<endl<<endl;

            cout<<" Elija una de las Opciones:   ";

            cin>>opc1;
            system("cls");

            switch (opc1)
            {
                case 1:
                cout<<"Estandar por m2: Hasta 100 m2   ";
                cin>>costo_de_materiales[0][0];
                break;

                case 2:
                cout<<"Estandar por m2: 101 a 200 m2:   ";
                cin>>costo_de_materiales[1][0];
                break;

                case 3:
                cout<<"Estandar por m2: Mas de 200 m2:  ";
                cin>>costo_de_materiales[2][0];
                break;
                default:
                cout<<endl<<"Opcion Incorrecta!";
            }

            break;

            case 'r':
            case 'R':

            cout<<"1) Hasta 100 m2"<<endl;
            cout<<"2) 101 a 200 m2"<<endl;
            cout<<"3) Mas de 200 m2"<<endl<<endl;

            cout<<" Elija una de las Opciones:   ";

            cin>>opc1;
            system("cls");

            switch (opc1)
            {
                case 1:
                cout<<"Regular por m2: Hasta 100 m2:  ";
                cin>>costo_de_materiales[0][1];
                break;

                case 2:
                cout<<"Regular por m2: 101 a 200 m2:  ";
                cin>>costo_de_materiales[1][1];
                break;

                case 3:
                cout<<"Regular por m2:  Hasta 200 m2:  ";
                cin>>costo_de_materiales[2][1];
                break;
                default:
                cout<<endl<<"Opcion Incorrecta!";
            }

            break;

            case 'p':
            case 'P':

            cout<<"1) Hasta 100 m2"<<endl;
            cout<<"2) 101 a 200 m2"<<endl;
            cout<<"3) Mas de 200 m2"<<endl<<endl;

            cout<<" Elija una de las Opciones:   ";

            cin>>opc1;
            system("cls");

            switch (opc1)
            {
                case 1:
                cout<<"Premium por m2: Hasta 100 m2:  ";
                cin>>costo_de_materiales[0][2];
                break;

                case 2:
                cout<<"Premium por m2: 101 a 200 m2:  ";
                cin>>costo_de_materiales[1][2];
                break;

                case 3:
                cout<<"Premium por m2: Mas de 200 m2:  ";
                cin>>costo_de_materiales[2][2];
                break;
                default:
                cout<<endl<<"Opcion Incorrecta!";
            }

            break;

        }
}



//Listar Costo de Materiales : Opcion 4



void listar_costo_materiales(float costo_de_materiales [3][3])
{
 int i,j;

 for(i=0;i<3;i++)
        {
            if(i==0)
            {
                cout<<"Estandar por m2:"<<endl;
            }
            if(i==1)
            {
                cout<<"Regular por m2:"<<endl;
            }
            if(i==2)
            {
                cout<<"Premium por m2:"<<endl;
            }
            for(j=0;j<3;j++)
            {
                if(j==0)
                {
                    cout<<"Hasta 100 m2:  ";
                }
                if(j==1)
                {
                    cout<<"101 a 200 m2:  ";
                }
                if(j==2)
                {
                    cout<<"Mas de 200 m2: ";
                }
                cout<<costo_de_materiales[j][i];
                cout<<endl;
            }
            cout<<endl;
        }
}

//cargar obras: Opcion 5

 void cargar_obras(int codigo_de_obra [20],int cont_obras,char direccion [20][30],int cliente[20],
                   int m2_a_construir[20],char tipo_de_material[20],
                   int cant_operarios[20],int cant_tecnicos[20],int cant_profesionales[20],int tiempo_estimado[20]
                   ,int vband_fecha_inicio[20],int vband_fecha_fin[20],int vband_obra_cargada[20])
    {

                cout<<"Codigo de Obra:  ";
                codigo_de_obra [cont_obras]=cont_obras+1;
                cout<<codigo_de_obra [cont_obras]<<endl;

                cout<<"Direccion:  ";
                cin.sync(); //Limpia el Buffer para Ingresar la Frase
                cin.getline (direccion[cont_obras],30);

                cout<<"Cliente (1000 a 5000):  ";
                cin>>cliente [cont_obras];
                while(cliente [cont_obras]<1000 || cliente [cont_obras] >5000)
                {
                    cout<<"El Numero de Cliente no debe ser Menor a 1000 y Mayor a 5000"<<endl;
                    cout<<"Ingrese un Numero de Cliente de Mas de 1000 y Menos de 5000:  ";
                    cin>>cliente [cont_obras];
                }

                cout<<"Cantidad de M2 a construir   ";
                cin>>m2_a_construir [cont_obras];
                while (m2_a_construir [cont_obras]<=0)
                {
                    cout<<"La Cantidad de Metros Cuadrados a Construir no puede ser 0 o menor"<<endl;
                    cout<<"Ingrese la Cantidad de Metros a Construir:  ";
                    cin>>m2_a_construir [cont_obras];
                }

                cout<<"Tipo de Construccion:"<<endl;
                cout<<"(E)-> Estandar"<<endl;
                cout<<"(R)-> Regular"<<endl;
                cout<<"(P)-> Premium"<<endl;
                cout<<"Ingrese el Tipo de Construccion:  ";
                cin>>tipo_de_material [cont_obras];
                while(tipo_de_material [cont_obras]!='e' && tipo_de_material [cont_obras]!='E'
                      && tipo_de_material [cont_obras]!='p' && tipo_de_material [cont_obras]!='P'
                      && tipo_de_material [cont_obras]!='r' && tipo_de_material [cont_obras]!='R')
                {
                    cout<<"Opcion Incorrecta!!"<<endl;
                    cout<<"Tipo de Construccion"<<endl;
                    cout<<"(E)-> Estandar"<<endl;
                    cout<<"(R)-> Regular"<<endl;
                    cout<<"(P)-> Premium"<<endl;
                    cout<<"Ingrese el Tipo de Construccion:  ";
                    cin>>tipo_de_material [cont_obras];
                }

                cout<<"Cantidad de Operarios a Contratar   ";
                cin>>cant_operarios [cont_obras];
                while(cant_operarios [cont_obras]<=0)
                {
                    cout<<"La Cantidad de Operarios no Puede ser 0 o Menor"<<endl;
                    cout<<"Ingrese la Cantidad de Operarios a Contratar:  "<<endl;
                    cin>>cant_operarios [cont_obras];
                }

                cout<<"Cantidad de Tecnicos a Contratar   ";
                cin>>cant_tecnicos [cont_obras];
                while(cant_tecnicos [cont_obras]<=0)
                {
                    cout<<"La Cantidad de Tecnicos no Puede ser 0 o Menor"<<endl;
                    cout<<"Ingrese la Cantidad de Tecnicos a Contratar:  "<<endl;
                    cin>>cant_tecnicos [cont_obras];
                }

                cout<<"Cantidad de Profesionales a Contratar   ";
                cin>>cant_profesionales [cont_obras];
                while(cant_profesionales [cont_obras]<0)
                {
                    cout<<"La Cantidad de Profesionales no Puede ser 0 o Menor"<<endl;
                    cout<<"Ingrese la Cantidad de Profesionales a Contratar:  "<<endl;
                    cin>>cant_profesionales [cont_obras];
                }

                cout<<"Tiempo estimado de Dias   ";
                cin>>tiempo_estimado [cont_obras];
                while(tiempo_estimado [cont_obras]<=0)
                {
                    cout<<"El Tiempo en Dias no puede ser 0 o Menor"<<endl;
                    cout<<"Ingrese el Tiempo Estimado de Dias que puede tomar la Obra:  ";
                    cin>>tiempo_estimado [cont_obras];
                }

                vband_fecha_inicio [cont_obras]=0; //Indicar si esta iniciada la obra
                vband_fecha_fin [cont_obras]=0; //Indicar si esta finalizada la obra
                vband_obra_cargada [cont_obras]=1; //Indicar si ese numero de obra fue cargado



    }


/////////////////////////////////////////////////////////////////////////////////////////////

//listar : Opcion 6
void listar_obras(int codigo_de_obra[20],char direccion[20][30],int cliente[20],int m2_a_construir[20],char tipo_de_material[20],
                  int cant_operarios[20],int cant_tecnicos[20],int cant_profesionales[20],int tiempo_estimado[20],
                  int vband_fecha_inicio[20],int fecha_de_inicio[20][3],int vband_fecha_fin[20],int fecha_de_fin[20][3],int cont_obras)

{
    int j,x;
    for(x=0;x<cont_obras;x++)
    {


                cout<<"Codigo de Obra:  "<<codigo_de_obra [x]<<endl;
                cout<<"Direccion:  "<<direccion[x]<<endl;
                cout<<"Cliente:  "<<cliente [x]<<endl;
                cout<<"Cantidad de M2 a construir:  ";
                cout<<m2_a_construir [x]<<endl;
                cout<<"Tipo de Construccion:   ";
                if(tipo_de_material[x]=='e' || tipo_de_material[x]=='E')
                {
                    cout<<"Estandar"<<endl;
                }
                if(tipo_de_material[x]=='r' || tipo_de_material[x]=='R')
                {
                    cout<<"Regular"<<endl;
                }
                if(tipo_de_material[x]=='p' || tipo_de_material[x]=='P')
                {
                    cout<<"Premium"<<endl;
                }
                cout<<"Cantidad de Operarios a Contratar:   ";
                cout<<cant_operarios [x]<<endl;
                cout<<"Cantidad de Tecnicos a Contratar:   ";
                cout<<cant_tecnicos [x]<<endl;
                cout<<"Cantidad de Profesionales a Contratar:   ";
                cout<<cant_profesionales [x]<<endl;
                cout<<"Tiempo estimado de Dias:   ";
                cout<<tiempo_estimado [x]<<endl;
                if(vband_fecha_inicio [x]==0)
                {
                    cout<<"La Obra no fue iniciada"<<endl;
                }
                else
                {
                    cout<<"Fecha de Inicio:";
                    for(j=0;j<3;j++)
                    {
                        if(j==0)
                        {
                            cout<<"Dia:  ";
                        }
                        if(j==1)
                        {
                            cout<<"Mes:  ";
                        }
                        if(j==2)
                        {
                            cout<<"Anio:  ";
                        }
                        cout<<fecha_de_inicio [x] [j]<<endl;
                    }
                    cout<<endl;
                }

                if(vband_fecha_fin [x]==0)
                {
                    cout<<"La Obra no fue finalizada"<<endl;
                }
                else
                {
                    cout<<"Fecha de Fin:  ";
                    for(j=0;j<3;j++)
                    {
                        if(j==0)
                        {
                            cout<<"Dia:  ";
                        }
                        if(j==1)
                        {
                            cout<<"Mes:  ";
                        }
                        if(j==2)
                        {
                            cout<<"Anio:  ";
                        }
                        cout<<fecha_de_fin [x] [j]<<endl;
                    }
                    cout<<endl;
                }
                cout<<endl;
                system("pause>nul");

    }
}


/////////////////////////////////////////////////////////////////////////////////////////////

// Iniciar Obra : Opcion 7

void iniciar_obra(int vband_fecha_inicio[20], int fecha_de_inicio[20][3])
{
    int cod_obra,j;

        cout<<"Codigo de Obra:  ";
        cin>>cod_obra;
        if(vband_fecha_inicio [cod_obra-1]==0)
        {

            cout<<"Fecha de Inicio:"<<endl;
            for(j=0;j<3;j++)
            {
                if(j==0)
                {
                    cout<<"Dia:  ";
                    cin>>fecha_de_inicio [cod_obra-1] [j];
                    while(fecha_de_inicio [cod_obra-1] [j]<1 || fecha_de_inicio [cod_obra-1] [j]>31)
                    {
                         cout<<"El Dia no puede ser Menor a 1 o Mayor a 31"<<endl;
                         cout<<"Por Favor Ingrese el Dia de Inicio:  ";
                         cin>>fecha_de_inicio [cod_obra-1] [j];
                    }
                }
                if(j==1)
                {
                    cout<<"Mes:  ";
                    cin>>fecha_de_inicio [cod_obra-1] [j];
                    while(fecha_de_inicio [cod_obra-1] [j]<1 || fecha_de_inicio [cod_obra-1] [j]>12)
                    {
                         cout<<"El Mes no puede ser Menor a 1 o Mayor a 12"<<endl;
                         cout<<"Por Favor Ingrese el Mes de Inicio:  ";
                         cin>>fecha_de_inicio [cod_obra-1] [j];
                    }
                }
                if(j==2)
                {
                    cout<<"A"<<(char) 164<<"o:  ";
                    cin>>fecha_de_inicio [cod_obra-1] [j];
                    while(fecha_de_inicio [cod_obra-1] [j]<2000 || fecha_de_inicio [cod_obra-1] [j]>2020)
                    {
                         cout<<"El Anio no puede ser Menor a 2000 o Mayor a 2020"<<endl;
                         cout<<"Por Favor Ingrese el Anio de Inicio:  ";
                         cin>>fecha_de_inicio [cod_obra-1] [j];
                    }
                }

            }
            cout<<"La Obra  "<<cod_obra<<"  ha sido Iniciada";
            vband_fecha_inicio [cod_obra-1]=1;
        }
        else
        {
            if(vband_fecha_inicio [cod_obra-1]==1)
            {
                cout<<"La Obra ya fue iniciada";
            }
            else
            {
                cout<<"Esa obra no existe";
            }
        }
}




//////////////////////////////////////////////////////////////////////////////////////

// Finalizar Obra : Opcion 8
void finalizar_obra(int vband_fecha_inicio[20],int vband_fecha_fin[20], int fecha_de_fin[20][3])
{
    int cod_obra,j;

        cout<<"Codigo de Obra:  ";
        cin>>cod_obra;
        if(vband_fecha_inicio[cod_obra-1]==1)
        {

            if(vband_fecha_fin [cod_obra-1]==0)
            {
                cout<<"Fecha de Fin:"<<endl;
                for(j=0;j<3;j++)
                {
                    if(j==0)
                    {
                        cout<<"Dia:  ";
                        cin>>fecha_de_fin [cod_obra-1] [j];
                        while(fecha_de_fin [cod_obra-1] [j]<1 || fecha_de_fin [cod_obra-1] [j]>31)
                        {
                             cout<<"El Dia no puede ser Menor a 1 o Mayor a 31"<<endl;
                             cout<<"Por Favor Ingrese el Dia de Fin:  ";
                             cin>>fecha_de_fin [cod_obra-1] [j];
                        }
                    }
                    if(j==1)
                    {
                        cout<<"Mes:  ";
                        cin>>fecha_de_fin [cod_obra-1] [j];
                        while(fecha_de_fin [cod_obra-1] [j]<1 || fecha_de_fin [cod_obra-1] [j]>12)
                        {
                             cout<<"El Mes no puede ser Menor a 1 o Mayor a 12"<<endl;
                             cout<<"Por Favor Ingrese el Mes de Fin:  ";
                             cin>>fecha_de_fin [cod_obra-1] [j];
                        }
                    }
                    if(j==2)
                    {
                        cout<<"Anio:  ";
                        cin>>fecha_de_fin [cod_obra-1] [j];
                        while(fecha_de_fin [cod_obra-1] [j]<2000 || fecha_de_fin [cod_obra-1] [j]>2020)
                        {
                             cout<<"El Anio no puede ser Menor a 2000 o Mayor a 2020"<<endl;
                             cout<<"Por Favor Ingrese el Anio de Fin:  ";
                             cin>>fecha_de_fin [cod_obra-1] [j];
                        }
                    }

                }
                cout<<"La Obra  "<<cod_obra<<"  ha sido Finalizada";
                vband_fecha_fin [cod_obra-1]=1;
            }
            else
            {
                if(vband_fecha_fin [cod_obra-1]==1)
                {
                    cout<<"La Obra ya fue Finalizada";
                }
                else
                {
                    cout<<"Esa Obra no existe";
                }
            }
        }
        else
        {
            cout<<"La Obra no se ha iniciado aun";
        }
}




///////////////////////////////////////////////////////////////////////////////////////////

// Calcular Presupuesto Opcion 9
// Calcular costo de una obra : Opcion 9-1



           void calcular_una_obra(int vband_fecha_fin[20],int vband_obra_cargada[20],char tipo_de_material[20],int m2_a_construir[20],float costo_de_obra[20],int tiempo_estimado[20]
            ,int cant_operarios[20],int cant_tecnicos[20],int cant_profesionales[20],float salarios[3],float costo_de_materiales[3][3])

{
            int cod_obra;
            cout<<"Codigo de Obra:  ";
            cin>>cod_obra;
            if(vband_obra_cargada[cod_obra-1]==1)
            {
                if(vband_fecha_fin[cod_obra-1]==0)
                {
                    switch (tipo_de_material [cod_obra-1])
                    {
                        case 'E':
                        case 'e':
                        if(m2_a_construir [cod_obra-1]<=100)
                        {
                            costo_de_obra [cod_obra-1]=tiempo_estimado [cod_obra-1]*(cant_operarios[cod_obra-1]*salarios[0]+cant_profesionales[cod_obra-1]*salarios[2]+cant_tecnicos[cod_obra-1]*salarios[1])+costo_de_materiales[0][0]*m2_a_construir [cod_obra-1];
                        }
                        if((m2_a_construir [cod_obra-1]>100) && (m2_a_construir [cod_obra-1]<=200))
                        {
                            costo_de_obra [cod_obra-1]=tiempo_estimado [cod_obra-1]*(cant_operarios[cod_obra-1]*salarios[0]+cant_profesionales[cod_obra-1]*salarios[2]+cant_tecnicos[cod_obra-1]*salarios[1])+costo_de_materiales[1][0]*m2_a_construir [cod_obra-1];
                        }
                        if(m2_a_construir [cod_obra-1]>200)
                        {
                            costo_de_obra [cod_obra-1]=tiempo_estimado [cod_obra-1]*(cant_operarios[cod_obra-1]*salarios[0]+cant_profesionales[cod_obra-1]*salarios[2]+cant_tecnicos[cod_obra-1]*salarios[1])+costo_de_materiales[2][0]*m2_a_construir [cod_obra-1];
                        }

                        break;

                        case 'R':
                        case 'r':
                        if(m2_a_construir [cod_obra-1]<=100)
                        {
                            costo_de_obra [cod_obra-1]=tiempo_estimado [cod_obra-1]*(cant_operarios[cod_obra-1]*salarios[0]+cant_profesionales[cod_obra-1]*salarios[2]+cant_tecnicos[cod_obra-1]*salarios[1])+costo_de_materiales[0][1]*m2_a_construir [cod_obra-1];
                        }
                        if((m2_a_construir [cod_obra-1]>100) && (m2_a_construir [cod_obra-1]<=200))
                        {
                            costo_de_obra [cod_obra-1]=tiempo_estimado [cod_obra-1]*(cant_operarios[cod_obra-1]*salarios[0]+cant_profesionales[cod_obra-1]*salarios[2]+cant_tecnicos[cod_obra-1]*salarios[1])+costo_de_materiales[1][1]*m2_a_construir [cod_obra-1];
                        }
                        if(m2_a_construir [cod_obra-1]>200)
                        {
                            costo_de_obra [cod_obra-1]=tiempo_estimado [cod_obra-1]*(cant_operarios[cod_obra-1]*salarios[0]+cant_profesionales[cod_obra-1]*salarios[2]+cant_tecnicos[cod_obra-1]*salarios[1])+costo_de_materiales[2][1]*m2_a_construir [cod_obra-1];
                        }

                        break;

                        case 'P':
                        case 'p':
                        if(m2_a_construir [cod_obra-1]<=100)
                        {
                            costo_de_obra [cod_obra-1]=tiempo_estimado [cod_obra-1]*(cant_operarios[cod_obra-1]*salarios[0]+cant_profesionales[cod_obra-1]*salarios[2]+cant_tecnicos[cod_obra-1]*salarios[1])+costo_de_materiales[0][2]*m2_a_construir [cod_obra-1];
                        }
                        if((m2_a_construir [cod_obra-1]>100) && (m2_a_construir [cod_obra-1]<=200))
                        {
                            costo_de_obra [cod_obra-1]=tiempo_estimado [cod_obra-1]*(cant_operarios[cod_obra-1]*salarios[0]+cant_profesionales[cod_obra-1]*salarios[2]+cant_tecnicos[cod_obra-1]*salarios[1])+costo_de_materiales[1][2]*m2_a_construir [cod_obra-1];
                        }
                        if(m2_a_construir [cod_obra-1]>200)
                        {
                            costo_de_obra [cod_obra-1]=tiempo_estimado [cod_obra-1]*(cant_operarios[cod_obra-1]*salarios[0]+cant_profesionales[cod_obra-1]*salarios[2]+cant_tecnicos[cod_obra-1]*salarios[1])+costo_de_materiales[2][2]*m2_a_construir [cod_obra-1];
                        }

                        break;

                        default:;

                    }
                    cout<<"La Obra  "<<cod_obra<<"  ha sido Presupuestada";
                }
                else
                {
                    cout<<"La Obra ha Finalizado, por ende no se puede calcular la Obra";
                }
            }
            else
            {
                cout<<"La Obra no fue cargada";
            }
}


///////////////////////////////////////////////////////////////////////////////////////////////

// Listar el Costo de una Obra : Opcion 9-2

void listar_costo_de_una_obra(float costo_de_obra[20])
{
    int cod_obra;

            cout<<"Codigo de Obra:  ";
            cin>>cod_obra;
            if(costo_de_obra[cod_obra-1]>0)
            {
                cout<<"El Costo del Valor de la Obra es:  "<<costo_de_obra [cod_obra-1];
            }
            else
            {
                cout<<"Esa Obra no se ha presupuestado";
            }
}



////////////////////////////////////////////////////////////////////////////////////////////////

// Recalcular costos de todas las obras : Opcion 9-3
             void calcular_obras_en_ejecucion(int vband_fecha_inicio[20],int vband_fecha_fin[20],int vband_obra_cargada[20],char tipo_de_material[20],
                                              int m2_a_construir[20],float costo_de_obra[20],int tiempo_estimado[20],
                                             int cant_operarios[20],int cant_tecnicos[20],int cant_profesionales[20],float salarios[3],float costo_de_materiales[3][3],int cont_obras)

{


    int y;

            for(y=0;y<cont_obras;y++)
            {
                if((vband_fecha_inicio[y]==1) && (vband_fecha_fin[y]==0))
                {
                    switch (tipo_de_material [y])
                    {
                        case 'E':
                        case 'e':
                        if(m2_a_construir [y]<=100)
                        {
                            costo_de_obra [y]=tiempo_estimado [y]*(cant_operarios[y]*salarios[0]+cant_profesionales[y]*salarios[2]+cant_tecnicos[y]*salarios[1])+costo_de_materiales[0][0]*m2_a_construir [y];
                        }
                        if((m2_a_construir [y]>100) && (m2_a_construir [y]<=200))
                        {
                            costo_de_obra [y]=tiempo_estimado [y]*(cant_operarios[y]*salarios[0]+cant_profesionales[y]*salarios[2]+cant_tecnicos[y]*salarios[1])+costo_de_materiales[1][0]*m2_a_construir [y];
                        }
                        if(m2_a_construir [y]>200)
                        {
                            costo_de_obra [y]=tiempo_estimado [y]*(cant_operarios[y]*salarios[0]+cant_profesionales[y]*salarios[2]+cant_tecnicos[y]*salarios[1])+costo_de_materiales[2][0]*m2_a_construir [y];
                        }

                        break;

                        case 'R':
                        case 'r':
                        if(m2_a_construir [y]<=100)
                        {
                            costo_de_obra [y]=tiempo_estimado [y]*(cant_operarios[y]*salarios[0]+cant_profesionales[y]*salarios[2]+cant_tecnicos[y]*salarios[1])+costo_de_materiales[0][1]*m2_a_construir [y];
                        }
                        if((m2_a_construir [y]>100) && (m2_a_construir [y]<=200))
                        {
                            costo_de_obra [y]=tiempo_estimado [y]*(cant_operarios[y]*salarios[0]+cant_profesionales[y]*salarios[2]+cant_tecnicos[y]*salarios[1])+costo_de_materiales[1][1]*m2_a_construir [y];
                        }
                        if(m2_a_construir [y]>200)
                        {
                            costo_de_obra [y]=tiempo_estimado [y]*(cant_operarios[y]*salarios[0]+cant_profesionales[y]*salarios[2]+cant_tecnicos[y]*salarios[1])+costo_de_materiales[2][1]*m2_a_construir [y];
                        }

                        break;

                        case 'P':
                        case 'p':
                        if(m2_a_construir [y]<=100)
                        {
                            costo_de_obra [y]=tiempo_estimado [y]*(cant_operarios[y]*salarios[0]+cant_profesionales[y]*salarios[2]+cant_tecnicos[y]*salarios[1])+costo_de_materiales[0][2]*m2_a_construir [y];
                        }
                        if((m2_a_construir [y]>100) && (m2_a_construir [y]<=200))
                        {
                            costo_de_obra [y]=tiempo_estimado [y]*(cant_operarios[y]*salarios[0]+cant_profesionales[y]*salarios[2]+cant_tecnicos[y]*salarios[1])+costo_de_materiales[1][2]*m2_a_construir [y];
                        }
                        if(m2_a_construir [y]>200)
                        {
                            costo_de_obra [y]=tiempo_estimado [y]*(cant_operarios[y]*salarios[0]+cant_profesionales[y]*salarios[2]+cant_tecnicos[y]*salarios[1])+costo_de_materiales[2][2]*m2_a_construir [y];
                        }

                        break;



                        default:;

                    }
                    cout<<"Las Obras han sido Recalculadas";

                }


            }

}






////////////////////////////////////////////////////////////////////////////////////////////////

// Listar el Costo de las obras en ejecucion : Opcion 9-4

void listar_costos_de_obras_en_ejecucion(int vband_fecha_inicio[20],int vband_fecha_fin[20],float costo_de_obra[20],int cont_obras,int codigo_de_obra[20])
{
    int y;


    for(y=0;y<cont_obras;y++)
            {
                if((vband_fecha_inicio[y]==1) && (vband_fecha_fin[y]==0))
                {
                    cout<<"Codigo de Obra:  "<<codigo_de_obra [y]<<endl;
                    cout<<"Costo de la Obra:  "<<costo_de_obra [y]<<endl<<endl;
                }
                system ("pause>nul");
            }
}



/////////////////////////////////////////////////////////////////////////////////////////////////

// Estadisticas : Opcion 10

void ordenar_menor_a_mayor_costos(int cont_obras,float costo_de_obra[20],int codigo_de_obra [20],char direccion[20][30])
{
    int i,j;
    int aux_codigo=0;
    float aux_costo=0;
    char aux_direccion [1] [30];
    if(cont_obras>1)
        {
            for(i=0;i<cont_obras-1;i++)
            {
                for(j=0;j<cont_obras-1;j++)
                {
                    if(costo_de_obra [j]>costo_de_obra [j+1])
                    {

                        aux_costo=costo_de_obra [j];
                        costo_de_obra [j]=costo_de_obra[j+1];
                        costo_de_obra[j+1]=aux_costo;

                        aux_codigo=codigo_de_obra[j];
                        codigo_de_obra [j]=codigo_de_obra[j+1];
                        codigo_de_obra[j+1]=aux_codigo;

                        strcpy(aux_direccion[0],direccion[j]);
                        strcpy(direccion[j],direccion[j+1]);
                        strcpy(direccion[j+1],aux_direccion[0]);

                    }

                }
            }
        }
}

void mostrar_estadisticas(int codigo_de_obra[20],char direccion[20][30],float costo_de_obra[20],int cont_obras)
{
    int i;
    for(i=0;i<cont_obras;i++)
        {
            if(costo_de_obra[i]>0)
            {
                cout<<"Codigo de Obra:  "<<codigo_de_obra[i]<<endl;
                cout<<"Direccion:  "<<direccion[i]<<endl;
                cout<<"Costo de Obra:  "<<costo_de_obra[i]<<endl<<endl;
            }

        }
}

void ordenar_menor_a_mayor_codigo(int cont_obras,float costo_de_obra[20],int codigo_de_obra[20],char direccion[20][30])
{
    int i,j;
    int aux_codigo=0;
    float aux_costo=0;
    char aux_direccion [1] [30];
    for(i=0;i<cont_obras-1;i++)
        {
            for(j=0;j<cont_obras-1;j++)
            {
                if(codigo_de_obra [j]>codigo_de_obra [j+1])
                {
                    aux_codigo=codigo_de_obra [j];
                    codigo_de_obra [j]=codigo_de_obra[j+1];
                    codigo_de_obra[j+1]=aux_codigo;

                    strcpy(aux_direccion[0],direccion[j]);
                    strcpy(direccion[j],direccion[j+1]);
                    strcpy(direccion[j+1],aux_direccion[0]);

                    aux_costo=costo_de_obra [j];
                    costo_de_obra [j]=costo_de_obra[j+1];
                    costo_de_obra[j+1]=aux_costo;
                }
            }
        }
}


////////////////////////////////////////////////////////////////////////////////////////////////////////
//// Listar Promedio de Costos entre TODAS LAS OBRAS CARGADAS
//Sumar los Costos
void sumar_costos_de_obras(float costo_de_obra[20],int cont_obras,float sumar_costos[1])
{
    int i;
    for(i=0;i<cont_obras;i++)
    {
        if(costo_de_obra[i]>0)
        {
            sumar_costos[0]+=costo_de_obra[i];
        }
    }
}

//Calcular Promedio
void listar_promedio(float sumar_costos[1], int cont_obras,float promedio_de_obras)
{
    promedio_de_obras=sumar_costos[0]/cont_obras;
    cout<<"El Promedio de Costos entre todas las obras es:  "<<promedio_de_obras;
}
#endif // LUCAS_H_INCLUDED
