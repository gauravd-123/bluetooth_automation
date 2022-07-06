String text;

void setup(){
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
 }

void loop(){
  while(Serial.available()){
    delay(10);
    char c = Serial.read(); 
    text +=c;
    }
    
    if(text.length() > 0){
      Serial.println(text);
        if(text == "on1"){
          digitalWrite(13, HIGH);
          }
        if(text == "off1"){
          digitalWrite(13, LOW);
          }
          if(text == "on2"){
          digitalWrite(12, HIGH);
          }
        if(text == "off2"){
          digitalWrite(12, LOW);
          }
          if(text == "on3"){
          digitalWrite(11, HIGH);
          }
        if(text == "off3"){
          digitalWrite(11, LOW);
          }
    text="";
      }
  
  }
