#include <Digital7SegRGB.h>
Digital7SegRGB RGB;

void setup() {
  RGB.begin(7, 3);
  RGB.Clear();
}

void loop() {
  //Counting 0~9
    for (int i=0; i<10; i++){
      //print Number on Digit 1st with BlueColor
      RGB.PrintDigit(i, 1, 0, 0, 50); 
      delay(1000);
   }
}
