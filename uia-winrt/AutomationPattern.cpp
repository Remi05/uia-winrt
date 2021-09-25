#include "pch.h"
#include "AutomationPattern.h"
#if __has_include("AutomationPattern.g.cpp")
#include "AutomationPattern.g.cpp"
#endif

namespace winrt::uia::implementation
{
	uia::AutomationPattern AutomationPattern::LookupById(int patternId)
	{
		// Perform ID validation?
		return winrt::make<implementation::AutomationPattern>(patternId);
	}
}
