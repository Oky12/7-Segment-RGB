#include <Digital7SegRGB.h>
Digital7SegRGB RGB;
#define PIN 3;
#define DIGIT 1;

void setup() {
  RGB.begin(DIGIT, PIN);
}

void loop() {
  //Counting 0~9
    for (int i=0; i<10; i++){
      //print Number on Digit 1st with BlueColor
      RGB.PrintDigit(i, 1, 0, 0, 50); 
      delay(1000);
   }
}
