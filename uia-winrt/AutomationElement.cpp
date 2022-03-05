#include "pch.h"
#include "AutomationElement.h"
#if __has_include("AutomationElement.g.cpp")
#include "AutomationElement.g.cpp"
#endif

#include "EnumHelpers.h"
#include "AutomationCacheRequest.h"
#include "AutomationCondition.h"
#include "AutomationElementArray.h"

namespace winrt::uia::implementation
{
    hstring AutomationElement::CachedAcceleratorKey()
    {
        BSTR acceleratorKey;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedAcceleratorKey(&acceleratorKey));
        return hstring{ std::move(acceleratorKey) };
    }

    hstring AutomationElement::CachedAccessKey()
    {
        BSTR accessKey;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedAccessKey(&accessKey));
        return hstring{ std::move(accessKey) };
    }

    hstring AutomationElement::CachedAriaProperties()
    {
        BSTR ariaProperties;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedAriaProperties(&ariaProperties));
        return hstring{ std::move(ariaProperties) };
    }

    hstring AutomationElement::CachedAriaRole()
    {
        BSTR ariaRole;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedAriaRole(&ariaRole));
        return hstring{ std::move(ariaRole) };
    }

    hstring AutomationElement::CachedAutomationId()
    {
        BSTR automationId;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedAutomationId(&automationId));
        return hstring{ std::move(automationId) };
    }

    hstring AutomationElement::CachedClassName()
    {
        BSTR className;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedClassName(&className));
        return className;
    }

    Windows::Foundation::Rect AutomationElement::CachedBoundingRectangle()
    {
        RECT boundingRect{ 0, 0, 0, 0 };
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedBoundingRectangle(&boundingRect));
        float width = (float)boundingRect.right - (float)boundingRect.left;
        float height = (float)boundingRect.bottom - (float)boundingRect.top;
        return Windows::Foundation::Rect{ (float)boundingRect.left, (float)boundingRect.top, width, height };
    }

    uia::AutomationElementArray AutomationElement::CachedControllerFor()
    {
        com_ptr<IUIAutomationElementArray> controllerFor;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedControllerFor(controllerFor.put()));
        return winrt::make<implementation::AutomationElementArray>(controllerFor);
    }

    uia::ControlType AutomationElement::CachedControlType()
    {
        CONTROLTYPEID controlTypeId;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedControlType(&controlTypeId));
        return uia::ControlType::LookupById(controlTypeId);
    }

    int AutomationElement::CachedCulture()
    {
        int culture;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedCulture(&culture));
        return culture;
    }

    uia::AutomationElementArray AutomationElement::CachedDescribedBy()
    {
        com_ptr<IUIAutomationElementArray> describedBy;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedDescribedBy(describedBy.put()));
        return winrt::make<implementation::AutomationElementArray>(describedBy);
    }

    uia::AutomationElementArray AutomationElement::CachedFlowsTo()
    {
        com_ptr<IUIAutomationElementArray> flowsTo;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedFlowsTo(flowsTo.put()));
        return winrt::make<implementation::AutomationElementArray>(flowsTo);
    }

    hstring AutomationElement::CachedFrameworkId()
    {
        BSTR frameworkId;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedFrameworkId(&frameworkId));
        return frameworkId;
    }

    bool AutomationElement::CachedHasKeyboardFocus()
    {
        BOOL hasKeyboardFocus;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedHasKeyboardFocus(&hasKeyboardFocus));
        return hasKeyboardFocus;
    }

    hstring AutomationElement::CachedHelpText()
    {
        BSTR helpText;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedHelpText(&helpText));
        return helpText;
    }

    bool AutomationElement::CachedIsContentElement()
    {
        BOOL isContentElement;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedIsContentElement(&isContentElement));
        return isContentElement;
    }

    bool AutomationElement::CachedIsControlElement()
    {
        BOOL isControlElement;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedIsControlElement(&isControlElement));
        return isControlElement;
    }

    bool AutomationElement::CachedIsDataValidForForm()
    {
        BOOL isDataValidForForm;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedIsDataValidForForm(&isDataValidForForm));
        return isDataValidForForm;
    }

    bool AutomationElement::CachedIsEnabled()
    {
        BOOL isEnabled;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedIsEnabled(&isEnabled));
        return isEnabled;
    }

    bool AutomationElement::CachedIsKeyboardFocusable()
    {
        BOOL isKeyboardFocusable;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedIsKeyboardFocusable(&isKeyboardFocusable));
        return isKeyboardFocusable;
    }

    bool AutomationElement::CachedIsOffscreen()
    {
        BOOL isOffscreen;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedIsOffscreen(&isOffscreen));
        return isOffscreen;
    }

    bool AutomationElement::CachedIsPassword()
    {
        BOOL isPassword;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedIsPassword(&isPassword));
        return isPassword;
    }

    bool AutomationElement::CachedIsRequiredForForm()
    {
        BOOL isRequiredForForm;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedIsRequiredForForm(&isRequiredForForm));
        return isRequiredForForm;
    }

    hstring AutomationElement::CachedItemStatus()
    {
        BSTR itemStatus;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedItemStatus(&itemStatus));
        return hstring{ std::move(itemStatus) };
    }

    hstring AutomationElement::CachedItemType()
    {
        BSTR itemType;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedItemType(&itemType));
        return hstring{ std::move(itemType) };
    }

    uia::AutomationElement AutomationElement::CachedLabeledBy()
    {
        com_ptr<IUIAutomationElement> labeledBy;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedLabeledBy(labeledBy.put()));
        return winrt::make<implementation::AutomationElement>(labeledBy);
    }

    hstring AutomationElement::CachedLocalizedControlType()
    {
        BSTR localizedControlType;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedLocalizedControlType(&localizedControlType));
        return hstring{ std::move(localizedControlType) };
    }

    //CachedNativeWindowHandle();

    uia::Orientation AutomationElement::CachedOrientation()
    {
        OrientationType orientationType;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedOrientation(&orientationType));
        return OrientationTypeToOrientation(orientationType);
    }

    int AutomationElement::CachedProcessId()
    {
        int processId;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedProcessId(&processId));
        return processId;
    }

    hstring AutomationElement::CachedProviderDescription()
    {
        BSTR providerDescription;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedProviderDescription(&providerDescription));
        return hstring{ std::move(providerDescription) };
    }

    hstring AutomationElement::CachedName()
    {
        BSTR name;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CachedName(&name));
        return hstring{ std::move(name) };
    }


    // Current
    hstring AutomationElement::CurrentAcceleratorKey()
    {
        BSTR acceleratorKey;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentAcceleratorKey(&acceleratorKey));
        return hstring{ std::move(acceleratorKey) };
    }

    hstring AutomationElement::CurrentAccessKey()
    {
        BSTR accessKey;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentAccessKey(&accessKey));
        return hstring{ std::move(accessKey) };
    }

    hstring AutomationElement::CurrentAriaProperties()
    {
        BSTR ariaProperties;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentAriaProperties(&ariaProperties));
        return hstring{ std::move(ariaProperties) };
    }

    hstring AutomationElement::CurrentAriaRole()
    {
        BSTR ariaRole;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentAriaRole(&ariaRole));
        return hstring{ std::move(ariaRole) };
    }

    hstring AutomationElement::CurrentAutomationId()
    {
        BSTR automationId;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentAutomationId(&automationId));
        return hstring{ std::move(automationId) };
    }

    Windows::Foundation::Rect AutomationElement::CurrentBoundingRectangle()
    {
        RECT boundingRect{ 0, 0, 0, 0 };
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentBoundingRectangle(&boundingRect));
        float width = (float)boundingRect.right - (float)boundingRect.left;
        float height = (float)boundingRect.bottom - (float)boundingRect.top;
        return Windows::Foundation::Rect{ (float)boundingRect.left, (float)boundingRect.top, width, height };
    }

    hstring AutomationElement::CurrentClassName()
    {
        BSTR className;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentClassName(&className));
        return className;
    }

    uia::AutomationElementArray AutomationElement::CurrentControllerFor()
    {
        com_ptr<IUIAutomationElementArray> controllerFor;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentControllerFor(controllerFor.put()));
        return winrt::make<implementation::AutomationElementArray>(controllerFor);
    }

    uia::ControlType AutomationElement::CurrentControlType()
    {
        CONTROLTYPEID controlTypeId;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentControlType(&controlTypeId));
        return uia::ControlType::LookupById(controlTypeId);
    }

    int AutomationElement::CurrentCulture()
    {
        int culture;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentCulture(&culture));
        return culture;
    }

    uia::AutomationElementArray AutomationElement::CurrentDescribedBy()
    {
        com_ptr<IUIAutomationElementArray> describedBy;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentDescribedBy(describedBy.put()));
        return winrt::make<implementation::AutomationElementArray>(describedBy);
    }

    uia::AutomationElementArray AutomationElement::CurrentFlowsTo()
    {
        com_ptr<IUIAutomationElementArray> flowsTo;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentFlowsTo(flowsTo.put()));
        return winrt::make<implementation::AutomationElementArray>(flowsTo);
    }

    hstring AutomationElement::CurrentFrameworkId()
    {
        BSTR frameworkId;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentFrameworkId(&frameworkId));
        return frameworkId;
    }

    bool AutomationElement::CurrentHasKeyboardFocus()
    {
        BOOL hasKeyboardFocus;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentHasKeyboardFocus(&hasKeyboardFocus));
        return hasKeyboardFocus;
    }

    hstring AutomationElement::CurrentHelpText()
    {
        BSTR helpText;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentHelpText(&helpText));
        return helpText;
    }

    bool AutomationElement::CurrentIsContentElement()
    {
        BOOL isContentElement;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentIsContentElement(&isContentElement));
        return isContentElement;
    }

    bool AutomationElement::CurrentIsControlElement()
    {
        BOOL isControlElement;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentIsControlElement(&isControlElement));
        return isControlElement;
    }

    bool AutomationElement::CurrentIsDataValidForForm()
    {
        BOOL isDataValidForForm;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentIsDataValidForForm(&isDataValidForForm));
        return isDataValidForForm;
    }

    bool AutomationElement::CurrentIsEnabled()
    {
        BOOL isEnabled;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentIsEnabled(&isEnabled));
        return isEnabled;
    }

    bool AutomationElement::CurrentIsKeyboardFocusable()
    {
        BOOL isKeyboardFocusable;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentIsKeyboardFocusable(&isKeyboardFocusable));
        return isKeyboardFocusable;
    }

    bool AutomationElement::CurrentIsOffscreen()
    {
        BOOL isOffscreen;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentIsOffscreen(&isOffscreen));
        return isOffscreen;
    }

    bool AutomationElement::CurrentIsPassword()
    {
        BOOL isPassword;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentIsPassword(&isPassword));
        return isPassword;
    }

    bool AutomationElement::CurrentIsRequiredForForm()
    {
        BOOL isRequiredForForm;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentIsRequiredForForm(&isRequiredForForm));
        return isRequiredForForm;
    }

    hstring AutomationElement::CurrentItemStatus()
    {
        BSTR itemStatus;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentItemStatus(&itemStatus));
        return hstring{ std::move(itemStatus) };
    }

    hstring AutomationElement::CurrentItemType()
    {
        BSTR itemType;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentItemType(&itemType));
        return hstring{ std::move(itemType) };
    }

    uia::AutomationElement AutomationElement::CurrentLabeledBy()
    {
        com_ptr<IUIAutomationElement> labeledBy;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentLabeledBy(labeledBy.put()));
        return winrt::make<implementation::AutomationElement>(labeledBy);
    }

    hstring AutomationElement::CurrentLocalizedControlType()
    {
        BSTR localizedControlType;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentLocalizedControlType(&localizedControlType));
        return hstring{ std::move(localizedControlType) };
    }

    hstring AutomationElement::CurrentName()
    {
        BSTR name;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentName(&name));
        return hstring{ std::move(name) };
    }

    //CurrentNativeWindowHandle();

    uia::Orientation AutomationElement::CurrentOrientation()
    {
        OrientationType orientationType;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentOrientation(&orientationType));
        return OrientationTypeToOrientation(orientationType);
    }

    int AutomationElement::CurrentProcessId()
    {
        int processId;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentProcessId(&processId));
        return processId;
    }

    hstring AutomationElement::CurrentProviderDescription()
    {
        BSTR providerDescription;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->get_CurrentProviderDescription(&providerDescription));
        return hstring{ std::move(providerDescription) };
    }

    uia::AutomationElement AutomationElement::BuildUpdatedCache(uia::AutomationCacheRequest const& cacheRequest)
    {
        com_ptr<IUIAutomationCacheRequest> uiAutomationCacheRequest = winrt::get_self<implementation::AutomationCacheRequest>(cacheRequest)->UiAutomationCacheRequest();
        com_ptr<IUIAutomationElement> uiAutomationElement;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->BuildUpdatedCache(uiAutomationCacheRequest.get(), uiAutomationElement.put()));
        return winrt::make<implementation::AutomationElement>(uiAutomationElement);
    }

    uia::AutomationElementArray AutomationElement::FindAll(uia::AutomationTreeScope treeScope, uia::AutomationCondition const& condition)
    {
        TreeScope scope = AutomationTreeScopeToTreeScope(treeScope);
        com_ptr<IUIAutomationCondition> uiAutomationCondition = winrt::get_self<implementation::AutomationCondition>(condition)->UiAutomationCondition();
        com_ptr<IUIAutomationElementArray> uiAutomationElementArray;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->FindAll(scope, uiAutomationCondition.get(), uiAutomationElementArray.put()));
        return winrt::make<implementation::AutomationElementArray>(uiAutomationElementArray);
    }

    uia::AutomationElementArray AutomationElement::FindAllBuildCache(uia::AutomationTreeScope treeScope, uia::AutomationCondition const& condition, uia::AutomationCacheRequest const& cacheRequest)
    {
        TreeScope scope = AutomationTreeScopeToTreeScope(treeScope);
        com_ptr<IUIAutomationCondition> uiAutomationCondition = winrt::get_self<implementation::AutomationCondition>(condition)->UiAutomationCondition();
        com_ptr<IUIAutomationCacheRequest> uiAutomationCacheRequest = winrt::get_self<implementation::AutomationCacheRequest>(cacheRequest)->UiAutomationCacheRequest();
        com_ptr<IUIAutomationElementArray> uiAutomationElementArray;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->FindAllBuildCache(scope, uiAutomationCondition.get(), uiAutomationCacheRequest.get(), uiAutomationElementArray.put()));
        return winrt::make<implementation::AutomationElementArray>(uiAutomationElementArray);
    }

    uia::AutomationElement AutomationElement::FindFirst(uia::AutomationTreeScope treeScope, uia::AutomationCondition const& condition)
    {
        TreeScope scope = AutomationTreeScopeToTreeScope(treeScope);
        com_ptr<IUIAutomationCondition> uiAutomationCondition = winrt::get_self<implementation::AutomationCondition>(condition)->UiAutomationCondition();
        com_ptr<IUIAutomationElement> uiAutomationElement;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->FindFirst(scope, uiAutomationCondition.get(), uiAutomationElement.put()));
        return winrt::make<implementation::AutomationElement>(uiAutomationElement);
    }

    uia::AutomationElement AutomationElement::FindFirstBuildCache(uia::AutomationTreeScope treeScope, uia::AutomationCondition const& condition, uia::AutomationCacheRequest const& cacheRequest)
    {
        TreeScope scope = AutomationTreeScopeToTreeScope(treeScope);
        com_ptr<IUIAutomationCondition> uiAutomationCondition = winrt::get_self<implementation::AutomationCondition>(condition)->UiAutomationCondition();
        com_ptr<IUIAutomationCacheRequest> uiAutomationCacheRequest = winrt::get_self<implementation::AutomationCacheRequest>(cacheRequest)->UiAutomationCacheRequest();
        com_ptr<IUIAutomationElement> uiAutomationElement;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->FindFirstBuildCache(scope, uiAutomationCondition.get(), uiAutomationCacheRequest.get(), uiAutomationElement.put()));
        return winrt::make<implementation::AutomationElement>(uiAutomationElement);
    }

    // Get*
    uia::AutomationElementArray AutomationElement::GetCachedChildren()
    {
        com_ptr<IUIAutomationElementArray> children;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->GetCachedChildren(children.put()));
        return winrt::make<implementation::AutomationElementArray>(children);
    }

    uia::AutomationElement AutomationElement::GetCachedParent()
    {
        com_ptr<IUIAutomationElement> parent;
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->GetCachedParent(parent.put()));
        return winrt::make<implementation::AutomationElement>(parent);
    }

    // Actions
    void AutomationElement::SetFocus()
    {
        check_pointer(m_uiAutomationElement.get());
        check_hresult(m_uiAutomationElement->SetFocus());
    }

    // ====== IUIAutomationElement2 ======

    uia::AutomationElementArray AutomationElement::CachedFlowsFrom()
    {
        com_ptr<IUIAutomationElementArray> uiAutomationElementArray;
        com_ptr<IUIAutomationElement2> uiAutomationElement2;
        m_uiAutomationElement->QueryInterface(IID_IUIAutomationElement2, uiAutomationElement2.put_void());
        check_hresult(uiAutomationElement2->get_CachedFlowsFrom(uiAutomationElementArray.put()));
        return winrt::make<implementation::AutomationElementArray>(uiAutomationElementArray);
    }

    //uia::AutomationLiveSetting AutomationElement::CachedLiveSetting();

    bool AutomationElement::CachedOptimizeForVisualContent()
    {
        BOOL optimizeForVisualContent;
        com_ptr<IUIAutomationElement2> uiAutomationElement2;
        m_uiAutomationElement->QueryInterface(IID_IUIAutomationElement2, uiAutomationElement2.put_void());
        check_hresult(uiAutomationElement2->get_CachedOptimizeForVisualContent(&optimizeForVisualContent));
        return optimizeForVisualContent;
    }

    uia::AutomationElementArray AutomationElement::CurrentFlowsFrom()
    {
        com_ptr<IUIAutomationElementArray> uiAutomationElementArray;
        com_ptr<IUIAutomationElement2> uiAutomationElement2;
        m_uiAutomationElement->QueryInterface(IID_IUIAutomationElement2, uiAutomationElement2.put_void());
        check_hresult(uiAutomationElement2->get_CurrentFlowsFrom(uiAutomationElementArray.put()));
        return winrt::make<implementation::AutomationElementArray>(uiAutomationElementArray);
    }

    //uia::AutomationLiveSetting AutomationElement::CurrentLiveSetting();

    bool AutomationElement::CurrentOptimizeForVisualContent()
    {
        BOOL optimizeForVisualContent;
        com_ptr<IUIAutomationElement2> uiAutomationElement2;
        m_uiAutomationElement->QueryInterface(IID_IUIAutomationElement2, uiAutomationElement2.put_void());
        check_hresult(uiAutomationElement2->get_CurrentOptimizeForVisualContent(&optimizeForVisualContent));
        return optimizeForVisualContent;
    }

    // ====== IUIAutomationElement3 ======

    bool AutomationElement::CachedIsPeripheral()
    {
        BOOL isPeripheral;
        com_ptr<IUIAutomationElement3> uiAutomationElement3;
        m_uiAutomationElement->QueryInterface(IID_IUIAutomationElement3, uiAutomationElement3.put_void());
        check_hresult(uiAutomationElement3->get_CachedIsPeripheral(&isPeripheral));
        return isPeripheral;
    }

    bool AutomationElement::CurrentIsPeripheral()
    {
        BOOL isPeripheral;
        com_ptr<IUIAutomationElement3> uiAutomationElement3;
        m_uiAutomationElement->QueryInterface(IID_IUIAutomationElement3, uiAutomationElement3.put_void());
        check_hresult(uiAutomationElement3->get_CurrentIsPeripheral(&isPeripheral));
        return isPeripheral;
    }

    void AutomationElement::ShowContextMenu()
    {
        com_ptr<IUIAutomationElement3> uiAutomationElement3;
        m_uiAutomationElement->QueryInterface(IID_IUIAutomationElement3, uiAutomationElement3.put_void());
        check_hresult(uiAutomationElement3->ShowContextMenu());
    }

    // ====== IUIAutomationElement4 ======

    //AutomationElement::CachedAnnotationObjects()
    //AutomationElement::CachedAnnotationTypes()

    int AutomationElement::CachedLevel()
    {
        int level;
        com_ptr<IUIAutomationElement4> uiAutomationElement4;
        m_uiAutomationElement->QueryInterface(IID_IUIAutomationElement4, uiAutomationElement4.put_void());
        check_hresult(uiAutomationElement4->get_CachedLevel(&level));
        return level;
    }

    int AutomationElement::CachedPositionInSet()
    {
        int positionInSet;
        com_ptr<IUIAutomationElement4> uiAutomationElement4;
        m_uiAutomationElement->QueryInterface(IID_IUIAutomationElement4, uiAutomationElement4.put_void());
        check_hresult(uiAutomationElement4->get_CachedPositionInSet(&positionInSet));
        return positionInSet;
    }

    int AutomationElement::CachedSizeOfSet()
    {
        int sizeOfSet;
        com_ptr<IUIAutomationElement4> uiAutomationElement4;
        m_uiAutomationElement->QueryInterface(IID_IUIAutomationElement4, uiAutomationElement4.put_void());
        check_hresult(uiAutomationElement4->get_CachedSizeOfSet(&sizeOfSet));
        return sizeOfSet;
    }

    //AutomationElement::CurrentAnnotationObjects()
    //AutomationElement::CurrentAnnotationTypes()

    int AutomationElement::CurrentLevel()
    {
        int level;
        com_ptr<IUIAutomationElement4> uiAutomationElement4;
        m_uiAutomationElement->QueryInterface(IID_IUIAutomationElement4, uiAutomationElement4.put_void());
        check_hresult(uiAutomationElement4->get_CurrentLevel(&level));
        return level;
    }

    int AutomationElement::CurrentPositionInSet()
    {
        int positionInSet;
        com_ptr<IUIAutomationElement4> uiAutomationElement4;
        m_uiAutomationElement->QueryInterface(IID_IUIAutomationElement4, uiAutomationElement4.put_void());
        check_hresult(uiAutomationElement4->get_CurrentPositionInSet(&positionInSet));
        return positionInSet;
    }

    int AutomationElement::CurrentSizeOfSet()
    {
        int sizeOfSet;
        com_ptr<IUIAutomationElement4> uiAutomationElement4;
        m_uiAutomationElement->QueryInterface(IID_IUIAutomationElement4, uiAutomationElement4.put_void());
        check_hresult(uiAutomationElement4->get_CurrentSizeOfSet(&sizeOfSet));
        return sizeOfSet;
    }

    // ====== IUIAutomationElement5 ======

    //AutomationElement::CachedLandmarkType();

    hstring AutomationElement::CachedLocalizedLandmarkType()
    {
        BSTR localizedLandmarkType;
        com_ptr<IUIAutomationElement5> uiAutomationElement5;
        m_uiAutomationElement->QueryInterface(IID_IUIAutomationElement5, uiAutomationElement5.put_void());
        check_hresult(uiAutomationElement5->get_CachedLocalizedLandmarkType(&localizedLandmarkType));
        return hstring{ std::move(localizedLandmarkType) };
    }

    //AutomationElement::CurrentLandmarkType();

    hstring AutomationElement::CurrentLocalizedLandmarkType()
    {
        BSTR localizedLandmarkType;
        com_ptr<IUIAutomationElement5> uiAutomationElement5;
        m_uiAutomationElement->QueryInterface(IID_IUIAutomationElement5, uiAutomationElement5.put_void());
        check_hresult(uiAutomationElement5->get_CurrentLocalizedLandmarkType(&localizedLandmarkType));
        return hstring{ std::move(localizedLandmarkType) };
    }

    // ====== IUIAutomationElement6 ======

    hstring AutomationElement::CachedFullDescription()
    {
        BSTR fullDescription;
        com_ptr<IUIAutomationElement9> uiAutomationElement6;
        m_uiAutomationElement->QueryInterface(IID_IUIAutomationElement6, uiAutomationElement6.put_void());
        check_hresult(uiAutomationElement6->get_CachedFullDescription(&fullDescription));
        return hstring{ std::move(fullDescription) };
    }

    hstring AutomationElement::CurrentFullDescription()
    {
        BSTR fullDescription;
        com_ptr<IUIAutomationElement9> uiAutomationElement6;
        m_uiAutomationElement->QueryInterface(IID_IUIAutomationElement6, uiAutomationElement6.put_void());
        check_hresult(uiAutomationElement6->get_CurrentFullDescription(&fullDescription));
        return hstring{ std::move(fullDescription) };
    }

    // ====== IUIAutomationElement7 ======

    //uia::AutomationElementArray AutomationElement::FindAllWithOptions();
    //uia::AutomationElementArray AutomationElement::FindAllWithOptionsBuildCache();
    //uia::AutomationElement AutomationElement::FindFirstWithOptions();
    //uia::AutomationElement AutomationElement::FindFirstWithOptionsBuildCache();
    //AutomationElement::GetCurrentMetadataValue();

    // ====== IUIAutomationElement8 ======

    //AutomationElement::CachedHeadingLevel();
    //AutomationElement::CurrentHeadingLevel();

    // ====== IUIAutomationElement9 ======

    bool AutomationElement::CachedIsDialog()
    {
        BOOL isDialog;
        com_ptr<IUIAutomationElement9> uiAutomationElement9;
        m_uiAutomationElement->QueryInterface(IID_IUIAutomationElement9, uiAutomationElement9.put_void());
        check_hresult(uiAutomationElement9->get_CachedIsDialog(&isDialog));
        return isDialog;
    }

    bool AutomationElement::CurrentIsDialog()
    {
        BOOL isDialog;
        com_ptr<IUIAutomationElement9> uiAutomationElement9;
        m_uiAutomationElement->QueryInterface(IID_IUIAutomationElement9, uiAutomationElement9.put_void());
        check_hresult(uiAutomationElement9->get_CurrentIsDialog(&isDialog));
        return isDialog;
    }
}
