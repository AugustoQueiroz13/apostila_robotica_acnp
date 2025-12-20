// Projeto 01 - Pisca Pisca
// Autor: ACNP / Prof. Augusto Queiroz

void setup()
{
    // Configura o pino 11 como uma SAIDA de energia
    // Certifique-se de que o LED está conectado ao pino 11 e ao GND
    pinMode(11, OUTPUT);
}

void loop()
{
    digitalWrite(11, HIGH); // Liga o LED (HIGH = ligado / 5V)
    delay(1000);            // Espera 1000 milissegundos (1 segundo)

    digitalWrite(11, LOW); // Desliga o LED (LOW = desligado / 0V)
    delay(1000);           // Espera 1 segundo apagado
}