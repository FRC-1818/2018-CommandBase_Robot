#ifndef AutoCommand_1_H
#define AutoCommand_1_H

#include "CommandBase.h"
#include"Timer.h"
#include "Robot.h"
#include "AHRS.h"

class AutoCommand_1 : public CommandBase {
private:
	frc::Timer *timer;
	frc::PowerDistributionPanel *PDP;
	AHRS *ahrs;
public:
	AutoCommand_1();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // AutoCommand_1_H
