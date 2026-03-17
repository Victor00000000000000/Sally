#include "Classe_Pino"
#include "Arduino.h"


class Pino_Interrupcao_Externa: public Pino{
      private:
        uint8_t pino;
        int modo;
        void (*funcao)(void);

      public:
        Pino_Interrupcao_Externa(uint8_t pino, int modo, void (*funcao)(void)) : Pino(){
            this->pino = pino;
            this->modo = modo;
            this->funcao = funcao;
        }

        uint8_t mydigitalPinToInterrupt(){
            digitalPinToInterrupt(this->pino);
        }

        void myattachInterrupt(){
          attachInterrupt(this->digitalPinToInterrupt(this->pino), this->funcao, this->modo);
        }
};
