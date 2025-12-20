// Projeto 09 - Controle de Precisão (Servo + Potenciômetro)
// Autor: ACNP / Prof. Augusto Queiroz

#include <Servo.h>

Servo meuServo;   // Cria o objeto para controlar o servo
int pinoPot = A0; // Pino onde o potenciômetro está ligado (Analógico)
int valorPot;     // Variável para guardar o valor lido

void setup()
{
    meuServo.attach(9); // Define que o servo está no pino 9
}

void loop()
{
    valorPot = analogRead(pinoPot); // Lê o valor do potenciômetro (entre 0 e 1023)

    // A função MAP converte uma escala em outra.
    // Sintaxe: map(valor, minimo_entrada, maximo_entrada, minimo_saida, maximo_saida)
    // Aqui transformamos de 0-1023 para 0-180 graus
    valorPot = map(valorPot, 0, 1023, 0, 180);

    meuServo.write(valorPot); // Manda o servo para a posição calculada
    delay(15);                // Pequena pausa para o servo chegar lá com estabilidade
}