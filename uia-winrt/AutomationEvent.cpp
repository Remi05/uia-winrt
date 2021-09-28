#include "pch.h"
#include "AutomationEvent.h"
#if __has_include("AutomationEvent.g.cpp")
#include "AutomationEvent.g.cpp"
#endif

namespace winrt::uia::implementation
{
	uia::AutomationEvent AutomationEvent::LookupById(int eventId)
	{
		// Perform ID validation?
		return winrt::make<implementation::AutomationEvent>(eventId);
	}
}
