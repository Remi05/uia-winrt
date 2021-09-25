#pragma once

#include "AutomationTreeWalker.g.h"

namespace winrt::uia::implementation
{
    struct AutomationTreeWalker : AutomationTreeWalkerT<AutomationTreeWalker>
    {
        AutomationTreeWalker(com_ptr<IUIAutomationTreeWalker> const& uiAutomationTreeWalker)
            : m_uiAutomationTreeWalker(uiAutomationTreeWalker) {}

        com_ptr<IUIAutomationTreeWalker> UiAutomationCacheRequest() const noexcept { return m_uiAutomationTreeWalker; }

        uia::AutomationCondition Condition();

        uia::AutomationElement GetFirstChildElement(uia::AutomationElement element);
        uia::AutomationElement GetFirstChildElementBuildCache(uia::AutomationElement element, uia::AutomationCacheRequest cacheRequest);
        uia::AutomationElement GetLastChildElement(uia::AutomationElement element);
        uia::AutomationElement GetLastChildElementBuildCache(uia::AutomationElement element, uia::AutomationCacheRequest cacheRequest);
        uia::AutomationElement GetNextSiblingElement(uia::AutomationElement element);
        uia::AutomationElement GetNextSiblingElementBuildCache(uia::AutomationElement element, uia::AutomationCacheRequest cacheRequest);
        uia::AutomationElement GetParentElement(uia::AutomationElement element);
        uia::AutomationElement GetParentElementBuildCache(uia::AutomationElement element, uia::AutomationCacheRequest cacheRequest);
        uia::AutomationElement GetPreviousSiblingElement(uia::AutomationElement element);
        uia::AutomationElement GetPreviousSiblingElementBuildCache(uia::AutomationElement element, uia::AutomationCacheRequest cacheRequest);
        uia::AutomationElement NormalizeElement(uia::AutomationElement element);
        uia::AutomationElement NormalizeElementBuildCache(uia::AutomationElement element, uia::AutomationCacheRequest cacheRequest);

    private:
        com_ptr<IUIAutomationTreeWalker> m_uiAutomationTreeWalker;
    };
}
