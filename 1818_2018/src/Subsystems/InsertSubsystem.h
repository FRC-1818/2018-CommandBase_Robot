#ifndef InsertSubsystem_H
#define InsertSubsystem_H

#include <Commands/Subsystem.h>
#include <VictorSp.h>
#include <SpeedControllerGroup.h>

class InsertSubsystem : public frc::Subsystem {
private:
	frc::VictorSP intakerLeft{4};
	frc::VictorSP intakerRight{5};
	frc::SpeedControllerGroup *intaker;
public:
	InsertSubsystem();
	void InitDefaultCommand();
	void Intake(double speed);
	void PushOut(double speed);

};

#endif  // InsertSubsystem_H
