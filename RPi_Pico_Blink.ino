//=============================================================================
//  Basic verification of RP2040 in Arduino IDE  
//=============================================================================
//  Blink on-board LED (GPIO 25)
//-----------------------------------------------------------------------------
//  Board Library:
//  https://github.com/earlephilhower/arduino-pico/releases/download/global/package_rp2040_index.json
//  
//     Verified Boards: "Raspberry Pi Pico W"
//=============================================================================
#define ON_TIME 300
#define SHORT_OFF_TIME 300
#define LONG_OFF_TIME 1000

void LED_On(long delay_ms);
void LED_Off(long delay_ms);

//===========================================================================
// Initial setup before entering main loop
//===========================================================================
void setup() 
{
  //___ Init the LED off ____________________________________________________
  pinMode(LED_BUILTIN, OUTPUT);
}

//===========================================================================
// Main loop 
//===========================================================================
void loop() 
{
  //___ LED on ______________________________________________________________
  LED_On(ON_TIME);
  
  //___ LED off ______________________________________________________________                   
  LED_Off(SHORT_OFF_TIME);

//___ LED on ______________________________________________________________
  LED_On(ON_TIME);
  
  //___ LED off ______________________________________________________________                   
  LED_Off(LONG_OFF_TIME); 

}
