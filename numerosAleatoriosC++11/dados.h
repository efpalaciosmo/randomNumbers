#ifndef DADOS_H_INCLUDED
#define DADOS_H_INCLUDED
#include <ctime>
#include <random>

int simulaDados(){
    std::default_random_engine motor( static_cast<unsigned int >( time(0)) );
    std::uniform_int_distribution<unsigned int> aleatorio( 1, 100);
    return aleatorio( motor );
}

#endif // DADOS_H_INCLUDED
