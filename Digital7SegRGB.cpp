#include "Digital7SegRGB.h"
#include <Adafruit_NeoPixel.h>
#define DEBUG 0

Adafruit_NeoPixel strip;
void Digital7SegRGB::begin(uint16_t n, uint8_t p) {
	switch (n)
	{
	case 1:
		PIXEL = 7;
		break;
	case 2:
		PIXEL = 14;
		break;
	case 3:
		PIXEL = 21;
		break;
	case 4:
		PIXEL = 28;
		break;
	}
	strip = Adafruit_NeoPixel(PIXEL, p, NEO_GRB + NEO_KHZ800);
	strip.begin();
	strip.clear();
	if (DEBUG == 1) {
		Serial.println("RGB Start on Pin");
		Serial.println(p);

	}
}

void Digital7SegRGB::Clear() {
	strip.clear();
	if (DEBUG == 1) {
		Serial.println("Clear LED buffer");
	}
}

void Digital7SegRGB::SetSeg(uint16_t Seg, uint8_t R, uint8_t G, uint8_t B) {
	strip.setPixelColor(Seg, R, G, B);
	strip.show();
}

void Digital7SegRGB::PrintDigit(int Value, int Digit, int R, int G, int B) {
	if (DEBUG == 1) { Serial.print("Print Value "); Serial.println(Value); }
	if (Digit == 1) {
		switch (Value) {
		case 0:
			SetSeg(0, R, G, B);
			SetSeg(1, R, G, B);
			SetSeg(2, R, G, B);
			SetSeg(3, R, G, B);
			SetSeg(4, R, G, B);
			SetSeg(5, R, G, B);
			break;
		case 1:
			SetSeg(1, R, G, B);
			SetSeg(2, R, G, B);
			break;
		case 2:
			SetSeg(0, R, G, B);
			SetSeg(1, R, G, B);
			SetSeg(6, R, G, B);
			SetSeg(4, R, G, B);
			SetSeg(3, R, G, B);
			break;
		case 3:
			SetSeg(0, R, G, B);
			SetSeg(1, R, G, B);
			SetSeg(2, R, G, B);
			SetSeg(6, R, G, B);
			SetSeg(3, R, G, B);
			break;
		case 4:
			SetSeg(1, R, G, B);
			SetSeg(2, R, G, B);
			SetSeg(5, R, G, B);
			SetSeg(6, R, G, B);
			break;
		case 5:
			SetSeg(0, R, G, B);
			SetSeg(5, R, G, B);
			SetSeg(2, R, G, B);
			SetSeg(6, R, G, B);
			SetSeg(3, R, G, B);
			break;
		case 6:
			SetSeg(0, R, G, B);
			SetSeg(2, R, G, B);
			SetSeg(3, R, G, B);
			SetSeg(4, R, G, B);
			SetSeg(5, R, G, B);
			SetSeg(6, R, G, B);
			break;
		case 7:
			SetSeg(0, R, G, B);
			SetSeg(1, R, G, B);
			SetSeg(2, R, G, B);
			break;
		case 8:
			SetSeg(0, R, G, B);
			SetSeg(1, R, G, B);
			SetSeg(2, R, G, B);
			SetSeg(3, R, G, B);
			SetSeg(4, R, G, B);
			SetSeg(5, R, G, B);
			SetSeg(6, R, G, B);
			break;
		case 9:
			SetSeg(0, R, G, B);
			SetSeg(1, R, G, B);
			SetSeg(2, R, G, B);
			SetSeg(3, R, G, B);
			SetSeg(5, R, G, B);
			SetSeg(6, R, G, B);
			break;
		}
	}
	if (Digit == 3) {
		switch (Value) {
		case 0:
			SetSeg(0 + 14, R, G, B);
			SetSeg(1 + 14, R, G, B);
			SetSeg(2 + 14, R, G, B);
			SetSeg(3 + 14, R, G, B);
			SetSeg(4 + 14, R, G, B);
			SetSeg(5 + 14, R, G, B);
			break;
		case 1:
			SetSeg(1 + 14, R, G, B);
			SetSeg(2 + 14, R, G, B);
			break;
		case 2:
			SetSeg(0 + 14, R, G, B);
			SetSeg(1 + 14, R, G, B);
			SetSeg(6 + 14, R, G, B);
			SetSeg(4 + 14, R, G, B);
			SetSeg(3 + 14, R, G, B);
			break;
		case 3:
			SetSeg(0 + 14, R, G, B);
			SetSeg(1 + 14, R, G, B);
			SetSeg(2 + 14, R, G, B);
			SetSeg(6 + 14, R, G, B);
			SetSeg(3 + 14, R, G, B);
			break;
		case 4:
			SetSeg(1 + 14, R, G, B);
			SetSeg(2 + 14, R, G, B);
			SetSeg(5 + 14, R, G, B);
			SetSeg(6 + 14, R, G, B);
			break;
		case 5:
			SetSeg(0 + 14, R, G, B);
			SetSeg(5 + 14, R, G, B);
			SetSeg(2 + 14, R, G, B);
			SetSeg(6 + 14, R, G, B);
			SetSeg(3 + 14, R, G, B);
			break;
		case 6:
			SetSeg(0 + 14, R, G, B);
			SetSeg(2 + 14, R, G, B);
			SetSeg(3 + 14, R, G, B);
			SetSeg(4 + 14, R, G, B);
			SetSeg(5 + 14, R, G, B);
			SetSeg(6 + 14, R, G, B);
			break;
		case 7:
			SetSeg(0 + 14, R, G, B);
			SetSeg(1 + 14, R, G, B);
			SetSeg(2 + 14, R, G, B);
			break;
		case 8:
			SetSeg(0 + 14, R, G, B);
			SetSeg(1 + 14, R, G, B);
			SetSeg(2 + 14, R, G, B);
			SetSeg(3 + 14, R, G, B);
			SetSeg(4 + 14, R, G, B);
			SetSeg(5 + 14, R, G, B);
			SetSeg(6 + 14, R, G, B);
			break;
		case 9:
			SetSeg(0 + 14, R, G, B);
			SetSeg(1 + 14, R, G, B);
			SetSeg(2 + 14, R, G, B);
			SetSeg(3 + 14, R, G, B);
			SetSeg(5 + 14, R, G, B);
			SetSeg(6 + 14, R, G, B);
			break;
		}
	}
	if (Digit == 2) {
		switch (Value) {
		case 0:
			SetSeg(0 + 7, R, G, B);
			SetSeg(1 + 7, R, G, B);
			SetSeg(2 + 7, R, G, B);
			SetSeg(3 + 7, R, G, B);
			SetSeg(4 + 7, R, G, B);
			SetSeg(5 + 7, R, G, B);
			break;
		case 1:
			SetSeg(1 + 7, R, G, B);
			SetSeg(2 + 7, R, G, B);
			break;
		case 2:
			SetSeg(0 + 7, R, G, B);
			SetSeg(1 + 7, R, G, B);
			SetSeg(6 + 7, R, G, B);
			SetSeg(4 + 7, R, G, B);
			SetSeg(3 + 7, R, G, B);
			break;
		case 3:
			SetSeg(0 + 7, R, G, B);
			SetSeg(1 + 7, R, G, B);
			SetSeg(2 + 7, R, G, B);
			SetSeg(6 + 7, R, G, B);
			SetSeg(3 + 7, R, G, B);
			break;
		case 4:
			SetSeg(1 + 7, R, G, B);
			SetSeg(2 + 7, R, G, B);
			SetSeg(5 + 7, R, G, B);
			SetSeg(6 + 7, R, G, B);
			break;
		case 5:
			SetSeg(0 + 7, R, G, B);
			SetSeg(5 + 7, R, G, B);
			SetSeg(2 + 7, R, G, B);
			SetSeg(6 + 7, R, G, B);
			SetSeg(3 + 7, R, G, B);
			break;
		case 6:
			SetSeg(0 + 7, R, G, B);
			SetSeg(2 + 7, R, G, B);
			SetSeg(3 + 7, R, G, B);
			SetSeg(4 + 7, R, G, B);
			SetSeg(5 + 7, R, G, B);
			SetSeg(6 + 7, R, G, B);
			break;
		case 7:
			SetSeg(0 + 7, R, G, B);
			SetSeg(1 + 7, R, G, B);
			SetSeg(2 + 7, R, G, B);
			break;
		case 8:
			SetSeg(0 + 7, R, G, B);
			SetSeg(1 + 7, R, G, B);
			SetSeg(2 + 7, R, G, B);
			SetSeg(3 + 7, R, G, B);
			SetSeg(4 + 7, R, G, B);
			SetSeg(5 + 7, R, G, B);
			SetSeg(6 + 7, R, G, B);
			break;
		case 9:
			SetSeg(0 + 7, R, G, B);
			SetSeg(1 + 7, R, G, B);
			SetSeg(2 + 7, R, G, B);
			SetSeg(3 + 7, R, G, B);
			SetSeg(5 + 7, R, G, B);
			SetSeg(6 + 7, R, G, B);
			break;
		}
	}
	if (TempValue != Value) {
		Clear();
	}
	TempValue = Value;
}