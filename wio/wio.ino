#include <WioLTEforArduino.h>
WioLTE Wio;
#define GroveUARTPort Serial
#define CONSOLE SerialUSB

void setup() {
  Wio.Init();
  Wio.PowerSupplyGrove(true);
  CONSOLE.begin(115200);
  GroveUARTPort.begin(57600);
  delay(5000);
  CONSOLE.println("-- HELLO (baud rate = 57600)");
}

void loop() {
  while (GroveUARTPort.available()) {
    String recv_str = GroveUARTPort.readStringUntil('\n');
    CONSOLE.print("Recv: ");
    CONSOLE.println(recv_str);
  }
  /* Send using `GroveAPort.println("foobar");` */
}
