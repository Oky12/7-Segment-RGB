
#include "Digital7SegRGB.h"
#include <Adafruit_NeoPixel.h>
#include <Arduino.h>
#define DEBUG 1 

int PIXEL;
int pin;

Adafruit_NeoPixel(PIXEL, pin, NEO_GRB + NEO_KHZ800);
void Digital7SegRGB::begin(int Pin, int Digit) {
	if (Digit == 1) {
		PIXEL = 7;
	}
	pin = Pin;
	if (DEBUG == 1) {
		Serial.println("RGB Start on Pin");
		Serial.println(Pin);

	}
}

void Digital7SegRGB::Clear() {
	for (int i = 0; i < PIXEL; i++) {
		SetSeg(i, 0, 0, 0);
	}
}

void Digital7SegRGB::SetSeg(int Seg, int R, int G, int B) {
	void setPixelColor(Seg, Adafruit_NeoPixel::Color(R, G, B));
    void show(void);
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
