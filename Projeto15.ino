// Projeto 15 - Dado Eletrônico
// Autor: ACNP / Prof. Augusto Queiroz

// Definicao dos pinos para cada segmento do display (igual ao Projeto 14)
int segA = 12;
int segB = 13;
int segC = 9;
int segD = 8;
int segE = 7;
int segF = 11;
int segG = 10;

// Pino do Sensor de Vibracao/Inclinacao
int pinoTilt = 5;

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

    // Configura o sensor tilt como entrada
    // Se o seu modulo nao tiver resistor, use INPUT_PULLUP
    pinMode(pinoTilt, INPUT);

    // Inicia o gerador de numeros aleatorios com um ruido de uma porta vazia
    randomSeed(analogRead(A5));
}

void loop()
{
    // Se o sensor detectar movimento (agitar o dado)
    if (digitalRead(pinoTilt) == HIGH)
    {
        jogaDado(); // Chama a funcao que faz o "sorteio"
    }
}

void jogaDado()
{
    // Faz uma animacao rapida antes de parar (efeito de roleta)
    // Repete 20 vezes, ficando cada vez mais lento
    for (int i = 0; i < 20; i++)
    {
        int sorteio = random(1, 7); // Sorteia um numero entre 1 e 6 (padrao de dado)

        // Mostra o numero sorteado momentaneamente
        if (sorteio == 1)
            acende1();
        if (sorteio == 2)
            acende2();
        if (sorteio == 3)
            acende3();
        if (sorteio == 4)
            acende4();
        if (sorteio == 5)
            acende5();
        if (sorteio == 6)
            acende6();

        // O tempo de espera aumenta a cada volta do loop (i * 10)
        // Começa rapido (50ms) e termina lento (250ms)
        delay(50 + (i * 10));
    }
}

// --- Funcoes para desenhar os numeros (Reutilizadas do Projeto 14) ---

void acende1()
{
    digitalWrite(segA, HIGH);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
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

// Funcoes extras caso queira fazer um dado de RPG de 0 a 9

void acende0()
{
    digitalWrite(segA, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segD, LOW);
    digitalWrite(segE, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, HIGH);
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