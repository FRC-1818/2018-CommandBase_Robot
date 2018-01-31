#include <Subsystems/DriveSubsystem.h>

DriveSubsystem::DriveSubsystem() : Subsystem("DriveBaseSubsystem") {
    robotDrive = new frc::DifferentialDrive(left, right);
    //robotDrive = new frc::DifferentialDrive(leftMotor, rightMotor);
}

void DriveSubsystem::InitDefaultCommand() {

}

void DriveSubsystem::Drive(double y, double rot){
	robotDrive->ArcadeDrive(-y, -rot);
}

