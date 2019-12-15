int lPin=13;
String b[50]="abc";
int i;
void setup() {
  //Serial.begin(9600);//打开串口波特率9600
  pinMode(lPin,OUTPUT);
}
void loop(){
      
      for(i=0;b[i]!="\n";i++)
      {
        if(b[i] == "a"||b[i] == "A")
        {
        digitalWrite(lPin,HIGH);
        delay(150);
        digitalWrite(lPin,LOW);
        delay(100);    
        }
      //delay(200);
      if(b[i] == "b"||b[i] == "B")
        {  
        digitalWrite(lPin,HIGH);
        delay(200);
        digitalWrite(lPin,LOW);
        delay(150);
        }
      //delay(200);
      if(b[i] == "c"||b[i]== "C")
        {
        digitalWrite(lPin,HIGH);
        delay(250);
        digitalWrite(lPin,LOW);
        delay(200);
        }
      if(b[i] == "d"||b[i] == "D")
        {
        digitalWrite(lPin,HIGH);
        delay(300);
        digitalWrite(lPin,LOW);
        delay(250);
        }
      if(b[i] == "e" ||b[i] == "E")
        {
        digitalWrite(lPin,HIGH);
        delay(350);
        digitalWrite(lPin,LOW);
        delay(300);
        }
      if(b[i] == "f" ||b[i] == "F")
        {
        digitalWrite(lPin,HIGH);
        delay(400);
        digitalWrite(lPin,LOW);
        delay(350);
        }
      if(b[i] == "g" ||b[i] == "G")
        {
        digitalWrite(lPin,HIGH);
        delay(450);
        digitalWrite(lPin,LOW);
        delay(400);
        }
      if(b[i] == "h" ||b[i]== "H")
        {
        digitalWrite(lPin,HIGH);
        delay(500);
        digitalWrite(lPin,LOW);
        delay(450);
        }
      if(b[i] == "i" ||b[i] == "I")
        {
        digitalWrite(lPin,HIGH);
        delay(550);
        digitalWrite(lPin,LOW);
        delay(500);
        }
      if(b[i] == "j" ||b[i] == "J")
        {
        digitalWrite(lPin,HIGH);
        delay(600);
        digitalWrite(lPin,LOW);
        delay(550);
        }
      if(b[i] == "k" ||b[i] == "K")
        {
        digitalWrite(lPin,HIGH);
        delay(650);
        digitalWrite(lPin,LOW);
        delay(600);
        }
        if(b[i] == "l" ||b[i] == "L")
        {
        digitalWrite(lPin,HIGH);
        delay(700);
        digitalWrite(lPin,LOW);
        delay(650);
        }
        if(b[i] == "m" ||b[i] == "M")
        {
        digitalWrite(lPin,HIGH);
        delay(750);
        digitalWrite(lPin,LOW);
        delay(700);
        }
        if(b[i] == "n" ||b[i] == "M")
        {
        digitalWrite(lPin,HIGH);
        delay(800);
        digitalWrite(lPin,LOW);
        delay(750);
        }
        if(b[i] == "o" ||b[i] == "O")
        {
        digitalWrite(lPin,HIGH);
        delay(850);
        digitalWrite(lPin,LOW);
        delay(800);
        }
        if(b[i] == "p" ||b[i] == "P")
        {
        digitalWrite(lPin,HIGH);
        delay(900);
        digitalWrite(lPin,LOW);
        delay(850);
        }
        if(b[i] == "q" ||b[i] == "Q")
        {
        digitalWrite(lPin,HIGH);
        delay(950);
        digitalWrite(lPin,LOW);
        delay(900);
        }
        if(b[i] == "r" ||b[i] == "R")
        {
        digitalWrite(lPin,HIGH);
        delay(1000);
        digitalWrite(lPin,LOW);
        delay(950);
        }
        if(b[i] == "s" ||b[i] == "S")
        {
        digitalWrite(lPin,HIGH);
        delay(1050);
        digitalWrite(lPin,LOW);
        delay(1000);
        }
        if(b[i] == "t" ||b[i] == "T")
        {
        digitalWrite(lPin,HIGH);
        delay(1100);
        digitalWrite(lPin,LOW);
        delay(1050);
        }
        if(b[i] == "u" ||b[i] == "U")
        {
        digitalWrite(lPin,HIGH);
        delay(1150);
        digitalWrite(lPin,LOW);
        delay(1100);
        }
        if(b[i] == "v" ||b[i] == "V")
        {
        digitalWrite(lPin,HIGH);
        delay(1200);
        digitalWrite(lPin,LOW);
        delay(1150);
        }
        if(b[i] == "w" ||b[i] == "W")
        {
        digitalWrite(lPin,HIGH);
        delay(1250);
        digitalWrite(lPin,LOW);
        delay(1200);
        }
        if(b[i] == "x" ||b[i] == "X")
        {
        digitalWrite(lPin,HIGH);
        delay(1300);
        digitalWrite(lPin,LOW);
        delay(1250);
        }
        if(b[i] == "y" ||b[i] == "Y")
        {
        digitalWrite(lPin,HIGH);
        delay(1350);
        digitalWrite(lPin,LOW);
        delay(1300);
        }
        if(b[i] == "z" ||b[i] == "Z")
        {
        digitalWrite(lPin,HIGH);
        delay(1400);
        digitalWrite(lPin,LOW);
        delay(1350);
        }
     //delay(200);
      }
}
