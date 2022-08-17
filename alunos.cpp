#include "alunos.hpp"

//Functions
float Aluno::mean(){
	float media = 0;
	
	for (float n : notas){
		media += n;
	}
	
	return media / notas.size();
}

float Aluno::max(){
	float maior = 0;
	
	for (float n : notas){
		if (n > maior){
			maior = n;
		}
	}
	return maior;
}

float Aluno::min(){
	float menor = this->max();
	
	for (float n : notas){
		if (n < menor){
			menor = n;
		}
	}
	return menor;
}

int Aluno::size(){
	return notas.size();
}

//Getters
std::string Aluno::getNome() const{
	return nome;
}

int Aluno::getIdade() const {
	return idade;
}

void Aluno::getNotas() const {
	if (notas.size() == 0){
		std::cout << "Não há notas para esse usuário" << std::endl;
		return;
	}
	
	for (float n : notas){
		std::cout << n << std::endl;
	}
}

//Setters
void Aluno::setNotas(std::vector <float> notas){
	this->notas = notas;
}