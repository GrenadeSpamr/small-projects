// Random Tones Generator with LEDs
// the "infinite monkey theorem" comes to mind

int randDelay;
int toneOne, toneTwo, toneThree, toneFour, toneFive;
int toneSix, toneSeven, toneEight, toneNine, toneTen;
int cycle;

int RED = 0, GREEN = 15, YELLOW = 12; // LED pins
int SND = 5; // Speaker or Buzzer pin

void setup() {
  pinMode(SND, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);

  cycle = 0; // achieved count of cycles
}

void loop() {
  Serial.begin(9600);
  
  randDelay = random(200, 1000);
  
  toneOne = random(100, 1500);
  toneTwo = random(100, 1500);
  toneThree = random(100, 1500);
  toneFour = random(100, 1500);
  toneFive = random(100, 1500);
  toneSix = random(100, 1500);
  toneSeven = random(100, 1500);
  toneEight = random(100, 1500);
  toneNine = random(100, 1500);
  toneTen = random(100, 1500);

  // nth of Cycle
  Serial.print(cycle);
  Serial.println(" Cycle(s) Completed.\n");
  
  Serial.print("Delay: ");
  Serial.println(randDelay);

  // Conditions - First
  tone(SND, toneOne);
  if (toneOne <= 500) {
    digitalWrite(GREEN, HIGH);
    Serial.print("Green at ");
  }
  else if (toneOne >= 500 && toneOne <= 1000) {
    digitalWrite(YELLOW, HIGH);
    Serial.print("Yellow at ");
  }
  else if (toneOne >= 1000 && toneOne <= 1500) {
    digitalWrite(RED, HIGH);
    Serial.print("Red at ");
  }
  
  Serial.print(toneOne);
  Serial.println(" Hz");
  delay(randDelay);

  // Pin RGY Low - First
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);

  // Conditions - Second
  tone(SND, toneTwo);
  if (toneTwo <= 500) {
    digitalWrite(GREEN, HIGH);
    Serial.print("Green at ");
  }
  else if (toneTwo >= 500 && toneTwo <= 1000) {
    digitalWrite(YELLOW, HIGH);
    Serial.print("Yellow at ");
  }
  else if (toneTwo >= 1000 && toneTwo <= 1500) {
    digitalWrite(RED, HIGH);
    Serial.print("Red at ");
  }
  
  Serial.print(toneTwo);
  Serial.println(" Hz");
  delay(randDelay);

  // Pin RGY Low - Second
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);

  // Conditions - Third
  tone(SND, toneThree);
  if (toneThree <= 500) {
    digitalWrite(GREEN, HIGH);
    Serial.print("Green at ");
  }
  else if (toneThree >= 500 && toneThree <= 1000) {
    digitalWrite(YELLOW, HIGH);
    Serial.print("Yellow at ");
  }
  else if (toneThree >= 1000 && toneThree <= 1500) {
    digitalWrite(RED, HIGH);
    Serial.print("Red at ");
  }

  Serial.print(toneThree);
  Serial.println(" Hz");
  delay(randDelay);
  
  // Pin RGY Low - Third
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);

  // Conditions - Fourth
  tone(SND, toneFour);
  if (toneFour <= 500) {
    digitalWrite(GREEN, HIGH);
    Serial.print("Green at ");
  }
  else if (toneFour >= 500 && toneFour <= 1000) {
    digitalWrite(YELLOW, HIGH);
    Serial.print("Yellow at ");
  }
  else if (toneFour >= 1000 && toneFour <= 1500) {
    digitalWrite(RED, HIGH);
    Serial.print("Red at ");
  }
  
  Serial.print(toneFour);
  Serial.println(" Hz");
  delay(randDelay);
  
  // Pin RGY Low - Fourth
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);

  // Conditions - Fifth
  tone(SND, toneFive);
  if (toneFive <= 500) {
    digitalWrite(GREEN, HIGH);
    Serial.print("Green at ");
  }
  else if (toneFive >= 500 && toneFive <= 1000) {
    digitalWrite(YELLOW, HIGH);
    Serial.print("Yellow at ");
  }
  else if (toneFive >= 1000 && toneFive <= 1500) {
    digitalWrite(RED, HIGH);
    Serial.print("Red at ");
  }
  
  Serial.print(toneFive);
  Serial.println(" Hz");
  delay(randDelay);

  // Pin RGY Low - Fifth
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);

  // Conditions - Sixth
  tone(SND, toneSix);
  if (toneSix <= 500) {
    digitalWrite(GREEN, HIGH);
    Serial.print("Green at ");
  }
  else if (toneSix >= 500 && toneSix <= 1000) {
    digitalWrite(YELLOW, HIGH);
    Serial.print("Yellow at ");
  }
  else if (toneSix >= 1000 && toneSix <= 1500) {
    digitalWrite(RED, HIGH);
    Serial.print("Red at ");
  }

  Serial.print(toneSix);
  Serial.println(" Hz");
  delay(randDelay);

  // Pin RGY Low - Sixth
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);

  // Conditions - Seventh
  tone(SND, toneSeven);
  if (toneSeven <= 500) {
    digitalWrite(GREEN, HIGH);
    Serial.print("Green at ");
  }
  else if (toneSeven >= 500 && toneSeven <= 1000) {
    digitalWrite(YELLOW, HIGH);
    Serial.print("Yellow at ");
  }
  else if (toneSeven >= 1000 && toneSeven <= 1500) {
    digitalWrite(RED, HIGH);
    Serial.print("Red at ");
  }

  Serial.print(toneSeven);
  Serial.println(" Hz");
  delay(randDelay);
  
  // Pin RGY Low - Seventh
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);

  // Conditions - Eighth
  tone(SND, toneEight);
  if (toneEight <= 500) {
    digitalWrite(GREEN, HIGH);
    Serial.print("Green at ");
  }
  else if (toneEight >= 500 && toneEight <= 1000) {
    digitalWrite(YELLOW, HIGH);
    Serial.print("Yellow at ");
  }
  else if (toneEight >= 1000 && toneEight <= 1500) {
    digitalWrite(RED, HIGH);
    Serial.print("Red at ");
  }

  Serial.print(toneEight);
  Serial.println(" Hz");
  delay(randDelay);

  // Pin RGY Low - Eighth
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);

  // Conditions - Ninth
  tone(SND, toneNine);
  if (toneNine <= 500) {
    digitalWrite(GREEN, HIGH);
    Serial.print("Green at ");
  }
  else if (toneNine >= 500 && toneNine <= 1000) {
    digitalWrite(YELLOW, HIGH);
    Serial.print("Yellow at ");
  }
  else if (toneNine >= 1000 && toneNine <= 1500) {
    digitalWrite(RED, HIGH);
    Serial.print("Red at ");
  }

  Serial.print(toneNine);
  Serial.println(" Hz");
  delay(randDelay);

  // Pin RGY Low - Ninth
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);

  // Conditions - Tenth
  tone(SND, toneTen);
  if (toneTen <= 500) {
    digitalWrite(GREEN, HIGH);
    Serial.print("Green at ");
  }
  else if (toneTen >= 500 && toneTen <= 1000) {
    digitalWrite(YELLOW, HIGH);
    Serial.print("Yellow at ");
  }
  else if (toneTen >= 1000 && toneTen <= 1500) {
    digitalWrite(RED, HIGH);
    Serial.print("Red at ");
  }

  Serial.print(toneTen);
  Serial.println(" Hz");

  // Suppress All
  delay(randDelay);
  
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);
  noTone(SND);

  Serial.println("\n+1 Cycle");
  cycle++;
  
  delay(2000);

}
