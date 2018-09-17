// Import libraries for PCF8574, MCP23017 and Catalex MP3 Player

#define TC_Pin 0;
volatile TC_LastState = 0;
volatile TC_ActualState = 0;
volatile ActualConNb = 0;
volatile LastConNb = 0;

void setup() {
  // Setup PCF8574
  // Setup MCP23017
  // Setup MP3 Player

}

void loop() {
  // ###TEST CABLE###
  // Check Test Cable
  // TC_ActualState = digitalRead(TC_Pin);
  // if(TC_ActualState!= TC_LastState){
  //    TC_LastState = TC_ActualState;
  //    set_TCLed(TC_LastState);
  //    Play Test Bip
  // }
  // ###END TEST CABLE###

  // ###SUBSYSTEMS CABLES###
  //
  // ###END SUBSYTEM CABLES###

}

void set_TCLed(int state){
  if(state == 0){
    // Turn OFF test green led on MCP23017
    // Turn ON test red led on MCP23017
  }
  else{
    // Turn OFF test red led on MCP23017
    // Turn ON test green led on MCP23017
  }
}

