#include "alunos.hpp"
#include "main.hpp"

using namespace std;

vector <Aluno> alunos;

int main(){
	int escolha;
	
	while (true){
		cout << "O que deseja fazer?" << endl << "[ 1 ] Adicionar Alunos\n[ 2 ] Média\n[ 3 ] Maior\n[ 4 ] Menor\n[ 5 ] Quantidade de Notas\n[ 6 ] Sair" << endl;
		cin >> escolha;
		system("clear");
		
		if (escolha == 1){Aux::adicionar_alunos();}
		else if (escolha == 6){
			cout << "Adeus..." << endl;
			exit(0);
		}
		else if (Aux::mostrarAlunos()){
			switch (escolha){
				case 2:
					Aux::media_nota();
					break;
				case 3:
					Aux::maior_nota();
					break;
				case 4:
					Aux::menor_nota();
					break;
				case 5:
					Aux::quantidade_nota();
					break;
				}
			}
		}
	return 0;
}