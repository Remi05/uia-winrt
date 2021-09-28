#include "pch.h"
#include "AutomationFocusChangedEventHandler.h"
#include "AutomationElement.h"

namespace winrt::uia::implementation
{
    HRESULT AutomationFocusChangedEventHandler::HandleFocusChangedEvent(IUIAutomationElement* sender)
    {
        try
        {
            if (m_focusChangedEventHandler)
            {
                com_ptr<IUIAutomationElement> uiAutomationElement;
                uiAutomationElement.attach(sender);
                auto automationElement = winrt::make<implementation::AutomationElement>(uiAutomationElement);
                m_focusChangedEventHandler(automationElement);
            }
        }
        catch (hresult_error e)
        {
            return e.code();
        }
        return S_OK;
    }
}
