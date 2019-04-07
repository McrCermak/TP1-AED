#include <iostream> 
 
 using namespace std;

class Vehiculo{
    protected:
        string patente;
    public:
        Vehiculo(string);
        string getPatente();
        virtual string toString();    

};

class Camion: public Vehiculo{
            private:
                int tipo;
            public:
                Camion();
                int getTipo();

};

class Moto: public Vehiculo{
            private:
                int tipo;
            public:
                Moto();
                int getTipo();    
};

class Auto: public Vehiculo{
            private:
                int tipo;
            public:
                Auto();
                int getTipo();    
};

class Persona{
    private:
        string nombre;
        string apellido;

};

class peaje{
    private: 
        int ticket;
        Persona* persona;
        double Valor_ticket;
        Vehiculo* vehiculo;
};

//Implementación métodos Vehiculo

Vehiculo::Vehiculo(string pat){
    this->patente = pat;
}



 int main()
 {

    Camion ca(); 
    Persona pe;     
    peaje p1;
    return 0; 
 }    