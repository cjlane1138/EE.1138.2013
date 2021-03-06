#ifndef SPEED_H
#define SPEED_H

#include "../CommandBase.h"

class Speed: public CommandBase 
{
private:
	float speed;
public:
	Speed(float given);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
