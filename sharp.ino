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
  
        Serial.println("Sensor1 value:");
        Serial.println(_sharp1);
        Serial.println("Sensor2 value:");
        Serial.println(_sharp2);
        Serial.println("Sensor3 value:");
        Serial.println(_sharp3);
        
        
        float temp=lenght(_sharp1);
        Serial.println(temp);
}

float lenght(float voltage)
{
    volts=(float)voltage * VOLTS_PER_UNIT;
    cm=60.495 * pow(volts,-1.1904);
    return cm;
}
