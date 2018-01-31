#ifndef DriveCommand_H
#define DriveCommand_H

#include "CommandBase.h"
#include <Robot.h>

class DriveCommand : public CommandBase {
public:
	DriveCommand();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	double yAxis;
	double rotAxis;
};

#endif
