#include "AutoCommand_1.h"

AutoCommand_1::AutoCommand_1() {
	Requires(Robot::driveSubsystem);
	Requires(Robot::dashboardSubsystem);
	timer = new frc::Timer();
	PDP = new frc::PowerDistributionPanel(0);
	ahrs = new AHRS(SPI::Port::kMXP);
}

// Called just before this Command runs the first time
void AutoCommand_1::Initialize() {
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void AutoCommand_1::Execute() {
	ahrs->ZeroYaw();

	while (timer->Get() < 20.0) {
		Robot::dashboardSubsystem->ahrsDisplay(ahrs);
		Robot::dashboardSubsystem->pdpDisplay(PDP);
		Robot::driveSubsystem->Drive(-0.75, ahrs->GetYaw() * (0.05));
	}

	// Stop robot
	Robot::driveSubsystem->Drive(0.0, 0.0);
}

// Make this return true when this Command no longer needs to run execute()
bool AutoCommand_1::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void AutoCommand_1::End() {
	timer->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoCommand_1::Interrupted() {
	timer->Stop();
}
