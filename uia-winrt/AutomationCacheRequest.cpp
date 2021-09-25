#include "pch.h"
#include "AutomationCacheRequest.h"
#if __has_include("AutomationCacheRequest.g.cpp")
#include "AutomationCacheRequest.g.cpp"
#endif

#include "EnumHelpers.h"
#include "AutomationCondition.h"

namespace winrt::uia::implementation
{
    uia::ElementMode AutomationCacheRequest::Mode()
    {
        AutomationElementMode automationElementMode;
        check_hresult(m_uiAutomationCacheRequest->get_AutomationElementMode(&automationElementMode));
        return AutomationElementModeToElementMode(automationElementMode);
    }

    void AutomationCacheRequest::Mode(uia::ElementMode elementMode)
    {
        AutomationElementMode automationElementMode = ElementModeToAutomationElementMode(elementMode);
        check_hresult(m_uiAutomationCacheRequest->put_AutomationElementMode(automationElementMode));
    }

    uia::AutomationCondition AutomationCacheRequest::TreeFilter()
    {
        com_ptr<IUIAutomationCondition> treeFilter;
        check_hresult(m_uiAutomationCacheRequest->get_TreeFilter(treeFilter.put()));
        return winrt::make<implementation::AutomationCondition>(treeFilter);
    }

    void AutomationCacheRequest::TreeFilter(uia::AutomationCondition const& condition)
    {
        com_ptr<IUIAutomationCondition> treeFilter = winrt::get_self<implementation::AutomationCondition>(condition)->UiAutomationCondition();
        check_hresult(m_uiAutomationCacheRequest->put_TreeFilter(treeFilter.get()));
    }

    uia::AutomationTreeScope AutomationCacheRequest::Scope()
    {
        TreeScope scope;
        check_hresult(m_uiAutomationCacheRequest->get_TreeScope(&scope));
        return TreeScopeToAutomationTreeScope(scope);
    }

    void AutomationCacheRequest::Scope(uia::AutomationTreeScope const& treeScope)
    {
        TreeScope scope = AutomationTreeScopeToTreeScope(treeScope);
        check_hresult(m_uiAutomationCacheRequest->put_TreeScope(scope));
    }

    void AutomationCacheRequest::AddPattern(uia::AutomationPattern const& pattern)
    {
        check_hresult(m_uiAutomationCacheRequest->AddPattern(pattern.Id()));
    }

    void AutomationCacheRequest::AddProperty(uia::AutomationProperty const& property)
    {
        check_hresult(m_uiAutomationCacheRequest->AddProperty(property.Id()));
    }

    uia::AutomationCacheRequest AutomationCacheRequest::Clone()
    {
        com_ptr<IUIAutomationCacheRequest> uiAutomationCacheRequest;
        check_hresult(m_uiAutomationCacheRequest->Clone(uiAutomationCacheRequest.put()));
        return winrt::make<implementation::AutomationCacheRequest>(uiAutomationCacheRequest);
    }
}
