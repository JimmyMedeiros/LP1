#include <random>
#include <ctime>
#include "dado.h"

int Dado::total = 0;
Dado::Dado():rd(), gen(rd()), dis(1, 6) {
	valor = std::round(dis(gen));
	++total;
}
int Dado::jogar() {
	valor = std::round(dis(gen));
	return valor;
} 
int Dado:: getValor(){
	return valor;
}
Dado::~Dado(){
	--total;
}