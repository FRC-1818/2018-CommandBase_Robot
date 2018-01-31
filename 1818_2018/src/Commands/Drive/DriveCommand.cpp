#include "DriveCommand.h"

DriveCommand::DriveCommand() {
	Requires(Robot::driveSubsystem);
	yAxis = 0;
	rotAxis = 0;
}

void DriveCommand::Initialize() {
	yAxis = 0;
	rotAxis = 0;
}

void DriveCommand::Execute() {
	yAxis = Robot::oi->GetLeftYAxis();
	rotAxis = Robot::oi->GetRightXAxis();

    Robot::driveSubsystem->Drive(-yAxis, -rotAxis);
}

bool DriveCommand::IsFinished() {
	return false;
}

void DriveCommand::End() {
	Robot::driveSubsystem->Drive(0.0, 0.0);
}

void DriveCommand::Interrupted() {

}

