#include "pch.h"
#include "AutomationTreeWalker.h"
#if __has_include("AutomationTreeWalker.g.cpp")
#include "AutomationTreeWalker.g.cpp"
#endif

#include "AutomationCacheRequest.h";
#include "AutomationCondition.h";
#include "AutomationElement.h"

namespace winrt::uia::implementation
{
    uia::AutomationCondition AutomationTreeWalker::Condition()
    {
        com_ptr<IUIAutomationCondition> uiAutomationCondition;
        check_hresult(m_uiAutomationTreeWalker->get_Condition(uiAutomationCondition.put()));
        return winrt::make<implementation::AutomationCondition>(uiAutomationCondition);
    }

    uia::AutomationElement AutomationTreeWalker::GetFirstChildElement(uia::AutomationElement element)
    {
        com_ptr<IUIAutomationElement> uiAutomationElement = winrt::get_self<implementation::AutomationElement>(element)->UiAutomationElement();
        com_ptr<IUIAutomationElement> firstChildElement;
        check_hresult(m_uiAutomationTreeWalker->GetFirstChildElement(uiAutomationElement.get(), firstChildElement.put()));
        return winrt::make<implementation::AutomationElement>(firstChildElement);
    }

    uia::AutomationElement AutomationTreeWalker::GetFirstChildElementBuildCache(uia::AutomationElement element, uia::AutomationCacheRequest cacheRequest)
    {
        com_ptr<IUIAutomationElement> uiAutomationElement = winrt::get_self<implementation::AutomationElement>(element)->UiAutomationElement();
        com_ptr<IUIAutomationCacheRequest> uiAutomationCacheRequest = winrt::get_self<implementation::AutomationCacheRequest>(cacheRequest)->UiAutomationCacheRequest();
        com_ptr<IUIAutomationElement> firstChildElement;
        check_hresult(m_uiAutomationTreeWalker->GetFirstChildElementBuildCache(uiAutomationElement.get(), uiAutomationCacheRequest.get(), firstChildElement.put()));
        return winrt::make<implementation::AutomationElement>(firstChildElement);
    }

    uia::AutomationElement AutomationTreeWalker::GetLastChildElement(uia::AutomationElement element)
    {
        com_ptr<IUIAutomationElement> uiAutomationElement = winrt::get_self<implementation::AutomationElement>(element)->UiAutomationElement();
        com_ptr<IUIAutomationElement> lastChildElement;
        check_hresult(m_uiAutomationTreeWalker->GetLastChildElement(uiAutomationElement.get(), lastChildElement.put()));
        return winrt::make<implementation::AutomationElement>(lastChildElement);
    }

    uia::AutomationElement AutomationTreeWalker::GetLastChildElementBuildCache(uia::AutomationElement element, uia::AutomationCacheRequest cacheRequest)
    {
        com_ptr<IUIAutomationElement> uiAutomationElement = winrt::get_self<implementation::AutomationElement>(element)->UiAutomationElement();
        com_ptr<IUIAutomationCacheRequest> uiAutomationCacheRequest = winrt::get_self<implementation::AutomationCacheRequest>(cacheRequest)->UiAutomationCacheRequest();
        com_ptr<IUIAutomationElement> lastChildElement;
        check_hresult(m_uiAutomationTreeWalker->GetLastChildElementBuildCache(uiAutomationElement.get(), uiAutomationCacheRequest.get(), lastChildElement.put()));
        return winrt::make<implementation::AutomationElement>(lastChildElement);
    }

    uia::AutomationElement AutomationTreeWalker::GetNextSiblingElement(uia::AutomationElement element)
    {
        com_ptr<IUIAutomationElement> uiAutomationElement = winrt::get_self<implementation::AutomationElement>(element)->UiAutomationElement();
        com_ptr<IUIAutomationElement> nextSiblingElement;
        check_hresult(m_uiAutomationTreeWalker->GetNextSiblingElement(uiAutomationElement.get(), nextSiblingElement.put()));
        return winrt::make<implementation::AutomationElement>(nextSiblingElement);
    }

    uia::AutomationElement AutomationTreeWalker::GetNextSiblingElementBuildCache(uia::AutomationElement element, uia::AutomationCacheRequest cacheRequest)
    {
        com_ptr<IUIAutomationElement> uiAutomationElement = winrt::get_self<implementation::AutomationElement>(element)->UiAutomationElement();
        com_ptr<IUIAutomationCacheRequest> uiAutomationCacheRequest = winrt::get_self<implementation::AutomationCacheRequest>(cacheRequest)->UiAutomationCacheRequest();
        com_ptr<IUIAutomationElement> nextSiblingElement;
        check_hresult(m_uiAutomationTreeWalker->GetNextSiblingElementBuildCache(uiAutomationElement.get(), uiAutomationCacheRequest.get(), nextSiblingElement.put()));
        return winrt::make<implementation::AutomationElement>(nextSiblingElement);
    }

    uia::AutomationElement AutomationTreeWalker::GetParentElement(uia::AutomationElement element)
    {
        com_ptr<IUIAutomationElement> uiAutomationElement = winrt::get_self<implementation::AutomationElement>(element)->UiAutomationElement();
        com_ptr<IUIAutomationElement> parentElement;
        check_hresult(m_uiAutomationTreeWalker->GetParentElement(uiAutomationElement.get(), parentElement.put()));
        return winrt::make<implementation::AutomationElement>(parentElement);
    }

    uia::AutomationElement AutomationTreeWalker::GetParentElementBuildCache(uia::AutomationElement element, uia::AutomationCacheRequest cacheRequest)
    {
        com_ptr<IUIAutomationElement> uiAutomationElement = winrt::get_self<implementation::AutomationElement>(element)->UiAutomationElement();
        com_ptr<IUIAutomationCacheRequest> uiAutomationCacheRequest = winrt::get_self<implementation::AutomationCacheRequest>(cacheRequest)->UiAutomationCacheRequest();
        com_ptr<IUIAutomationElement> parentElement;
        check_hresult(m_uiAutomationTreeWalker->GetParentElementBuildCache(uiAutomationElement.get(), uiAutomationCacheRequest.get(), parentElement.put()));
        return winrt::make<implementation::AutomationElement>(parentElement);
    }

    uia::AutomationElement AutomationTreeWalker::GetPreviousSiblingElement(uia::AutomationElement element)
    {
        com_ptr<IUIAutomationElement> uiAutomationElement = winrt::get_self<implementation::AutomationElement>(element)->UiAutomationElement();
        com_ptr<IUIAutomationElement> previousSiblingElement;
        check_hresult(m_uiAutomationTreeWalker->GetPreviousSiblingElement(uiAutomationElement.get(), previousSiblingElement.put()));
        return winrt::make<implementation::AutomationElement>(previousSiblingElement);
    }

    uia::AutomationElement AutomationTreeWalker::GetPreviousSiblingElementBuildCache(uia::AutomationElement element, uia::AutomationCacheRequest cacheRequest)
    {
        com_ptr<IUIAutomationElement> uiAutomationElement = winrt::get_self<implementation::AutomationElement>(element)->UiAutomationElement();
        com_ptr<IUIAutomationCacheRequest> uiAutomationCacheRequest = winrt::get_self<implementation::AutomationCacheRequest>(cacheRequest)->UiAutomationCacheRequest();
        com_ptr<IUIAutomationElement> previousSiblingElement;
        check_hresult(m_uiAutomationTreeWalker->GetPreviousSiblingElementBuildCache(uiAutomationElement.get(), uiAutomationCacheRequest.get(), previousSiblingElement.put()));
        return winrt::make<implementation::AutomationElement>(previousSiblingElement);
    }

    uia::AutomationElement AutomationTreeWalker::NormalizeElement(uia::AutomationElement element)
    {
        com_ptr<IUIAutomationElement> uiAutomationElement = winrt::get_self<implementation::AutomationElement>(element)->UiAutomationElement();
        com_ptr<IUIAutomationElement> normalizedElement;
        check_hresult(m_uiAutomationTreeWalker->NormalizeElement(uiAutomationElement.get(), normalizedElement.put()));
        return winrt::make<implementation::AutomationElement>(normalizedElement);
    }

    uia::AutomationElement AutomationTreeWalker::NormalizeElementBuildCache(uia::AutomationElement element, uia::AutomationCacheRequest cacheRequest)
    {
        com_ptr<IUIAutomationElement> uiAutomationElement = winrt::get_self<implementation::AutomationElement>(element)->UiAutomationElement();
        com_ptr<IUIAutomationCacheRequest> uiAutomationCacheRequest = winrt::get_self<implementation::AutomationCacheRequest>(cacheRequest)->UiAutomationCacheRequest();
        com_ptr<IUIAutomationElement> normalizedElement;
        check_hresult(m_uiAutomationTreeWalker->NormalizeElementBuildCache(uiAutomationElement.get(), uiAutomationCacheRequest.get(), normalizedElement.put()));
        return winrt::make<implementation::AutomationElement>(normalizedElement);
    }
}
