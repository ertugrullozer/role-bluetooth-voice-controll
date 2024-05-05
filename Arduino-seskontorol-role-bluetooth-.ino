#define led 7
#define led1 4
String gelenVeri;
void setup() {
 pinMode(led,OUTPUT);
 pinMode(led1,OUTPUT);

Serial.begin(9600);
}

void loop() {

 if(Serial.available()){
 
  gelenVeri= Serial.readString();
   
 }
if(gelenVeri=="led yak"){
  digitalWrite(led,HIGH);
   digitalWrite(led1,HIGH);
}
if(gelenVeri=="led kapat"){
  digitalWrite(led,LOW);
  digitalWrite(led1,LOW);


}
}
