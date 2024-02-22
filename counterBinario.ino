void setup() {

  for (int i=2; i<10; i ++){
    pinMode(i,OUTPUT);
  }

  pinMode(10,INPUT);
}

void loop() {
//ANIMAZIONE
  for (int i=2; i<10; i ++){
    delay(20);
    digitalWrite(i, HIGH); // 5v
  }

  for (int i=2; i<10; i ++){
    digitalWrite(i, LOW);
    delay(20);
  }

  for (int i=9; i>1; i --){
    delay(20);
    digitalWrite(i, HIGH);
  }

  for (int i=9; i>1; i --){
    digitalWrite(i, LOW);
    delay(20);
  }

//COUNTER BINARIO

  for(byte i=0;i<255;i++) 
   { 

    byte a=i%2;      
    byte b=i/2 %2;     
    byte c=i/4 %2;        
    byte d=i/8 %2;
    byte e=i/16 %2;
    byte f=i/32 %2;
    byte g=i/64 %2;
    byte h=i/128 %2;
      
    digitalWrite(2,a); 
    digitalWrite(3,b); 
    digitalWrite(4,c); 
    digitalWrite(5,d); 
    digitalWrite(6,e); 
    digitalWrite(7,f); 
    digitalWrite(8,g);
    digitalWrite(9,h);
   
    delay(170);     
  }
}

//======mibbbbbn======//
