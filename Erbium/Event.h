#pragma once
#include "EventType.h"

class Event
{
public:
	EventType type;
	Event();
	virtual ~Event();
};

