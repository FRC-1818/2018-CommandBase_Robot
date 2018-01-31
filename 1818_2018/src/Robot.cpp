#include <Robot.h>
#include <Commands/Scheduler.h>
#include <Commands/Command.h>
#include <SmartDashboard/SendableChooser.h>
#include <SmartDashboard/SmartDashboard.h>
#include <WPILib.h>
#include <Commands/MyAutoCommand.h>
#include <Commands/Drive/DriveCommand.h>
#include <Commands/Autonomous/AutoCommand_1.h>

OI *Robot::oi;
DriveSubsystem *Robot::driveSubsystem;
DashboardSubsystem *Robot::dashboardSubsystem;

   void Robot::RobotInit(){
		CameraServer::GetInstance()->StartAutomaticCapture(0);
		autoChooser.AddObject("Defeaut", new MyAutoCommand());
		autoChooser.AddObject("Auto_1", new AutoCommand_1());
		SmartDashboard::PutData("Auto Mode Chooser", &autoChooser);
		oi = new OI();
		driveSubsystem = new DriveSubsystem();
		dashboardSubsystem =  new DashboardSubsystem();
		driveCommand = new DriveCommand();
	}

	void Robot::DisabledInit(){
		//SmartDashboard::PutData("driveSubsystem", &DriveSubsystem());
	}

	void Robot::DisabledPeriodic(){

	}

	void Robot::AutonomousInit(){
		myAutoCommand = autoChooser.GetSelected();
		myAutoCommand->Start();
	}

	void Robot::AutonomousPeriodic(){
		frc::Scheduler::GetInstance()->Run();
	}

	void Robot::TeleopInit(){
		myAutoCommand->Cancel();
	}

	void Robot::TeleopPeriodic(){
		frc::Scheduler::GetInstance()->Run();
		driveCommand->Start();
	}

	void Robot::TestPeriodic(){

	}

START_ROBOT_CLASS(Robot)
