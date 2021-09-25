#pragma once

#include "AutomationCacheRequest.g.h"

namespace winrt::uia::implementation
{
    struct AutomationCacheRequest : AutomationCacheRequestT<AutomationCacheRequest>
    {
        AutomationCacheRequest(com_ptr<IUIAutomationCacheRequest> const& uiAutomationCacheRequest)
            : m_uiAutomationCacheRequest(uiAutomationCacheRequest) {}

        com_ptr<IUIAutomationCacheRequest> UiAutomationCacheRequest() const noexcept { return m_uiAutomationCacheRequest; }

        uia::ElementMode Mode();
        void Mode(uia::ElementMode elementMode);

        uia::AutomationCondition TreeFilter();
        void TreeFilter(uia::AutomationCondition const& condition);

        uia::AutomationTreeScope Scope();
        void Scope(uia::AutomationTreeScope const& treeScope);

        void AddPattern(uia::AutomationPattern const& pattern);
        void AddProperty(uia::AutomationProperty const& property);
        uia::AutomationCacheRequest Clone();

    private:
        com_ptr<IUIAutomationCacheRequest> m_uiAutomationCacheRequest;
    };
}
