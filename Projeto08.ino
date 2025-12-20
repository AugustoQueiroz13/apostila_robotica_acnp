// Projeto 08 - Acionando um Motor
// Autor: ACNP / Prof. Augusto Queiroz

#include <Servo.h> // Inclui a biblioteca de servos

Servo meuServo; // Cria um "objeto" para controlar o motor
int botao = 7;  // Pino onde o botao esta ligado

void setup()
{
    pinMode(botao, INPUT_PULLUP); // Configura o botao com resistor interno
    meuServo.attach(9);           // Diz que o fio laranja do motor esta no pino 9
}

void loop()
{
    if (digitalRead(botao) == LOW)
    { // Se apertar o botao (LOW porque eh PULLUP)

        // Gira de 0 ate 180 graus
        // O laço 'for' aumenta o angulo de 1 em 1
        for (int angulo = 0; angulo <= 180; angulo++)
        {
            meuServo.write(angulo); // Manda o motor para a posicao
            delay(10);              // Espera um pouco para o motor chegar la (velocidade)
        }

        // Gira de volta de 180 ate 0 graus
        // O laço 'for' diminui o angulo de 1 em 1
        for (int angulo = 180; angulo >= 0; angulo--)
        {
            meuServo.write(angulo);
            delay(10);
        }
    }
}