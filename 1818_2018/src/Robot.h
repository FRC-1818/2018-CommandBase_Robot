/*
 * Robot.h
 * Created on: 2018
 * Author: Zeming
 */

#ifndef SRC_ROBOT_H_
#define SRC_ROBOT_H_

#include "WPILib.h"
#include <IterativeRobot.h>
#include <memory>
#include <LiveWindow/LiveWindow.h>
#include "OI.h"
#include "Subsystems/DriveSubsystem.h"
#include "Subsystems/DashboardSubsystem.h"
#include <Commands/Command.h>

class Robot: public IterativeRobot {

public:
	static OI *oi;
	static DriveSubsystem* driveSubsystem;
    static DashboardSubsystem *dashboardSubsystem;
	virtual void RobotInit();
	virtual void DisabledInit();
	virtual void DisabledPeriodic();
	virtual void AutonomousInit();
	virtual void AutonomousPeriodic();
	virtual void TeleopInit();
	virtual void TeleopPeriodic();
	virtual void TestPeriodic();
private:
	frc::Command *myAutoCommand;
	frc::Command *driveCommand;
	frc::SendableChooser<frc::Command*> autoChooser;
};
#endif
