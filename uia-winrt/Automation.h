#pragma once

#include "Automation.g.h"

namespace winrt::uia::implementation
{
    struct Automation : AutomationT<Automation>
    {
        Automation();

        uia::AutomationCondition ContentViewCondition();
        uia::AutomationTreeWalker ContentViewWalker();
        uia::AutomationCondition ControlViewCondition();
        uia::AutomationTreeWalker ControlViewWalker();
        //ProxyFactoryMapping();
        uia::AutomationCondition RawViewCondition();
        uia::AutomationTreeWalker RawViewWalker();
        //ReservedMixedAttributeValue();
        //ReservedNotSupportedValue();

        //AddAutomationEventHandler();
        //AddFocusChangedEventHandler();
        //AddPropertyChangedEventHandler();
        //AddPropertyChangedEventHandlerNativeArray();
        //AddStructureChangedEventHandler();

        //CheckNotSupported();
        bool CompareElements(uia::AutomationElement const& el1, uia::AutomationElement const& el2);
        //bool CompareRuntimeIds();

        uia::AutomationCondition CreateAndCondition(uia::AutomationCondition const& condition1, uia::AutomationCondition const& condition2);
        //uia::AutomationCondition CreateAndConditionFromArray();
        //uia::AutomationCondition CreateAndConditionFromNativeArray();
        uia::AutomationCacheRequest CreateCacheRequest();
        uia::AutomationCondition CreateFalseCondition();
        uia::AutomationCondition CreateNotCondition(uia::AutomationCondition const& condition);
        uia::AutomationCondition CreateOrCondition(uia::AutomationCondition const& condition1, uia::AutomationCondition const& condition2);
        //uia::AutomationCondition CreateOrConditionFromArray();
        //uia::AutomationCondition CreateOrConditionFromNativeArray();
        uia::AutomationCondition CreatePropertyCondition(uia::AutomationProperty const& property, Windows::Foundation::IInspectable const& value);
        uia::AutomationCondition CreatePropertyConditionEx(uia::AutomationProperty const& property, Windows::Foundation::IInspectable const& value, uia::PropertyConditionOptions options);

        //CreateProxyFactoryEntry();
        //CreateTreeWalker();
        uia::AutomationCondition CreateTrueCondition();
        //uia::AutomationElement ElementFromHandle();
        //uia::AutomationElement ElementFromHandleBuildCache();
        //uia::AutomationElement ElementFromIAccessible();
        //uia::AutomationElement ElementFromIAccessibleBuildCache();
        uia::AutomationElement ElementFromPoint(Windows::Foundation::Point const& point);
        uia::AutomationElement ElementFromPointBuildCache(Windows::Foundation::Point const& point, uia::AutomationCacheRequest const& cacheRequest);
        uia::AutomationElement GetFocusedElement();
        uia::AutomationElement GetFocusedElementBuildCache(uia::AutomationCacheRequest const& cacheRequest);
        hstring GetPatternProgrammaticName(uia::AutomationPattern pattern);
        hstring GetPropertyProgrammaticName(uia::AutomationProperty property);
        uia::AutomationElement GetRootElement();
        uia::AutomationElement GetRootElementBuildCache(uia::AutomationCacheRequest const& cacheRequest);

        //IntNativeArrayToSafeArray();
        //IntSafeArrayToNativeArray();
        //PollForPotentialSupportedPatterns();
        //PollForPotentialSupportedProperties();
        //RectToVariant();

        void RemoveAllEventHandlers();
        //RemoveAutomationEventHandler();
        //RemoveFocusChangedEventHandler();
        //RemovePropertyChangedEventHandler();
        //RemoveStructureChangedEventHandler();

        //SafeArrayToRectNativeArray();
        //VariantToRect();
      
    private:
        com_ptr<IUIAutomation> m_uiAutomation{ nullptr };
    };
}

namespace winrt::uia::factory_implementation
{
    struct Automation : AutomationT<Automation, implementation::Automation>
    {
    };
}
