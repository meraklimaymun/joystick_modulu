//Önemli !!!
// Arduino'nuzun bozulmaması için DC motorlarınızı
// MUTLAKA motor sürücü ile kullanın. Bendeki motorun
// çektiği güç çok düşük olduğu için sürücüsüz kullandım.
// Bu uyarıyı dikkate almayıp sürücüsüz kullandığınız taktirde
// meydana gelebilecek hasarlardan Meraklı Maymun sorumlu değildir...

const int BUTON_PIN = 2;
const int X_PIN = 0;
const int Y_PIN = 1;
const int MOTOR=5;
int hiz=0;

void setup() {
pinMode(BUTON_PIN, INPUT);
digitalWrite(BUTON_PIN, HIGH);
pinMode(MOTOR,OUTPUT);
}

void loop() {
hiz= analogRead(X_PIN);
hiz = map(hiz,0,1023,255,0);
analogWrite(MOTOR, hiz);
}
