#ifndef Digital7SegRGB_h
#define Digital7SegRGB_h
#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

class Digital7SegRGB {
public:
	void begin(int Pin, int Digit);
	void Clear();
	void SetSeg(int Seg, int R, int G, int B);
	void PrintDigit(int Value, int Digit, int R, int G, int B);
private:
    int TempValue;
	int PIXEL;
	int pin;
};
#endif