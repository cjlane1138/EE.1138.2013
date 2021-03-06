#include "PIDControl.h"

PIDControl::PIDControl(Print *pr, Init *i) {
	// Use requires() here to declare subsystem dependencies
	Requires(drivetrain);
	print = pr;
	init = i;
}

// Called just before this Command runs the first time
void PIDControl::Initialize() {
	drivetrain->TankDrive(oi->GetLeftY(), oi->GetRightY());
}

// Called repeatedly when this Command is scheduled to run
void PIDControl::Execute() {
	if(init->e_alt->GetDistance() != 0.000000)
		
	drivetrain->TankDrive(oi->GetLeftY(), oi->GetRightY());
}

// Make this return true when this Command no longer needs to run execute()
bool PIDControl::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void PIDControl::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PIDControl::Interrupted() {
}
