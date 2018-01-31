#include "OI.h"
#include <WPILib.h>
using namespace frc;

OI::OI() {
	joystick.reset(new Joystick(0));

	buttonA.reset(new JoystickButton(joystick.get(), 1));
	buttonB.reset(new JoystickButton(joystick.get(), 2));
	buttonX.reset(new JoystickButton(joystick.get(), 3));
	buttonY.reset(new JoystickButton(joystick.get(), 4));

	leftBumper.reset(new JoystickButton(joystick.get(), 5));
	rightBumper.reset(new JoystickButton(joystick.get(), 6));
	start.reset(new JoystickButton(joystick.get(), 8));
	back.reset(new JoystickButton(joystick.get(), 7));
	leftStick.reset(new JoystickButton(joystick.get(), 9));
	rightStick.reset(new JoystickButton(joystick.get(), 10));
}


double OI::GetLeftXAxis(){
	double joystickValue = OI::DeadBandJoystick(joystick->GetRawAxis(0));
	return joystickValue;
}
//used in DriveCommand.cpp drive front-back

double OI::GetLeftYAxis(){
	double joystickValue = OI::DeadBandJoystick(joystick->GetRawAxis(1));
	return joystickValue;
}
//used in DriveCommand.cpp drive Slide Left & Slide Right

double OI::GetRightXAxis(){
	double joystickValue = OI::DeadBandJoystick(joystick->GetRawAxis(4));
	return joystickValue;
}
//used in DriveCommand.cpp drive left-right

double OI::GetLeftTrigger(){
	double joystickValue = OI::DeadBandJoystick(joystick->GetRawAxis(2));
	return joystickValue;
}

/*DeadZone Adjust*/
float OI::DeadBandJoystick(float axis) {
	 if(axis > -1.0 && axis < 1.0){
		 axis = 0.0;
	 }
	 else{
	 		axis = axis * fabs(axis);
	 }
	return axis;
}



bool OI::GetAButton(){
	return joystick->GetRawButton(1);
}

bool OI::GetBButton(){
	return joystick->GetRawButton(2);
}

bool OI::GetXButton(){
	return joystick->GetRawButton(3);
}

bool OI::GetYButton(){
	return joystick->GetRawButton(4);
}

bool OI::GetLeftBumper(){
	return joystick->GetRawButton(5);
}

bool OI::GetRightBumper(){
	return joystick->GetRawButton(6);
}

bool OI::GetBackButton(){
	return joystick->GetRawButton(7);
}

bool OI::GetStartButton(){
	return joystick->GetRawButton(8);
}

bool OI::GetLeftStickButton(){
	return joystick->GetRawButton(9);
}

bool OI::GetRightStickButton(){
	return joystick->GetRawButton(10);
}


