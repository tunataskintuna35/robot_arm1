#define VOLTS_PER_UNIT    .0049F        // (.0049 for 10 bit A-D) 
float volts;
float inches;
float cm;

 volts = (float)proxSens * VOLTS_PER_UNIT; // ("proxSens" is from analog read)
 
 cm = 60.495 * pow(volts,-1.1904);     // same in cm
 if (volts < .2) inches = -1.0;        // out of range  
