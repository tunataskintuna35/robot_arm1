int sharp1=A0;
int sharp2=A1;
int sharp3=A2;

float _sharp1;
float _sharp2;
float _sharp3;
float volts;
float cm;

#define VOLTS_PER_UNIT    .0049F        // (.0049 for 10 bit A-D) 


void setup()
{
  
  Serial.begin(9600);
}
void loop()
{
  
        _sharp1=analogRead(sharp1);
        _sharp2=analogRead(sharp2);
        _sharp3=analogRead(sharp3);
  
        serial.println("Sensor1 value:");
        serial.println(_sharp1);
        serial.println("Sensor2 value:");
        serial.println(_sharp2);
        serial.println("Sensor3 value:");
        serial.println(_sharp3);
        
        
        serial.println(lenght(_sharp1))

}

float lenght(float voltage)
{
    volts=(float)voltage * VOLTS_PER_UNIT;
    cm=60.495 * pow(volts,-1.1904);
}
 
