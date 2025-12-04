#include "vex.h"

/**
 * Resets the constants for auton movement.
 * Modify these to change the default behavior of functions like
 * drive_distance(). For explanations of the difference between
 * drive, heading, turning, and swinging, as well as the PID and
 * exit conditions, check the docs.
 */

void default_constants(){
  
}

/**
 * Sets constants to be more effective for odom movements.
 * For functions like drive_to_point(), it's often better to have
 * a slower max_voltage and greater settle_error than you would otherwise.
 */

void odom_constants(){
  
}

/**
 * The expected behavior is to return to the start position.
 */

void drive_test(){
  
}

/**
 * The expected behavior is to return to the start angle, after making a complete turn.
 */

void turn_test(){
  
}

/**
 * Should swing in a fun S shape.
 */

void swing_test(){
  
}

/**
 * A little of this, a little of that; it should end roughly where it started.
 */

void full_test(){
  
}

/**
 * Doesn't drive the robot, but just prints coordinates to the Brain screen 
 * so you can check if they are accurate to life. Push the robot around and
 * see if the coordinates increase like you'd expect.
 */

void odom_test(){
  
}

/**
 * Should end in the same place it began, but the second movement
 * will be curved while the first is straight.
 */

void tank_odom_test(){
  
}

/**
 * Drives in a square while making a full turn in the process. Should
 * end where it started.
 */

void holonomic_odom_test(){
  
}


void skills(){
    chassis.drive_distance(28.5, 0);
    chassis.turn_to_angle(-90);
    chassis.drive_distance(-5, -90);
    matchLoad.set(true);
    wait(3, sec);
    intakeUst.spin(forward);
    intakeOrta.spin(forward);
    
    matchLoad.set(false);
    chassis.turn_to_angle(135);
}