#include <iostream>

using namespace std;

class oper
{private://atributos
int n1;
int n2;
//int i;
string nombre;
public://metodos
    oper(int,int,string);
    void sumar();
    void restar();
    void multiplicar();
};//notese que lleva punto y coma despues de la llave

oper::oper(int _n1, int _n2, string _nombre)//defino nuevas variables
{n1= _n1;
n2= _n2;
//calzado= _calzado;
}
void oper::sumar()
{ float i;
       i=n1+n2;
    cout<<"la suma es" <<i<<" ,"<<endl;
}

void oper::restar()
{float nb;
    nb=n1-n2;
    cout<<"la restta es" <<nb<<endl;
}

void oper::multiplicar()
{float na;
    na=n1*n2;
    cout<<"la restta es" <<na<<endl;
}
int main()
{
   /* cout<<"ingrese un numero" <<endl;
    cin>>_n1;
    cout<<"ingrese un segundo numero" <<endl;
    cin>>_n2;*/
  oper Aldrink = oper(12,10,"Aldrink");
  Aldrink.sumar();

  //oper Aldrink = oper(12,10,"Aldrink");
  Aldrink.restar();
  Aldrink.multiplicar();


}
