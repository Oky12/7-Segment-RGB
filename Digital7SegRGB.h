#ifndef Digital7SegRGB_h
#define Digital7SegRGB_h
#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

class Digital7SegRGB {
public:
	void begin(uint16_t n, uint8_t p);
	void Clear();
	void SetSeg(uint16_t Seg, uint8_t R, uint8_t G, uint8_t B);
	void PrintDigit(int Value, int Digit, int R, int G, int B);
private:
    int TempValue;
	int PIXEL;
	int pin;
	Adafruit_NeoPixel strip;
};
#endif
