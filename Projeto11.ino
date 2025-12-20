// Projeto 11 - Dó Ré Mi
// Autor: ACNP / Prof. Augusto Queiroz

// Definindo as frequencias das notas musicais (em Hertz)
#define DO 262
#define RE 294
#define MI 330
#define FA 349
#define SOL 392
#define LA 440
#define SI 494
#define DO_2 523

int pinoBuzzer = 6; // Pino onde o Buzzer esta conectado

// Lista (array) com a sequencia da melodia
int melodia[] = {DO, RE, MI, FA, SOL, LA, SI, DO_2};

void setup()
{
    pinMode(pinoBuzzer, OUTPUT); // Configura o pino do buzzer como saida
}

void loop()
{
    // O laço 'for' percorre as 8 notas da nossa lista
    for (int i = 0; i < 8; i++)
    {
        tone(pinoBuzzer, melodia[i]); // Toca a nota atual
        delay(500);                   // Mantem a nota tocando por meio segundo
    }

    noTone(pinoBuzzer); // Para o som ao final da escala
    delay(1000);        // Espera 1 segundo antes de repetir tudo
}