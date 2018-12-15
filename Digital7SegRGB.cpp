
#include "Digital7SegRGB.h"
#include <Adafruit_NeoPixel.h>
#include <Arduino.h>
#define DEBUG 1 

int PIXEL;
int pin;
Adafruit_NeoPixel strip;

void Digital7SegRGB::begin(int Pin, int Digit) {
	if (Digit == 1) {
		PIXEL = 7;
	}
	pin = Pin;
	strip = Adafruit_NeoPixel(PIXEL, Pin, NEO_GRB + NEO_KHZ800);
	if (DEBUG == 1) {
		Serial.println("RGB Start on Pin");
		Serial.println(Pin);

	}
}

void Digital7SegRGB::Clear() {
	for (int i = 0; i < PIXEL; i++) {
		strip.SetSeg(i, 0, 0, 0);
	}
}

void Digital7SegRGB::SetSeg(int Seg, int R, int G, int B) {
	strip.setPixelColor(Seg, Adafruit_NeoPixel::Color(R, G, B));
	strip.show(void);
}

void Digital7SegRGB::PrintDigit(int Value, int Digit, int R, int G, int B) {
	if (Value != TempValue) {
		Clear();
	}
	if (Digit == 1) {
		switch (Value) {
		case 0:
			strip.SetSeg(0, R, G, B);
			strip.SetSeg(1, R, G, B);
			strip.SetSeg(2, R, G, B);
			strip.SetSeg(3, R, G, B);
			strip.SetSeg(4, R, G, B);
			strip.SetSeg(5, R, G, B);
			break;
		case 1:
			strip.SetSeg(1, R, G, B);
			strip.SetSeg(2, R, G, B);
			break;
		case 2:
			strip.SetSeg(0, R, G, B);
			strip.SetSeg(1, R, G, B);
			strip.SetSeg(6, R, G, B);
			strip.SetSeg(4, R, G, B);
			strip.SetSeg(3, R, G, B);
			break;
		case 3:
			strip.SetSeg(0, R, G, B);
			strip.SetSeg(1, R, G, B);
			strip.SetSeg(2, R, G, B);
			strip.SetSeg(6, R, G, B);
			strip.SetSeg(3, R, G, B);
			break;
		case 4:
			strip.SetSeg(1, R, G, B);
			strip.SetSeg(2, R, G, B);
			strip.SetSeg(5, R, G, B);
			strip.SetSeg(6, R, G, B);
			break;
		case 5:
			strip.SetSeg(0, R, G, B);
			strip.SetSeg(5, R, G, B);
			strip.SetSeg(2, R, G, B);
			strip.SetSeg(6, R, G, B);
			strip.SetSeg(3, R, G, B);
			break;
		case 6:
			strip.SetSeg(0, R, G, B);
			strip.SetSeg(2, R, G, B);
			strip.SetSeg(3, R, G, B);
			strip.SetSeg(4, R, G, B);
			strip.SetSeg(5, R, G, B);
			strip.SetSeg(6, R, G, B);
			break;
		case 7:
			strip.SetSeg(0, R, G, B);
			strip.SetSeg(1, R, G, B);
			strip.SetSeg(2, R, G, B);
			break;
		case 8:
			strip.SetSeg(0, R, G, B);
			strip.SetSeg(1, R, G, B);
			strip.SetSeg(2, R, G, B);
			strip.SetSeg(3, R, G, B);
			strip.SetSeg(4, R, G, B);
			strip.SetSeg(5, R, G, B);
			strip.SetSeg(6, R, G, B);
			break;
		case 9:
			strip.SetSeg(0, R, G, B);
			strip.SetSeg(1, R, G, B);
			strip.SetSeg(2, R, G, B);
			strip.SetSeg(3, R, G, B);
			strip.SetSeg(5, R, G, B);
			strip.SetSeg(6, R, G, B);
			break;
		}
	}
	TempValue = Value;
}
