#include<iomanip>

#ifndef DADOS_H_INCLUDED
#define DADOS_H_INCLUDED

//Simula el tiro de un dado
int simulacionDados1(){
    int resultado = rand()%6 + 1; //El problema de estas simulaciones es que únicamente la primera
    return resultado; //vez que se ejecuta los números son aleatorios, después de ello solo se
}                     //repiten una y otra vez

//verifica que en efecto los numeros "parecen" ser aleatorios
void simulaConteo(){
    int dato1 {0};
    int dato2 {0};
    int dato3 {0};
    int dato4 {0};
    int dato5 {0};
    int dato6 {0};
    int n {0};
    std::cout << "Ingrese el número de veces que desea tirar el dado:";
    std::cin >> n;
    for(int i = 0; i < n; i = i + 1){
        unsigned int resultado = simulacionDados1();

        switch( resultado ){
            case 1:
                dato1 = dato1 + 1;
                break;
            case 2:
                dato2 = dato2 + 1;
                break;
            case 3:
                dato3 = dato3 + 1;
                break;
            case 4:
                dato4 = dato4 + 1;
                break;
            case 5:
                dato5 = dato5 + 1;
                break;
            case 6:
                dato6 = dato6 + 1;
                break;
            default:
                std::cout << "Valor invalido" << "\n"; //Esto nunca se ejecuta
        }
    }
    std::cout << "Cara" << std::setw(23) << "Frecuencia" << "\n";
    std::cout << "   1: " << std::setw(13) << dato1 << "\n";
    std::cout << "   2: " << std::setw(13) << dato2 << "\n";
    std::cout << "   3: " << std::setw(13) << dato3 << "\n";
    std::cout << "   4: " << std::setw(13) << dato4 << "\n";
    std::cout << "   5: " << std::setw(13) << dato5 << "\n";
    std::cout << "   6: " << std::setw(13) << dato6 << "\n";
}


//forma alternativa para generar números aleatorios sin el problema anteriormente mencionado
int simulacionDados2(){
    srand( static_cast<unsigned int >(time(0)));
    int resultado = rand()%6 + 1;
    return resultado;

}
/*time(0) devuelve el numero de segundos transcurridos desde
el primero de enero de 1970 a media noche en tiempo del
meridiano de Greenwich, toque que aquí no funciona.
*/
#endif // DADOS_H_INCLUDED
