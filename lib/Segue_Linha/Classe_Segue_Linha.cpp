#include "Arduino.h"

class Segue_Linha{
	private:
		uint8_t estado;
    bool flag_fim_corrida;
    bool flag_fim_calibracao;
    bool flag_fim_mapeamento;
    bool flag_fim_esperando;

		//Classe_Ponte_H ponte_h;
    //Classe_Esp32 esp32; --> NÃO SERÁ NECESSÁRIO, O BOOT SERÁ FEITO POR BOTÕES E COMUNICAÇÃO SERIAL.
    //Classe_Buzzer buzzer;
    //Classe_Led led;
    //Classe_Ventoinha ventoinha;
    //Classe_Sensor_Frontal sensor_frontal;
    //Classe_Mux mux;
    //Classe_IMU imu;
    //Classe_Sensor_Lateral sensor_lateral;
    //Classe_Encoder encoder;
    //



	public:
		Segue_Linha(){
			this->estado = 0;
      this->flag_fim_corrida = false;
      this->flag_fim_calibracao = false;
      this->flag_fim_mapeamento = false;
      this->flag_fim_esperando = true;
     
      //this->ponte_h;
      //this->esp32;
      //this->buzzer;
      //this->led;
      //this->ventoinha;
      //this->sensor_frontal;
      //this->mux;
      //this->imu;
      //this->sensor_lateral;
      //this->encoder;
    
		}
		
		void modo_esperando(){
      while(flag_fim_esperando == false){
        /*
        <DESCRIÇÃO DO MODO_ESPERANDO()>
            Não nenhuma funcionalidade mirabulante no momento, talvez, no máximo, chamada de LEDs e BUZZERs para indicar que
          o segue linha encontra-se nesse estado.
        */
      }
}
		
		void modo_mapeamento(){ // Esse modo se mantém em baixa prioridade.   
      while(flag_fim_mapeamento == false){
        /*
        <DESCRIÇÃO DO MODO_MAPEAMENTO()>
            Assim que passarmos para do modo_esperando para modo_mapeamento, ele manda para o modo_corrida ou modo_calibrar (DECIDIR).
        */
      }
		}
		
		void modo_corrida(){   
        while(flag_fim_corrida == false){
          /*
          <DESCRIÇÃO DO MODO_CORRIDA()>
          */

          //<LEITURA>
          //<PROCESSAMENTO>
          //<ATUAÇÃO>
          //<ATUALIZAR VALORES>
        }
		}
		
		void modo_calibrar(){
      while(flag_fim_calibracao == false){
        /*
        <DESCRIÇÃO DO MODO_CALIBRAR()>
        */

        //<Chamar método de calibração dos sensores>
      }
		}
		
    void inicializar(){
      while(1){
        /*
          <NOTA - VICTOR - SOBRE A MÁQUINA DE ESTADOS>
            
            ACHEI QUE A FORMA COM A QUAL FOI IMPLEMENTADO A MÁQUINA DE ESTADO FICOU TERRÍVEL, MAS AGORA NÃO ESTOU COM 
          CABEÇA PARA CRIAR MAIS DUAS CLASSES PARA CONTROLAR ISSO. MAS É O QUE DEVE SER FEITO, SERÁ FEITO MAIS TARDE.
        */
       
        switch(this->estado){
          case 0:
            while(flag_fim_esperando == false){
              this->modo_esperando();
            }
            break;

          case 1:
            while(flag_fim_calibracao == false){
              this->modo_calibrar();
            }
            break;

          case 2:
            while(flag_fim_mapeamento == false){
              this->modo_mapeamento();
            }
            break;

          case 3:
            while(flag_fim_corrida == false){
              this->modo_corrida();
            }
            break;

          case 4:
            this->estado = 0;
            this->flag_fim_corrida = false;
            this->flag_fim_calibracao = false;
            this->flag_fim_mapeamento = false;
            this->flag_fim_esperando = true;

            break;
          

        }
      }
		}
};