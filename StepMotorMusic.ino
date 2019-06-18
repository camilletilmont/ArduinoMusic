#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38
#define X_MIN_PIN           3
#define X_MAX_PIN           2

#define Y_STEP_PIN         60
#define Y_DIR_PIN          61
#define Y_ENABLE_PIN       56
#define Y_MIN_PIN          14
#define Y_MAX_PIN          15

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       62
#define Z_MIN_PIN          18
#define Z_MAX_PIN          19

#define E_STEP_PIN         26
#define E_DIR_PIN          28
#define E_ENABLE_PIN       24

#define Q_STEP_PIN         36
#define Q_DIR_PIN          34
#define Q_ENABLE_PIN       30

#define SDPOWER            -1
#define SDSS               53
#define LED_PIN            13

#define FAN_PIN            9

#define PS_ON_PIN          12
#define KILL_PIN           -1

#define HEATER_0_PIN       10
#define HEATER_1_PIN       8
#define TEMP_0_PIN          13   // ANALOG NUMBERING
#define TEMP_1_PIN          14   // ANALOG NUMBERING

void MIb1(int xMax, int pin, int pinDir, int delai){
  // MIb 1
  digitalWrite(pinDir,HIGH);
  
  for(int x = 0; x < xMax; x++) {
    digitalWrite(pin,HIGH); 
    delayMicroseconds(795); 
    digitalWrite(pin,LOW); 
    delayMicroseconds(795); 
  }
  delay(delai); // One second delay
}


void MI1(int xMax, int pin, int pinDir, int delai){
  // MI 1
  digitalWrite(pinDir,HIGH);
  
  for(int x = 0; x < xMax; x++) {
    digitalWrite(pin,HIGH); 
    delayMicroseconds(750); 
    digitalWrite(pin,LOW); 
    delayMicroseconds(750); 
  }
  delay(delai); // One second delay
}

void FA1(int xMax, int pin, int pinDir, int delai){
  // FA 1
  digitalWrite(pinDir,HIGH);
  
  for(int x = 0; x < xMax; x++) {
    digitalWrite(pin,HIGH); 
    delayMicroseconds(708); 
    digitalWrite(pin,LOW); 
    delayMicroseconds(708); 
  }
  delay(delai); // One second delay
}

void FAd1(int xMax, int pin, int pinDir, int delai){
  // FAd 1
  digitalWrite(pinDir,HIGH);
  
  for(int x = 0; x < xMax; x++) {
    digitalWrite(pin,HIGH); 
    delayMicroseconds(668); 
    digitalWrite(pin,LOW); 
    delayMicroseconds(668); 
  }
  delay(delai); // One second delay
}

void SOL1(int xMax, int pin, int pinDir, int delai){
  // SOL 1
  digitalWrite(pinDir,HIGH);
  
  for(int x = 0; x < xMax; x++) {
    digitalWrite(pin,HIGH); 
    delayMicroseconds(630); 
    digitalWrite(pin,LOW); 
    delayMicroseconds(630); 
  }
  delay(delai); // One second delay
}


void LAb1(int xMax, int pin, int pinDir, int delai){
  // LAb 1
  digitalWrite(pinDir,HIGH);
  
  for(int x = 0; x < xMax; x++) {
    digitalWrite(pin,HIGH); 
    delayMicroseconds(596); 
    digitalWrite(pin,LOW); 
    delayMicroseconds(596); 
  }
  delay(delai); // One second delay
}


void LA1(int xMax, int pin, int pinDir, int delai){
  // LA 1
  digitalWrite(pinDir,HIGH);
  
  for(int x = 0; x < xMax; x++) {
    digitalWrite(pin,HIGH); 
    delayMicroseconds(561); 
    digitalWrite(pin,LOW); 
    delayMicroseconds(561); 
  }
  delay(delai); // One second delay
}



void SIb1(int xMax, int pin, int pinDir, int delai){
  // SIb 1 
  digitalWrite(pinDir,HIGH);
  
  for(int x = 0; x < xMax; x++) {
    digitalWrite(pin,HIGH); 
    delayMicroseconds(530); 
    digitalWrite(pin,LOW); 
    delayMicroseconds(530); 
  }
  delay(delai); // One second delay
}

void SI1(int xMax, int pin, int pinDir, int delai){
  // SI 1 
  digitalWrite(pinDir,HIGH);
  
  for(int x = 0; x < xMax; x++) {
    digitalWrite(pin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(pin,LOW); 
    delayMicroseconds(500); 
  }
  delay(delai); // One second delay
}

void DO2(int xMax, int pin, int pinDir, int delai){
  // DO 2 
  digitalWrite(pinDir,HIGH);
  
  for(int x = 0; x < xMax; x++) {
    digitalWrite(pin,HIGH); 
    delayMicroseconds(472); 
    digitalWrite(pin,LOW); 
    delayMicroseconds(472); 
  }
  delay(delai); // One second delay
}

void DOd2(int xMax, int pin, int pinDir, int delai){
  // DOd 2 
  digitalWrite(pinDir,HIGH);
  
  for(int x = 0; x < xMax; x++) {
    digitalWrite(pin,HIGH); 
    delayMicroseconds(446); 
    digitalWrite(pin,LOW); 
    delayMicroseconds(446); 
  }
  delay(delai); // One second delay
}

void RE2(int xMax, int pin, int pinDir, int delai){
  // RE 2 
  digitalWrite(pinDir,HIGH);
  
  for(int x = 0; x < xMax; x++) {
    digitalWrite(pin,HIGH); 
    delayMicroseconds(420); 
    digitalWrite(pin,LOW); 
    delayMicroseconds(420); 
  }
  delay(delai); // One second delay
}

void MIb2(int xMax, int pin, int pinDir, int delai){
  // MIb 2 
  digitalWrite(pinDir,HIGH);
  
  for(int x = 0; x < xMax; x++) {
    digitalWrite(pin,HIGH); 
    delayMicroseconds(397); 
    digitalWrite(pin,LOW); 
    delayMicroseconds(397); 
  }
  delay(delai); // One second delay
}

void MI2(int xMax, int pin, int pinDir, int delai){
  // MI 2 
  digitalWrite(pinDir,HIGH);
  
  for(int x = 0; x < xMax; x++) {
    digitalWrite(pin,HIGH); 
    delayMicroseconds(374); 
    digitalWrite(pin,LOW); 
    delayMicroseconds(374); 
  }
  delay(delai); // One second delay
}

void FA2(int xMax, int pin, int pinDir, int delai){
  // FA 2 
  digitalWrite(pinDir,HIGH);
  
  for(int x = 0; x < xMax; x++) {
    digitalWrite(pin,HIGH); 
    delayMicroseconds(352); 
    digitalWrite(pin,LOW); 
    delayMicroseconds(352); 
  }
  delay(delai); // One second delay
}

void FAd2(int xMax, int pin, int pinDir, int delai){
  // FAd 2 
  digitalWrite(pinDir,HIGH);
  
  for(int x = 0; x < xMax; x++) {
    digitalWrite(pin,HIGH); 
    delayMicroseconds(332); 
    digitalWrite(pin,LOW); 
    delayMicroseconds(332); 
  }
  delay(delai); // One second delay
}

void SOL2(int xMax, int pin, int pinDir, int delai){
  // SOL 2 
  digitalWrite(pinDir,HIGH);
  
  for(int x = 0; x < xMax; x++) {
    digitalWrite(pin,HIGH); 
    delayMicroseconds(314); 
    digitalWrite(pin,LOW); 
    delayMicroseconds(314); 
  }
  delay(delai); // One second delay
}

void LAb2(int xMax, int pin, int pinDir, int delai){
  // LAb 2 
  digitalWrite(pinDir,HIGH);
  
  for(int x = 0; x < xMax; x++) {
    digitalWrite(pin,HIGH); 
    delayMicroseconds(297); 
    digitalWrite(pin,LOW); 
    delayMicroseconds(297); 
  }
  delay(delai); // One second delay
}


void LA2(int xMax, int pin, int pinDir, int delai){
  // LA 2 
  digitalWrite(pinDir,HIGH);
  
  for(int x = 0; x < xMax; x++) {
    digitalWrite(pin,HIGH); 
    delayMicroseconds(280); 
    digitalWrite(pin,LOW); 
    delayMicroseconds(280); 
  }
  delay(delai); // One second delay
}

void SI2(int xMax, int pin, int pinDir, int delai){
  // SI 2 
  digitalWrite(pinDir,HIGH);
  
  for(int x = 0; x < xMax; x++) {
    digitalWrite(pin,HIGH); 
    delayMicroseconds(248); 
    digitalWrite(pin,LOW); 
    delayMicroseconds(248); 
  }
  delay(delai); // One second delay
}




void setup() {
  pinMode(FAN_PIN , OUTPUT);
  pinMode(HEATER_0_PIN , OUTPUT);
  pinMode(HEATER_1_PIN , OUTPUT);
  pinMode(LED_PIN  , OUTPUT);
  
  pinMode(X_STEP_PIN  , OUTPUT);
  pinMode(X_DIR_PIN    , OUTPUT);
  pinMode(X_ENABLE_PIN    , OUTPUT);
  
  pinMode(Y_STEP_PIN  , OUTPUT);
  pinMode(Y_DIR_PIN    , OUTPUT);
  pinMode(Y_ENABLE_PIN    , OUTPUT);
  
  pinMode(Z_STEP_PIN  , OUTPUT);
  pinMode(Z_DIR_PIN    , OUTPUT);
  pinMode(Z_ENABLE_PIN    , OUTPUT);
  
  pinMode(E_STEP_PIN  , OUTPUT);
  pinMode(E_DIR_PIN    , OUTPUT);
  pinMode(E_ENABLE_PIN    , OUTPUT);
  
  pinMode(Q_STEP_PIN  , OUTPUT);
  pinMode(Q_DIR_PIN    , OUTPUT);
  pinMode(Q_ENABLE_PIN    , OUTPUT);
  
   digitalWrite(X_ENABLE_PIN    , LOW);
    digitalWrite(Y_ENABLE_PIN    , LOW);
    digitalWrite(Z_ENABLE_PIN    , LOW);
    digitalWrite(E_ENABLE_PIN    , LOW);
    digitalWrite(Q_ENABLE_PIN    , LOW);
}





void loop () {
  MI1(80,54,55,50);
  LA1(150,54,55,50);
  MI1(80,54,55,50);
  SI1(150,54,55,50);
  MI1(100,54,55,50);
  SOL1(100,54,55,50);
  LA1(100,54,55,80);
  MI1(100,54,55,50);
  DO2(150,54,55,50);
  MI1(80,54,55,50);
  RE2(150,54,55,50);
  MI1(100,54,55,50);
  SI1(150,54,55,50);
  DO2(150,54,55,60);
  //LA1(1000,54,55,30);
  //MI1(1000,54,55,30);
  //MIb1(1000,54,55,30);
  


 
}
