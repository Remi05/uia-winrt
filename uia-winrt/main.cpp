#include "pch.h"
#include <iostream>
#include "Automation.h"
#include "AutomationElement.h"

using namespace winrt;

int main()
{
    init_apartment();

    uia::Automation automation{};
    uia::AutomationElement element = automation.ElementFromPoint(Windows::Foundation::Point{ 10, 850 });
    wprintf(element.CurrentName().c_str());
    std::cout << std::endl;
    wprintf(element.CurrentLocalizedControlType().c_str());
    std::cout << std::endl << element.CurrentControlType().Id() << std::endl;
}
