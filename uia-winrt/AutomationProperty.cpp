#include "pch.h"
#include "AutomationProperty.h"
#if __has_include("AutomationProperty.g.cpp")
#include "AutomationProperty.g.cpp"
#endif

namespace winrt::uia::implementation
{
	uia::AutomationProperty AutomationProperty::LookupById(int propertyId)
	{
		// Perform ID validation?
		return winrt::make<implementation::AutomationProperty>(propertyId);
	}
}
