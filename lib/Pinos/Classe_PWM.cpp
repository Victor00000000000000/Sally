class PWM{
  private:
    uint8_t pino_pwm;

  public:
    PWM(uint8_t pino_pwm){
      this->pino_pwm = pino_pwm;
    }

    uint8_t get_pino_pwm(){
      return this->pino_pwm;
    }

    void set_pino_pwm(uint8_t novo_pino_pwm){
      this->pino_pwm = novo_pino_pwm;
    }
}