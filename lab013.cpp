#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "Nome do logradouro (Rua, avenida, travessa, praça)" << endl;
  string logradouro;
  getline (cin,logradouro);
  cout << "Número" << endl;
  string numero;
  cin >> numero;
  cout << "CEP" << endl;
  string cep;
  cin >> cep;
  cout << "Bairro" << endl;
  string bairro;
  cin >> bairro;
  cout << "Cidade" << endl;
  string cidade;
  cin >> cidade;
  cout << "Sigla estado";
  string estado;
  cin >> estado;
  cout << logradouro <<  ", " << numero << ", " << bairro <<  ", " << cidade  << "-" << estado << ", "<<  cep << endl;
  
  return 0;
  
}

