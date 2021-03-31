# 1 "I:\\auduinocode\\lcd\\lcd.ino"
int i;
# 3 "I:\\auduinocode\\lcd\\lcd.ino" 2

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(2,3,4,5,6,7);

void setup() {
pinMode(13, 0x1);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  int j=0;
  int k =0;
  for(i=0;i<10;i++)
  {
    if(j%2==0)
    {
      pinMode(8,0x1);
      digitalWrite(8,1);
      k++;
     /* if(k%2!=0)

      {

        pinMode(8,OUTPUT);

        digitalWrite(8,0);

        }*/
# 28 "I:\\auduinocode\\lcd\\lcd.ino"
    }

    else
    {
      pinMode(8,0x1);
      digitalWrite(8,0);
    }
 lcd.setCursor(0,0);
 lcd.print("Jayant");
 lcd.setCursor(0,1);
 lcd.print(j);
 delay(1000);
 j++;
 lcd.clear();

  }
}
