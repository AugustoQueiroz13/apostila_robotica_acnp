// Projeto 12 - Medindo a Temperatura com NTC
// Autor: ACNP / Prof. Augusto Queiroz

// O valor Beta deve ser consultado no datasheet do seu NTC.
// Para a maioria dos kits Arduino, 3950 ou 3940 funciona bem.
#define BETA 3950.0
#define RESISTOR_SERIE 10000.0 // Valor do resistor de 10k usado no divisor de tensao

int pinoSensor = A0; // Pino analogico onde o divisor de tensao esta ligado

void setup()
{
    Serial.begin(9600); // Inicia a comunicacao com o PC para mostrar os dados
}

void loop()
{
    // 1. Ler o valor bruto do Arduino (0 a 1023)
    int leituraAnalogica = analogRead(pinoSensor);

    // 2. Converter a leitura analogica para Resistencia do NTC
    // Formula derivada do divisor de tensao
    double resistenciaNTC = RESISTOR_SERIE / ((1023.0 / leituraAnalogica) - 1);

    // 3. Calcular a Temperatura usando a equacao Beta
    // T = 1 / ( (1/T0) + (1/Beta) * ln(R/R0) )
    double temperatura;
    temperatura = log(resistenciaNTC / 10000.0); // ln(R/R0) - R0 eh 10k a 25C
    temperatura /= BETA;                         // 1/Beta * ln(R/R0)
    temperatura += 1.0 / (25 + 273.15);          // + 1/T0 (T0 = 25C em Kelvin)
    temperatura = 1.0 / temperatura;             // Inverte tudo para ter T
    temperatura -= 273.15;                       // Converte de Kelvin para Celsius

    // 4. Mostrar no Monitor Serial
    Serial.print("Temperatura: ");
    Serial.print(temperatura);
    Serial.println(" C");

    delay(1000); // Atualiza a cada 1 segundo
}