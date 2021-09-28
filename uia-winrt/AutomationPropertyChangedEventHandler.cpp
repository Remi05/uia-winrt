#include "pch.h"
#include "AutomationPropertyChangedEventHandler.h"
#include "AutomationElement.h"
#include "VariantHelpers.h"

namespace winrt::uia::implementation
{
    HRESULT AutomationPropertyChangedEventHandler::HandlePropertyChangedEvent(IUIAutomationElement* sender, PROPERTYID propertyId, VARIANT newValue)
    {
        try
        {
            if (m_propertyChangedEventHandler)
            {
                com_ptr<IUIAutomationElement> uiAutomationElement;
                uiAutomationElement.attach(sender);
                auto automationElement = winrt::make<implementation::AutomationElement>(uiAutomationElement);
                auto property = uia::AutomationProperty::LookupById(propertyId);
                Windows::Foundation::IInspectable value = VariantToIInspectable(newValue);
                m_propertyChangedEventHandler(automationElement, property, value);
            }
        }
        catch (hresult_error e)
        {
            return e.code();
        }
        return S_OK;
    }
}
