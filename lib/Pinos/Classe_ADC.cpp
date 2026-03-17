#include <Arduino.h>

class ADC{
  private:
    uint8_t pino_adc;

  public:
    ADC(uint8_t pino_adc){
      this->pino_adc = pino_adc;
    }

    uint8_t get_pino_adc(){
      return this->pino_adc;
    }

    void set_pino_adc(uint8_t novo_pino_adc){
      this->pino_adc = novo_pino_adc;
    }
};
