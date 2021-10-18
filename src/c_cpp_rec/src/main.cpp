#include<Arduino.h>
int atexit(void(* /*func*/)()){return 0;}
void initVariant()__attribute__((weak));
void initVariant(){}
void setupUSB()__attribute__((weak));
void setupUSB(){}
/*
 * if you want to keep this in for observing with nm tool, modify optimization inline using pragmas
 * avr-nm ./build-uno/c_cpp.elf |grep f0
 */
#pragma GCC push_options
#pragma GCC optimize ("O0")
void f0(){}
#pragma GCC pop_options

void setup(){
	//setup as in ino
}
void loop(){
	//loop as in ino
}
int main(void){
	init();
	initVariant();
#if defined(USBCON)
	USBDevice.attach();
#endif
	setup();
	for(;;){
		loop();
		if(serialEventRun)serialEventRun();
	}
	return 0;
}

