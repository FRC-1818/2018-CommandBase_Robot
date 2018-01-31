#include "InsertSubsystem.h"

InsertSubsystem::InsertSubsystem() : frc::Subsystem("InsertSubsystem") {
	intaker = new frc::SpeedControllerGroup(intakerLeft, intakerRight);
}

void InsertSubsystem::InitDefaultCommand() {

}

void InsertSubsystem::Intake(double speed){
	intaker->Set(speed);
}

void InsertSubsystem::PushOut(double speed){
	intaker->Set(-speed);
}
