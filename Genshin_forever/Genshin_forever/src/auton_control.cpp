#include "vex.h"
#include "pragma.h"
#include "driver_control.h"
#include "auton_control.h"
#include <thread>

void left_movement (float target, int power, bool intake = true) {
  if (target > 0) {
    while (leftfront.rotation(rotationUnits::raw) < target) {
      spin(leftfront, power);
      spin(leftback, power);
      if (intake) {
        spin(h_intake_r);
        spin(h_intake_l);
        spin(v_intake_bottom);
      }
    }
  }
  else {
    while (leftfront.rotation(rotationUnits::raw) > target) {
      spin(leftfront, -power);
      spin(leftback, -power);
      if (intake) {
        spin(h_intake_r);
        spin(h_intake_l);
        spin(v_intake_bottom);
      }
    }
  }
  leftfront.stop();
  leftback.stop();
  if (intake) {
    h_intake_r.stop();
    h_intake_l.stop();
    v_intake_bottom.stop();
  }
}

void right_movement (float target, int power, bool intake = true) {
  if (target > 0) {
    while (rightfront.rotation(rotationUnits::raw) < target) {
      spin(rightfront, power);
      spin(rightback, power);
      if (intake) {
        spin(h_intake_r);
        spin(h_intake_l);
        spin(v_intake_bottom);
      }
    }
  }
  else {
    while (rightfront.rotation(rotationUnits::raw) > target) {
      spin(rightfront, -power);
      spin(rightback, -power);
      if (intake) {
        spin(h_intake_r);
        spin(h_intake_l);
        spin(v_intake_bottom);
      }
    }
  }
  rightfront.stop();
  rightback.stop();
  if (intake) {
    h_intake_r.stop();
    h_intake_l.stop();
    v_intake_bottom.stop();
  }
}

void pre_auton() {
  
}

void Hutao_skill() {
  //thread t1 = thread(left_movement,1000);

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
