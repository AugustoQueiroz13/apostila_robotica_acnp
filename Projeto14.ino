// Projeto 14 - Contador Digital (Display de 7 Segmentos)
// Autor: ACNP / Prof. Augusto Queiroz

// Definicao dos pinos para cada segmento do display
// Consulte o mapa de pinos do seu display (A, B, C, D, E, F, G)
int segA = 12;
int segB = 13;
int segC = 9;
int segD = 8;
int segE = 7;
int segF = 11;
int segG = 10;

void setup()
{
    // Configura todos os pinos dos segmentos como saida
    pinMode(segA, OUTPUT);
    pinMode(segB, OUTPUT);
    pinMode(segC, OUTPUT);
    pinMode(segD, OUTPUT);
    pinMode(segE, OUTPUT);
    pinMode(segF, OUTPUT);
    pinMode(segG, OUTPUT);
}

void loop()
{
    // Chama as funcoes para desenhar cada numero de 0 a 9
    acende0();
    delay(1000);
    acende1();
    delay(1000);
    acende2();
    delay(1000);
    acende3();
    delay(1000);
    acende4();
    delay(1000);
    acende5();
    delay(1000);
    acende6();
    delay(1000);
    acende7();
    delay(1000);
    acende8();
    delay(1000);
    acende9();
    delay(1000);
}

// --- Funcoes para desenhar os numeros ---
// Nota: Para display ANODO COMUM, LOW liga e HIGH desliga.
// Se o seu for CATODO COMUM, inverta (HIGH liga, LOW desliga).

void acende0()
{
    digitalWrite(segA, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segE, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, HIGH); // O meio fica apagado
}

void acende1()
{
    digitalWrite(segA, HIGH);
    digitalWrite(segB, LOW); // Liga B
    digitalWrite(segC, LOW); // Liga C
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
}

void acende2()
{
    digitalWrite(segA, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, LOW);
    digitalWrite(segE, LOW);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, LOW);
}

void acende3()
{
    digitalWrite(segA, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, LOW);
}

void acende4()
{
    digitalWrite(segA, HIGH);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
}

void acende5()
{
    digitalWrite(segA, LOW);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
}

void acende6()
{
    digitalWrite(segA, LOW);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segE, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
}

void acende7()
{
    digitalWrite(segA, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
}

void acende8()
{
    digitalWrite(segA, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segE, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
}

void acende9()
{
    digitalWrite(segA, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
}