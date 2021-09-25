#pragma once

#include "AutomationElementArray.g.h"

namespace winrt::uia::implementation
{
    struct AutomationElementArray : AutomationElementArrayT<AutomationElementArray>
    {
        AutomationElementArray(com_ptr<IUIAutomationElementArray> const& uiAutomationElementArray)
            : m_uiAutomationElementArray(uiAutomationElementArray) {}

        int Length();

        uia::AutomationElement GetElement(int index);

    private:
        com_ptr<IUIAutomationElementArray> m_uiAutomationElementArray{ nullptr };
    };
}
