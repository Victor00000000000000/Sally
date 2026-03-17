#include "Classe_Pino"
#include "Modulo_Constantes"
#include "Arduino.h"

class Pino_Digital: public Pino{
  private:
      uint8_t numero_pino;
      IO io;

  public:
    Pino_Digital(uint8_t numero_pino) : Pino(){
		this->numero_pino = numero_pino; 		
    }

    uint8_t get_numero_pino(){
      return this->numero_pino;
    }

    void set_numero_pino(uint8_t novo_numero_pino){
      this->numero_pino = novo_numero_pino;
    }
	  
	  void set_io(IO novo_io){
	  	this->io = novo_io;
		}
		
		IO get_io(){
			return this->io;
		}

		void pinMode(uint8_t numero_pino, IO io){
      pinMode(numero_pino, io);
      //cout << "Pino " << numero_pino << " setado para " << io << endl;
	  }

		void digitalWrite(){
	    //cout << "Escreveu no pino " << this->numero_pino << endl;
    	digitalWrite(this->numero_pino);
		}
	
		int digitalRead(){
		//cout << "Leu pino " << this->numero_pino << endl;
	    return digitalRead(this->numero_pino);
		}

};