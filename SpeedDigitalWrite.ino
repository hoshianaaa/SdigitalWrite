
void SdigitalWrite(int pin, bool state) {
  //PORT- |= _BV(-);
  if (state == true) {
    if (pin == 2)PORTE |= _BV(4);
    if (pin == 3)PORTE |= _BV(5);
    if (pin == 4)PORTG |= _BV(5);
    if (pin == 5)PORTE |= _BV(3);
    if (pin == 6)PORTH |= _BV(3);
    if (pin == 7)PORTH |= _BV(4);
    if (pin == 8)PORTH |= _BV(5);
    if (pin == 9)PORTH |= _BV(6);
    if (pin == 10)PORTB |= _BV(4);
    if (pin == 11)PORTB |= _BV(5);
    if (pin == 12)PORTB |= _BV(6);
    if (pin == 13)PORTB |= _BV(7);
  }
  if (state == false) {
    if (pin == 2)PORTE &= ~_BV(4);
    if (pin == 3)PORTE &= ~_BV(5);
    if (pin == 4)PORTG &= ~_BV(5);
    if (pin == 5)PORTE &= ~_BV(3);
    if (pin == 6)PORTH &= ~_BV(3);
    if (pin == 7)PORTH &= ~_BV(4);
    if (pin == 8)PORTH &= ~_BV(5);
    if (pin == 9)PORTH &= ~_BV(6);
    if (pin == 10)PORTB &= ~_BV(4);
    if (pin == 11)PORTB &= ~_BV(5);
    if (pin == 12)PORTB &= ~_BV(6);
    if (pin == 13)PORTB &= ~_BV(7);
  }
}


void setup() {
  // put your setup code here, to run once:
  for(int i=2;i<14;i++)pinMode(i,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=2;i<14;i++)SdigitalWrite(i,HIGH);
  delay(1000);
  for(int i=2;i<14;i++)SdigitalWrite(i,LOW);
  delay(1000);
}
