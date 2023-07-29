int ch1=32;
int ch2=33;
int ch3=25;
int ch4=26;
int ch5=27;

int m1=16;
int m2=17;
int m3=18;
int m4=19;

int gscl=23;
int gsda=22;

int ch1Input;
int ch2Input;
int ch3Input;
int ch4Input;
int ch5Input;

void setup() {
  Serial.begin(115200);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  // input receiver channel
  pinMode(ch1,INPUT);
  pinMode(ch2,INPUT);
  pinMode(ch3,INPUT);
  pinMode(ch4,INPUT);

  // output motor channel
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);

}


// the loop function runs over and over again forever
void loop() {
  //Channel Input
  ch1Input=pulseIn(ch1,1,30000);
  ch2Input=pulseIn(ch2,1,30000);
  ch3Input=pulseIn(ch3,1,30000);
  ch4Input=pulseIn(ch4,1,30000);
  ch5Input=pulseIn(ch5,1,30000);
  Serial.println("CH1: "+String(ch1Input));
  Serial.println("CH2: "+String(ch2Input));
  Serial.println("CH3: "+String(ch3Input));
  Serial.println("CH4: "+String(ch4Input));
  Serial.println("CH5: "+String(ch5Input));
  
  Serial.println("--------------------------------");

}