#ifndef DriveBaseSubsystem_H
#define DriveBaseSubsystem_H
#include <Commands/Subsystem.h>
#include <Drive/DifferentialDrive.h>
#include <SpeedControllerGroup.h>
#include <Victor.h>

class DriveSubsystem: public frc::Subsystem {
private:
	frc::Victor left{0};
	frc::Victor right{1};
	//frc::Victor leftMotor{1};
	//frc::Victor rightMotor{2};
	//frc::SpeedControllerGroup left{frontLeft, rearLeft};
	//frc::SpeedControllerGroup right{frontRight, rearRight};
	frc::DifferentialDrive *robotDrive;

public:
	DriveSubsystem();
	void InitDefaultCommand() override;
	void Drive(double y, double rot);
};

#endif
