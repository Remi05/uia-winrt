#pragma once

#include "Automation.g.h"

namespace winrt::uia::implementation
{
    struct AutomationPropertyChangedEventHandler : implements<AutomationPropertyChangedEventHandler, IUIAutomationPropertyChangedEventHandler>
    {
        AutomationPropertyChangedEventHandler(uia::PropertyChangedEventHandler const& propertyChangedEventHandler)
            : m_propertyChangedEventHandler(propertyChangedEventHandler) {}

        HRESULT STDMETHODCALLTYPE HandlePropertyChangedEvent(IUIAutomationElement* sender, PROPERTYID propertyId, VARIANT newValue) override;

    private:
        uia::PropertyChangedEventHandler m_propertyChangedEventHandler{ nullptr };
    };
}
