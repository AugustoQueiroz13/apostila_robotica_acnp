// Projeto 05 - Interruptor
// Autor: ACNP / Prof. Augusto Queiroz

int botao = 7;
int led = 13;       // Vamos usar o LED interno da placa (ou externo)
bool estadoLed = 0; // Guarda se a luz esta acesa ou apagada

void setup()
{
    // Configura o botao com o resistor interno (PULLUP)
    // Isso garante que o pino leia HIGH quando solto e LOW quando apertado
    pinMode(botao, INPUT_PULLUP);
    pinMode(led, OUTPUT);
}

void loop()
{
    // Le o botao. Como usamos PULLUP:
    // LOW (0) significa APERTADO (conectado ao GND)
    // HIGH (1) significa SOLTO (conectado ao 5V interno)

    if (digitalRead(botao) == LOW)
    {                                 // Se apertou o botao
        estadoLed = !estadoLed;       // Inverte o estado (Liga se estava desligado)
        digitalWrite(led, estadoLed); // Atualiza o LED

        // Espera voce soltar o botao para nao piscar loucamente
        // Enquanto o botao estiver apertado, o codigo fica "preso" aqui
        while (digitalRead(botao) == LOW)
        {
        }
        delay(100); // Pequeno atraso para evitar leituras falsas (debounce)
    }
}