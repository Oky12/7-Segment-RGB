
#include "Digital7SegRGB.h"
#define DEBUG 0 

Adafruit_NeoPixel strip;
void Digital7SegRGB::begin(uint16_t n, uint8_t p) {
	if (n == 1) {
		PIXEL = 7;
	}
	strip = Adafruit_NeoPixel(n, p, NEO_GRB + NEO_KHZ800);
	if (DEBUG == 1) {
		Serial.println("RGB Start on Pin");
		Serial.println(p);

	}
}

void Digital7SegRGB::Clear() {
	for (int i = 0; i < PIXEL; i++) {
		SetSeg(i, 0, 0, 0);
	}
}

void Digital7SegRGB::SetSeg(uint16_t Seg, uint8_t R, uint8_t G, uint8_t B) {
	if (DEBUG == 1) {
		Serial.print("Segment set to");
		Serial.print(Seg);
		Serial.print(" With Color ");
		Serial.print("R=");
		Serial.print(R);
		Serial.print("G=");
		Serial.print(G);
		Serial.print("B="); 
		Serial.println(B);

    }
	strip.setPixelColor(Seg, R, G, B);
	strip.show();
}

void Digital7SegRGB::PrintDigit(int Value, int Digit, int R, int G, int B) {
	if (Value != TempValue) {
		Clear();
	}
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
	TempValue = Value;
}