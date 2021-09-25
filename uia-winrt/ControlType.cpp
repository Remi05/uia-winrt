#include "pch.h"
#include "ControlType.h"
#if __has_include("ControlType.g.cpp")
#include "ControlType.g.cpp"
#endif

namespace winrt::uia::implementation
{
	uia::ControlType ControlType::LookupById(int controlTypeId)
	{
		// Perform ID validation?
		return winrt::make<implementation::ControlType>(controlTypeId);
	}
}
