#define AIA 3 //définition des broches utilisées
#define AIB 4 //pour piloter les moteurs
#define capteurh 7
#define capteurb 8
int etat1;
int etat2;
int et1;
int et2;
byte speed = 255;
void setup()
{
pinMode(AIA, OUTPUT); //initialisation des broches en sorties
pinMode(AIB, OUTPUT);
pinMode(capteurh, INPUT_PULLUP);
pinMode(capteurb, INPUT_PULLUP)
etat1 = digitalRead(capteurh); // Rappel : capteur = 1
while (etat1 == HIGH) {
  recule();
  etat1 = digitalRead(capteurh); 
}}
void loop()
{
etat1 = digitalRead(capteurh); // Rappel : capteur = 1
while (etat1 == HIGH) {
  recule();
  etat1 = digitalRead(capteurh); 
}
stopp();
delay(500);
etat2 = digitalRead(capteurb); // Rappel : capteur = 2
while (etat2 == HIGH) {
  avance();
  etat2 = digitalRead(capteurb);
}
stopp();
delay(500);
}
void recule()
{
analogWrite(AIA, 0);
analogWrite(AIB, speed);
}
void avance()
{
analogWrite(AIA, speed);
analogWrite(AIB, 0);
}
void stopp()
{
analogWrite(AIA, 0);
analogWrite(AIB, 0);
}
