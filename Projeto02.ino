// Projeto 02 - Sinal de SOS
// Autor: ACNP / Prof. Augusto Queiroz

int pinoLed = 11; // Cria uma variavel para o pino do LED

void setup()
{
    pinMode(pinoLed, OUTPUT); // Configura o pino como saida
}

void loop()
{

    // Parte 1: Letra S (3 pontos curtos)
    // O comando 'for' repete o bloco de codigo 3 vezes
    for (int x = 0; x < 3; x++)
    {
        digitalWrite(pinoLed, HIGH);
        delay(150); // Tempo curto (ponto)
        digitalWrite(pinoLed, LOW);
        delay(100); // Intervalo entre piscadas
    }

    delay(200); // Pausa entre as letras (S e O)

    // Parte 2: Letra O (3 tracos longos)
    for (int x = 0; x < 3; x++)
    {
        digitalWrite(pinoLed, HIGH);
        delay(450); // Tempo longo (traco)
        digitalWrite(pinoLed, LOW);
        delay(150);
    }

    delay(200); // Pausa entre as letras (O e S)

    // Parte 3: Letra S (3 pontos curtos novamente)
    for (int x = 0; x < 3; x++)
    {
        digitalWrite(pinoLed, HIGH);
        delay(150);
        digitalWrite(pinoLed, LOW);
        delay(100);
    }

    // Espera 5 segundos antes de recomecar todo o pedido de socorro
    delay(5000);
}