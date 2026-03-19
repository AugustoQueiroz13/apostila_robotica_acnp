// Projeto 04 - Semaforo
// Autor: ACNP / Prof. Augusto Queiroz

// Definicao dos pinos
int pedVerde = 9;
int pedVermelho = 8;
int carroVerde = 12;
int carroAmarelo = 11;
int carroVermelho = 10;

void setup()
{
    // Configura todos os pinos como saida
    pinMode(pedVerde, OUTPUT);
    pinMode(pedVermelho, OUTPUT);
    pinMode(carroVerde, OUTPUT);
    pinMode(carroAmarelo, OUTPUT);
    pinMode(carroVermelho, OUTPUT);

    // Estado Inicial: Carros passam, Pedestres esperam
    digitalWrite(carroVerde, HIGH);
    digitalWrite(carroAmarelo, LOW);
    digitalWrite(carroVermelho, LOW);
    digitalWrite(pedVerde, LOW);
    digitalWrite(pedVermelho, HIGH);
}

void loop()
{
    // 1. Carros passando (Verde Carro + Vermelho Pedestre)
    digitalWrite(carroVerde, HIGH);
    digitalWrite(pedVermelho, HIGH);
    delay(5000); // 5 segundos

    // 2. Atencao (Amarelo Carro)
    digitalWrite(carroVerde, LOW);
    digitalWrite(carroAmarelo, HIGH);
    delay(3000); // 3 segundos

    // 3. Pare para Carros / Siga para Pedestres
    digitalWrite(carroAmarelo, LOW);
    digitalWrite(carroVermelho, HIGH);

    digitalWrite(pedVermelho, LOW); // Apaga vermelho pedestre
    digitalWrite(pedVerde, HIGH);   // Acende verde pedestre
    delay(5000);                    // 5 segundos para atravessar

    // 4. Alerta para Pedestres (Verde piscando)
    digitalWrite(pedVerde, LOW);
    for (int x = 0; x < 5; x++)
    {
        digitalWrite(pedVermelho, HIGH);
        delay(250);
        digitalWrite(pedVermelho, LOW);
        delay(250);
    }

    // Reinicia o ciclo (apaga vermelho carro)
    digitalWrite(carroVermelho, LOW);
}
