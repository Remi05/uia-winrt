#pragma once

#include "AutomationCondition.g.h"

namespace winrt::uia::implementation
{
    struct AutomationCondition : AutomationConditionT<AutomationCondition>
    {
        AutomationCondition(com_ptr<IUIAutomationCondition> const& uiAutomationCondition)
            : m_uiAutomationCondition(uiAutomationCondition) {}

        com_ptr<IUIAutomationCondition> UiAutomationCondition() const noexcept { return m_uiAutomationCondition; }

    private:
        com_ptr<IUIAutomationCondition> m_uiAutomationCondition;
    };
}
