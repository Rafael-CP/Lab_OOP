#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

class Investimento{
    public:
    double valor, taxa; 
    double retorno(double meses){}
    double get_valor(){
        return valor;
    }
    double get_taxa(){
        return taxa;
    }
    void set_valor(double v){
        valor = v;
    }
    void set_taxa(double t){
        taxa = t;
    }
};

class PapelBolsa : public Investimento{
    public:
    double retorno(double meses){
        double valoraux;
        for(int i = 0; i++; i < meses){
        if (i%2 == 0){
            valoraux = valor*pow(1+taxa,meses);
        } 
        if (i%2 != 0){
            valor = valor*pow(taxa,meses);
        }
        }
        return valoraux;
    }
};
class RendaFixa : public Investimento{
    public:
    double retorno(double meses){
        double taxaR = taxa - taxa*0.15;
        return valor*pow(1+taxaR, meses);
    }   

};
class Imobiliario : public Investimento{
    public:
    double retorno(double meses){
        double taxaR = taxa*0.75;
        return valor*pow(1+taxaR, meses);
        }
};


int main(){
    PapelBolsa pb;
    RendaFixa rf;
    Imobiliario fi;
    double v, t1, t2, t3, m;

    cout << "===Programa de Rendimentos===" << endl;
    cout << "Valor inicial da aplicacao (R$): " << endl;
    cin >> v;
    pb.set_valor(v);
    rf.set_valor(v);
    fi.set_valor(v);
    cout << "Taxa do papel da bolsa: " << endl;
    cin >> t1;
    pb.set_taxa(t1);
    cout << "Taxa do fundo renda fixa " << endl;
    cin >> t2;
    rf.set_taxa(t2);
    cout << "Taxa do fundo imobiliario: " << endl;
    cin >> t3;
    fi.set_taxa(t3);
    cout << "Numero de meses: " << endl;
    cin >> m;

    cout << fixed << setprecision(2) << "Rendimento do papel da bolsa R$ " << pb.retorno(m) << endl;
    cout << fixed << setprecision(2) << "Rendimento do fundo renda fixa R$ " << rf.retorno(m) << endl;
    cout << fixed << setprecision(2) << "Rendimento do fundo imobiliario R$ " << fi.retorno(m) << endl;
    cout << endl;
    cout << "--Fim do programa--" << endl;

    return 0;
}