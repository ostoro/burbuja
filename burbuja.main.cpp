# include  < iostream >
using namesapce std;
usando el  espacio de nombres  est�ndar ;

nulo  ingresar ( int a [], int n);
vac�o  imprimir ( int a [], int n);
 burbuja vac�a ( int a [], int n);


int  main ()
{

    int arreglo [ 100 ];
    int n;
    cout << " INGRESE EL TAMANIO: " ;
    cin >> n;
    ingresar (arreglo, n);
    cout << endl;
    imprimir (arreglo, n);
    cout << endl;
    burbuja (arreglo, n);
    cout << endl;
    imprimir (arreglo, n);

    devuelve  0 ;
}


anular  ingresar ( int a [], int n)
{
    int i;
    para (i = 0 ; i <n; i ++)
    {
        cout << " Ingrese el elemeneto al arreglo: " << endl;
        cin >> a [i];
    }

}

vac�o  imprimir ( int a [], int n)
{
    int i;
    para (i = 0 ; i <n; i ++)
    {
        cout << a [i];
    }
}



 burbuja vac�a ( int a [], int n)
{
    int i, j, aux;

    para (i = 0 ; i < 5 ; i ++)
    {
        para (j = i + 1 ; j < 5 ; j ++)
        {
            si (a [j] <a [i])
            {
                aux = a [i];

                a [i] = a [j];

                a [j] = auxiliar;
            }
        }
    }


}

