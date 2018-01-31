#include "DashboardSubsystem.h"

DashboardSubsystem::DashboardSubsystem() : Subsystem("DashboardSubsystem") {

}

void DashboardSubsystem::InitDefaultCommand() {

}

void DashboardSubsystem::ahrsDisplay(AHRS *ahrs){
	SmartDashboard::PutNumber("Yaw", ahrs->GetYaw());
	SmartDashboard::PutNumber("Angle", ahrs->GetAngle());
	SmartDashboard::PutNumber("Roll", ahrs->GetRoll());
	SmartDashboard::PutNumber("Pitch", ahrs->GetPitch());
}

void DashboardSubsystem::pdpDisplay(frc::PowerDistributionPanel *PDP){
	SmartDashboard::PutNumber("PDP_Current_fleft", PDP->GetCurrent(3));
	SmartDashboard::PutNumber("PDP_Current_rleft", PDP->GetCurrent(1));
	SmartDashboard::PutNumber("PDP_Current_fright", PDP->GetCurrent(4));
	SmartDashboard::PutNumber("PDP_Current_rright", PDP->GetCurrent(2));
}
