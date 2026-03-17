#include "Classe_Pino"
#include "Classe_ADC"
#include "Classe_PWM"
#include "Arduino.h"

class Pino_Analogico: public Pino{
    private:
        ADC adc;
	    PWM pwm;
    
    public:
     Pino_Analogico(uint8_t pino_adc, uint8_t pino_pwm) : Pino(){
		this->adc;
		this->pwm;
		this->pwm.pino_pwm = pino_pwm;
		this->adc.pino_adc = pino_adc;
    }

    void analogWrite(float valor){
    	analogWrite(this->pwm.pino_pwm, valor);
    	//cout << "Escreveu no pino " << this->numero_pino << endl;
	}
	
	int analogRead(){
		return analogRead(this->pwm.pino_pwm);
		//cout << "Leu pino " << this->numero_pino << endl;
	}
};