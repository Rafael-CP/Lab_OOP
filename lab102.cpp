#include <iostream>
#include <string>

using namespace std;

class Conta{
    protected:
        float saldo;
    public:
        Conta(){
            saldo = 0;
        }
        Conta(float d){
            saldo = d;
        }
        void deposito(float a){
            saldo = saldo+a;           
        }   
        void saque(float b){
            if (b > saldo){
                cout << "Saque maior que saldo atual" << endl;
            }
            if (saldo > b) {
                saldo = saldo-b;
            }
        }
        void set_saldo(float a){
            saldo = a;
        }
        float get_saldo(){
            return saldo;
        }
};

class Poupanca : public Conta{
    private:
        float rendimento;
    public:
        Poupanca(){
            saldo = 0;
            rendimento = 0;
        }
        Poupanca(float d, int mes){
            saldo = d;
            rendimento = mes;
        }
        void set_rendimento(float r){
            rendimento = r;
        }
        float get_rendimento(){
            return rendimento;
        }
        float CalculaRendimento(){
            return saldo*(1.5/100);
        }
};

class ContaCorrente : public Conta{
    protected:
        float saldo;
    public:
        ContaCorrente(){
            saldo = 0;
        }
        ContaCorrente(float d){
            saldo = d;
        }
        void deposito(float a){
            saldo = saldo+a;           
        }   
        void saque(float b){
            if (b > saldo){
                cout << "Saque maior que saldo atual" << endl;
            }
            if (saldo > b) {
                saldo = saldo-b;
            }
        }
        void set_saldo(float a){
            saldo = a;
        }
        float get_saldo(){
            return saldo;
        }
};
int main(){

int m, deposito, meses, saque;

Poupanca p(0,meses);
ContaCorrente c(0);

m = 0;

while(m!= 1 || m!=2){

cout << "Criar conta" << endl;
cout << "--------------" << endl;
cout << "Tipo de conta (1-Poupanca, 2-Conta Corrente):" << endl;
cin >> m;

    switch(m){
        case 1:

        cout << "Deposito Inicial (R$): " << endl;
        cin >> deposito;
        p.deposito(deposito);

        while(m!=6){
    
        cout << "Tipo de Movimentacao (3-Saque, 4-Deposito, 5-Saldo, 6-Sair):" << endl;
        cin >> m;
        switch(m){

        case 3:
            cout << "Meses apos criacao" << endl;
            cin >> meses;
            p.set_rendimento(meses);
            cout << "Valor (R$): " << endl;
            cin >> saque;
            p.saque(saque);
            break;
        case 4:
            cout << "Meses apos criacao" << endl;
            cin >> meses;
            p.set_rendimento(meses);
            cout << "Valor (R$): " << endl;
            cin >> deposito;
            p.deposito(deposito);
            break;    
        case 5:    
            cout << "Meses apos criacao" << endl;
            cin >> meses;
            p.set_rendimento(meses);
            cout << "Saldo (R$): " <<  p.get_saldo() << endl;
            break;  
        case 6:
            cout <<  "==Fim do programa==" << endl;
            return 0;
        }
        }
        
        case 2:
        cout << "Deposito Inicial (R$): " << endl;
        cin >> deposito;
        c.deposito(deposito);

        while(m!=6){
            cout << "Tipo de Movimentacao (3-Saque, 4-Deposito, 5-Saldo, 6-Sair):" << endl;
            cin >> m;
       
        switch(m){
        case 3:
            cout << "Meses apos criacao" << endl;
            cin >> meses;
            cout << "Valor (R$): " << endl;
            cin >> saque;
            c.saque(saque);
            break;
        case 4:
            cout << "Meses apos criacao" << endl;
            cin >> meses;
            cout << "Valor (R$): " << endl;
            cin >> deposito;
            c.deposito(deposito);
            break;    
        case 5:    
            cout << "Meses apos criacao" << endl;
            cin >> meses;
            cout << "Saldo (R$): " <<  c.get_saldo() << endl;
            break;  
        case 6:
            cout <<  "==Fim do programa==" << endl;
            return 0;
        }
        }   
    }

}
return 0;
}