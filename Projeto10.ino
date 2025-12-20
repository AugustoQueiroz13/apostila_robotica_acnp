// Projeto 10 - Sensor de Luz
// Autor: ACNP / Prof. Augusto Queiroz

int pinoLed = 13;       // Pino onde o LED esta conectado
int pinoSensorLuz = A0; // Pino analogico onde o LDR esta ligado
int valorLuz = 0;       // Variavel para armazenar a leitura da luz

void setup()
{
    pinMode(pinoLed, OUTPUT); // Configura o LED como saida
}

void loop()
{
    valorLuz = analogRead(pinoSensorLuz); // Le a intensidade da luz (0 a 1023)

    // Se o valor for menor que 750 (ambiente escuro), acende a luz
    // Voce pode ajustar esse valor de 750 conforme a luz do seu ambiente
    if (valorLuz < 750)
    {
        digitalWrite(pinoLed, HIGH); // Acende o LED
    }
    else
    {
        digitalWrite(pinoLed, LOW); // Apaga o LED (esta claro)
    }

    delay(10); // Pequena pausa para estabilidade
}