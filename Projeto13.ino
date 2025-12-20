// Projeto 13 - Alarme de Movimento
// Autor: ACNP / Prof. Augusto Queiroz

int pinoTilt = 7;   // Pino onde o sensor de tilt/vibracao esta ligado
int pinoBuzzer = 6; // Pino onde o buzzer esta ligado

void setup()
{
    // Configura o pino do sensor como entrada
    // Nota: Alguns modulos de tilt ja tem resistor interno e nao precisam de PULLUP.
    // Se o seu for apenas o componente (cilindro dourado/prata), use INPUT_PULLUP.
    pinMode(pinoTilt, INPUT);
    pinMode(pinoBuzzer, OUTPUT); // Configura o buzzer como saida
}

void loop()
{
    // Le o estado do sensor
    // Se detectar movimento ou inclinacao, o sensor fecha o contato (HIGH)
    if (digitalRead(pinoTilt) == HIGH)
    {
        tone(pinoBuzzer, 1000); // Toca um som agudo (1000 Hz)
        delay(500);             // Mantem o som por meio segundo
    }
    else
    {
        noTone(pinoBuzzer); // Para o som se estiver parado
    }
}