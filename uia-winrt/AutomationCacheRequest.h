#pragma once

#include "AutomationCacheRequest.g.h"

namespace winrt::uia::implementation
{
    struct AutomationCacheRequest : AutomationCacheRequestT<AutomationCacheRequest>
    {
        AutomationCacheRequest(com_ptr<IUIAutomationCacheRequest> const& uiAutomationCacheRequest)
            : m_uiAutomationCacheRequest(uiAutomationCacheRequest) {}

        com_ptr<IUIAutomationCacheRequest> UiAutomationCacheRequest() const noexcept { return m_uiAutomationCacheRequest; }

        //AutomationElementMode{ get; set; };
        uia::AutomationCondition TreeFilter();
        void TreeFilter(uia::AutomationCondition const& condition);

        uia::AutomationTreeScope Scope();
        void Scope(uia::AutomationTreeScope const& treeScope);

        //void AddPattern();
        //void AddProperty();
        uia::AutomationCacheRequest Clone();

    private:
        com_ptr<IUIAutomationCacheRequest> m_uiAutomationCacheRequest;
    };
}
