#include <IRremote.h>
#include <DL_PAC_NK76.h>

IRsend irsend;
dl_ac_msg dl_msg;

void setup() {
  dl_msg.on = false;
  dl_msg.temperature = 25;
  dl_msg.mode=0;
  dl_msg.fan=0;

  long data = dl_build_msg(&dl_msg);
  irsend.sendNEC(data, 32);
}

void loop() {

}
