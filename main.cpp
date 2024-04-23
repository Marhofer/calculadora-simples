//Esse é o primeiro programa que fiz, utilizando o ensinamento das aulas de Algoritmos I.
#include <iostream>
using namespace std;
#include <locale.h>

int main(){

  setlocale(LC_ALL, "portuguese");

  int resposta, operador;
  float num1, num2;

  // Laço de repetição para que o programa seja executado até o usuário desejar sair.
  do {

  // Aqui o usuário escolhe o operador, com um laço de repetição para que escolha um número válido.
  do {
  cout << "\nDigite 1 para soma";
  cout << "\nDigite 2 para subtração";
  cout << "\nDigite 3 para multiplição";
  cout << "\nDigite 4 para divisão\n\n";
  cin >> operador;

    if (operador < 1 || operador > 4) {
      cout << "\nOperador inválido. Por favor, reescolha.\n";
    }
  } while (operador < 1 || operador > 4); 

    // Depois de escolher um operador válido, o usuário digita os números que serão usados na operação.
    cout << "\nDigite o primeiro número: ";
    cin >> num1;
    cout << "\nDigite o segundo número: ";
    cin >> num2;

    // Depois de digitar os números, o programa executa a operação, utilizei o switch case para que o programa vá de acordo com o operador escolhido pelo usuário.
  switch (operador){
    case 1: cout << "\nO resultado é " << num1+num2;
    break;
    case 2: cout << "\nO resultado é " << num1-num2;
    break;
    case 3: cout << "\nO resultado é " << num1*num2;
    break;
    case 4: cout << "\nO resultado é " << num1/num2;
  }

  cout << "\n\nDeseja continuar? 1 para sim, 2 para não: ";
  cin >> resposta;

  } while (resposta == 1);

  return 0;

  }