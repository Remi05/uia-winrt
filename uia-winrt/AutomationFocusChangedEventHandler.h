#pragma once

#include "Automation.g.h"

namespace winrt::uia::implementation
{
    struct AutomationFocusChangedEventHandler : implements<AutomationFocusChangedEventHandler, IUIAutomationFocusChangedEventHandler>
    {
        AutomationFocusChangedEventHandler(uia::FocusChangedEventHandler const& focusChangedEventHandler)
            : m_focusChangedEventHandler(focusChangedEventHandler) {}

        HRESULT STDMETHODCALLTYPE HandleFocusChangedEvent(IUIAutomationElement* sender) override;

    private:
        uia::FocusChangedEventHandler m_focusChangedEventHandler{ nullptr };
    };
}
