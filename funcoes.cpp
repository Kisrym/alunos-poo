#include "alunos.hpp"

extern std::vector <Aluno> alunos;

namespace Aux {
	bool mostrarAlunos(){
		if (alunos.size() == 0){
			std::cout << "Não há alunos" << std::endl;
			return false;
		}
		
		for (int i = 0; i < alunos.size(); i++){
			std::cout << "[ " << i << " ] " << alunos[i].getNome() << std::endl; 
		}
		return true;
	}

	void adicionar_alunos(){
		int escolha2;
		do {
			std::string nome;
			int idade;
			std::vector <float> notas;
			float nota = 0;
			
			std::cout << "Nome: ";
			std::cin >> nome;
			std::cout << "Idade: ";
			std::cin >> idade;
			std::cout << "Notas (coloque 999 para parar):" << std::endl;
			while (true){
				std::cin >> nota;
				if (nota == 999){break;}
				notas.push_back(nota);
			}
			
			alunos.push_back(Aluno(nome, idade));
			alunos.back().setNotas(notas);
			
			std::cout << "Deseja adicionar mais pessoas?\n[ 1 ] Sim\n[ 2 ] Não\n";
			std::cin >> escolha2;
			system("clear");
		} while (escolha2 != 2);
	}

	void maior_nota(){
		using namespace std;
		
		int i = 0;
		cout << "De qual aluno? ";
		cin >> i;
		cout << "Maior: " << alunos[i].max() << endl;
		if (i > alunos.size()){cout << "Index errado" << endl; exit(1);}
	}

	void media_nota(){
		using namespace std;
		
		int i = 0;
		cout << "De qual aluno? ";
		cin >> i;
		cout << "Média: " << alunos[i].mean() << endl;
		if (i > alunos.size()){cout << "Index errado" << endl; exit(1);}
	}

	void menor_nota(){
		using namespace std;
		
		int i = 0;
		cout << "De qual aluno? ";
		cin >> i;
		cout << "Menor nota: " << alunos[i].min() << endl;
		if (i > alunos.size()){cout << "Index errado" << endl; exit(1);}
	}

	void quantidade_nota(){
		using namespace std;
		
		int i = 0;
		cout << "De qual aluno? ";
		cin >> i;
		cout << "Quantidade de notas: " << alunos[i].size() << endl;
		if (i > alunos.size()){cout << "Index errado" << endl; exit(1);}
	}
}