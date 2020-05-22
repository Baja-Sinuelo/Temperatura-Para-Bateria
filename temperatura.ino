//Pinos 
int SensorBaixo1 = A1;
int SensorBaixo2 = A2;
int SensorCima1  = A3;
int SensorCima2  = A4;
float TempB1 = 0;
float TempB2 = 0;
float TempC1 = 0;
float TempC2 = 0;

int linha = 0;
int LABEL = 1;

void setup() {

    Serial.begin(9600);

    Serial.println("CLEARDATA");
    Serial.println("LABEL,Hora,Baixo1,Baixo2,Cima1,Cima2");

}
void leituras(){
    TempB1 = (analogRead(SensorBaixo1) * 0.0048828125 * 100);
    TempB2 = (analogRead(SensorBaixo2) * 0.0048828125 * 100);
    TempC1 = (analogRead(SensorCima1)  * 0.0048828125 * 100);
    TempC2 = (analogRead(SensorCima2)  * 0.0048828125 * 100);
}
void printserial(){
    Serial.print("DATA,TIME,");
    Serial.print(TempB1);
    Serial.print(",");
    Serial.print(TempB2);
    Serial.print(",");
    Serial.print(TempC1);
    Serial.print(",");
    Serial.println(TempC2);
}
void loop() {

    leituras();
    printserial();
    delay(2000);
}
