#include <stdio.h>

// nunca iniciar uma variável dentro de um struct

struct Pessoa {
    char nome[50];
    int idade;
};
  struct Pessoa receberDados() {
    struct Pessoa p;

p.idade = 10;
//receber o nome de pessoa
printf("Digite o nome da pessoa: ");
scanf("%s", p.nome);

//receber a idade da pessoa
printf("Digite a idade da pessoa: ");
scanf("%d", &p.idade);    

return p;

}
void mostrarDados(struct Pessoa p) {
  printf("nome: %s - Idade: %d\n", p.nome, p.idade);
}
  int main (void) {
    struct Pessoa pes = receberDados();
    mostrarDados(pes);


      struct Pessoa grupoPessoas[50];
      for(int i = 0; i < 50; i++){
        grupoPessoas[i] = receberDados();
        mostrarDados(grupoPessoas[i]);

    }
      
return 0;

}


