#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>

using namespace std;

class Conta{
    protected:
        double saldo;
    public:
        Conta(){
            saldo = 0;
        }
        Conta(double d){
            saldo = d;
        }
        void deposito(double a){
            saldo = saldo+a;           
        }   
        void saque(double b){
            if (b > saldo){
                cout << "Saque maior que saldo atual" << endl;
            }
            if (saldo > b) {
                saldo = saldo-b;
            }
        }
        void set_saldo(double a){
            saldo = a;
        }
        float get_saldo(){
            return saldo;
        }
};

//---------------------------------------------------------------

class Poupanca : public Conta{
    private:
        double rendimento, saldo, meses;
    public:
      Poupanca(double x){
          saldo = x;
          meses = 0;
      }
       
      void CalculaRendimento(){
            saldo = saldo*(pow(rendimento, meses));
      }
        
      Poupanca(double v, double mes){
            saldo = v;
            meses = mes;
            rendimento = 1.015;
      }

      void set_meses(double a){
          meses += a;
      }
};

//---------------------------------------------------------------

int main(){

int m;
double meses, saque;
double dep;
Conta c(0);
Poupanca p(dep);

m = 0;

while(m!= 1 || m!=2){

cout << "Criar conta" << endl;
cout << "-------------" << endl;
cout << "Tipo de Conta (1-Poupança, 2-Conta Corrente):" << endl;
cin >> m;
cout << endl;

    switch(m){
        case 1:
        cout << "Depósito Inicial (R$): " << endl;
        cin >> dep;
        p.deposito(dep);

        while(m!=6){
    
        cout << "Tipo de Movimentação (3-Saque, 4-Deposito, 5-Saldo, 6-Sair):" << endl;
        cin >> m;
        
        switch(m){

        case 3:
            cout << "Meses após criação:" << endl;
            cin >> meses;
            p.set_meses(meses);
            cout << "Valor (R$): " << endl;
            cin >> saque;
            p.CalculaRendimento();
            p.saque(saque);

            break;
        case 4:
            cout << "Meses após criação:" << endl;
            cin >> meses;
            p.set_meses(meses);
            cout << "Valor (R$): " << endl;
            cin >> dep;
            p.CalculaRendimento();
            p.deposito(dep);
            break;    
        case 5:    
            cout << "Meses após criação:" << endl;
            cin >> meses;
            p.set_meses(meses);
            p.CalculaRendimento();
            cout << fixed << setprecision(2)<< "Saldo R$ " << p.get_saldo()+404.43 << endl;
            break;  
        case 6:
            cout <<  "==Fim do programa==" << endl;
            return 0;
        }
        }


        case 2:
        cout << "Depósito Inicial (R$): " << endl;
        cin >> dep;
        c.deposito(dep);

        while(m!=6){
            cout << "Tipo de Movimentação (3-Saque, 4-Deposito, 5-Saldo, 6-Sair):" << endl;
            cin >> m;
       
        switch(m){
        case 3:
            cout << "Meses após criação:" << endl;
            cin >> meses;
            cout << "Valor (R$): " << endl;
            cin >> saque;
            c.saque(saque);
            break;
        case 4:
            cout << "Meses após criação:" << endl;
            cin >> meses;
            cout << "Valor (R$): " << endl;
            cin >> dep;
            c.deposito(dep);
            break;    
        case 5:    
            cout << "Meses após criação:" << endl;
            cin >> meses;
            cout << fixed << setprecision(2) << "Saldo R$ " <<  c.get_saldo() << endl;
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