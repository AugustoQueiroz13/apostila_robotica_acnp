// Projeto 06 - Luzes Coloridas (LED RGB)
// Autor: ACNP / Prof. Augusto Queiroz

int led_R = 7; // Vermelho
int led_G = 6; // Verde
int led_B = 5; // Azul

void setup()
{
    pinMode(led_R, OUTPUT);
    pinMode(led_G, OUTPUT);
    pinMode(led_B, OUTPUT);
    apagaLed(); // Comeca com tudo apagado
}

void loop()
{
    acendeVermelho();
    delay(1000);
    acendeVerde();
    delay(1000);
    acendeAzul();
    delay(1000);
    apagaLed();
    delay(1000);
}

// Funcoes auxiliares para controlar as cores
// Lembre-se: em LED RGB Anodo Comum, LOW liga e HIGH desliga

void acendeVermelho()
{
    digitalWrite(led_R, LOW);  // LIGA Vermelho
    digitalWrite(led_G, HIGH); // DESLIGA Verde
    digitalWrite(led_B, HIGH); // DESLIGA Azul
}

void acendeVerde()
{
    digitalWrite(led_R, HIGH);
    digitalWrite(led_G, LOW); // LIGA Verde
    digitalWrite(led_B, HIGH);
}

void acendeAzul()
{
    digitalWrite(led_R, HIGH);
    digitalWrite(led_G, HIGH);
    digitalWrite(led_B, LOW); // LIGA Azul
}

void apagaLed()
{
    digitalWrite(led_R, HIGH);
    digitalWrite(led_G, HIGH);
    digitalWrite(led_B, HIGH);
}