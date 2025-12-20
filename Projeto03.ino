// Projeto 03 - Brilho Oscilante (Fade)
// Autor: ACNP / Prof. Augusto Queiroz

int pinoLed = 11; // Precisa ser um pino PWM (identificado com ~ na placa)

void setup()
{
    pinMode(pinoLed, OUTPUT);
}

void loop()
{
    acendeBrilho(5); // Chama nossa funcao personalizada
    apagaBrilho(5);  // Chama a outra funcao
}

// Funcao criada por nos para aumentar o brilho gradualmente
void acendeBrilho(int velocidade)
{
    // Vai de 0 (apagado) ate 255 (maximo)
    // O incremento de 5 em 5 torna a transicao mais suave ou rapida
    for (int valor = 0; valor < 255; valor += 5)
    {
        analogWrite(pinoLed, valor); // Define a forca do brilho (PWM)
        delay(30);                   // Espera um pouquinho para vermos o efeito acontecer
    }
}

// Funcao criada por nos para diminuir o brilho gradualmente
void apagaBrilho(int velocidade)
{
    // Vai de 255 (maximo) ate 0 (apagado)
    for (int valor = 255; valor > 0; valor -= 5)
    {
        analogWrite(pinoLed, valor);
        delay(30);
    }
}