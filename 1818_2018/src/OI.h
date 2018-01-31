#ifndef OI_H
#define OI_H
#include <Joystick.h>
#include <XboxController.h>
#include "WPILib.h"

class OI {
private:
	std::shared_ptr<frc::Joystick> joystick;
	std::shared_ptr<frc::JoystickButton> buttonA, buttonB, buttonX, buttonY, start, back,
	                                     leftBumper, rightBumper, leftStick, rightStick;
	//XboxController *myController;
public:
	OI();
	double GetLeftXAxis();
	double GetLeftYAxis();
	double GetRightXAxis();
	double GetLeftTrigger();
	float DeadBandJoystick(float axis);
	bool GetAButton();
	bool GetBButton();
	bool GetXButton();
	bool GetYButton();
	bool GetLeftBumper();
	bool GetRightBumper();
	bool GetBackButton();
	bool GetStartButton();
	bool GetLeftStickButton();
	bool GetRightStickButton();

};

#endif
