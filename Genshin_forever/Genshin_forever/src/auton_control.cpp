#include "vex.h"
#include "pragma.h"
#include "auton_control.h"
#include <thread>

const float fb_constant = 0.1;
float power = 0;

void right (float target) {
  power = rightfront.rotation(rotationUnits::raw) * fb_constant;
  if (power >= 100) {
    power = 100;
  }
  
}

void pre_auton() {
  
}

void Hutao_skill() {
  /* red
    forward_and_intake(rotation);
    left(rotation);
    forward_and_intake(rotation);
    left(rotaion);
    forward_and_intake(rotation);
    full_cycle(time);
  */
  /* orange
    backward(rotation);
    outtake(time);
    left(rotation);
    forward_and_intake(rotation);
    left(rotation);
    forward_and_intake(rotation);
    full_cycle(time);
  */
  /* yellow
    backward(rotation);
    right(rotation);
    forward_and_intake(rotation);
    left(rotation);
    forward_and_intake(rotation);
    full_cycle(time);
  */
  /* lime
    backward(rotation);
    full_cycle(time);
    right(rotation);
    forward_and_intake(rotation);
    left(rotation);
    forward_and_intake(rotation);
    full_cycle(time);
  */
  /* light blue
    backward(rotation);
    full_cycle(time);
    left(rotation);
    forward_and_intake(rotation);
    full_cycle(time);
  */
  /* blue
    backward(rotation);
    full_cycle(time);
    right(rotation);
    forward_and_intake(rotation);
    full_cycle(time);
  */
  /* purple
    backward(rotation);
    full_cycle(time);
    right(rotation);
    forward_and_intake(rotation);
    right(rotation);

  */
  /*`light grey

  */
}
