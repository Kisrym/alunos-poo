#pragma once
#include <iostream>
#include <string>
#include <vector>

class Aluno{
private:
	std::string nome;
	int idade;
	std::vector <float> notas;
	static int quantidadeAlunos;
	
public:
	Aluno(std::string nome, int idade)
	: nome(nome), idade(idade){};
	
	//Functions
	float mean();
	float max();
	float min();
	int size();
	
	//Getters
	std::string getNome() const;
	int getIdade() const;
	void getNotas() const;
	static int getQuantidadeAlunos();
	
	//Setters
	void setNotas(std::vector <float> notas);
};