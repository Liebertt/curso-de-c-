#include <iostream>

using namespace std;

int main(){
    
    float mediaTurma;
    float nota1;
    float nota2;
    float nota3;
    
    cout << "Informe as três notas do aluno e a média da turma: \n";
    cout << "Informe a nota 1 do aluno: \n";
    cin >> nota1;
    cout << "Informe a nota 2 do aluno: \n";
    cin >> nota2;
    cout << "Informe a nota 3 do aluno: \n";
    cin >> nota3;
    cout << "Informe a média da turma: \n";
    cin >> mediaTurma;
    
    float mediaAluno = (nota1 + nota2 + nota3)/3;
    if(mediaAluno < mediaTurma){
        cout << "Aluno com nota abaixo da média da turma \n";
    }else if(mediaAluno == mediaTurma){
        cout << "Aluno com nota igual a média da turma \n";
    }else{
        cout << "Aluno com nota acima da média da turma \n";
    }
    return 0;
}