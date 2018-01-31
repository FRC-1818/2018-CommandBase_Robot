#ifndef DashboardSubsystem_H
#define DashboardSubsystem_H

#include <Commands/Subsystem.h>
#include <SmartDashboard/SmartDashboard.h>
#include "AHRS.h"

class DashboardSubsystem : public frc::Subsystem {
private:

public:
	DashboardSubsystem();
	void InitDefaultCommand();
	void ahrsDisplay(AHRS *ahrs);
	void pdpDisplay(PowerDistributionPanel *PDP);
};

#endif  // DashboardSubsystem_H
