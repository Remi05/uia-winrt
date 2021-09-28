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

        //void AddAutomationEventHandler(uia::AutomationCacheRequest const& cacheRequest, uia::AutomationEventHandler const& handler);
        void AddFocusChangedEventHandler(uia::AutomationCacheRequest const& cacheRequest, uia::FocusChangedEventHandler const& handler);
        //void AddPropertyChangedEventHandler(uia::AutomationCacheRequest const& cacheRequest, uia::PropertyChangedEventHandler const& handler);
        //void AddPropertyChangedEventHandlerNativeArray();
        //void AddStructureChangedEventHandler(uia::AutomationCacheRequest const& cacheRequest, uia::StructureChangedEventHandler const& handler);
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
        uia::AutomationTreeWalker CreateTreeWalker(uia::AutomationCondition const condition);
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
        //void RemoveAutomationEventHandler(uia::AutomationEventHandler const& handler);
        void RemoveFocusChangedEventHandler(uia::FocusChangedEventHandler const& handler);
        void RemovePropertyChangedEventHandler(uia::AutomationElement const& element, uia::PropertyChangedEventHandler const& handler);
        //void RemoveStructureChangedEventHandler(uia::StructureChangedEventHandler const& handler);
        //SafeArrayToRectNativeArray();
        //VariantToRect();

        // ====== IUIAutomation2 ======

        bool AutoSetFocus();
        void AutoSetFocus(bool value);
        int64_t ConnectionTimeout();
        void ConnectionTimeout(int64_t value);
        int64_t TransactionTimeout();
        void TransactionTimeout(int64_t value);

        // ====== IUIAutomation3 ======

        //AddTextEditTextChangedEventHandler();
        //RemoveTextEditTextChangedEventHandler();

        // ====== IUIAutomation4 ======

        //AddChangesEventHandler();
        //RemoveChangesEventHandler();

        // ====== IUIAutomation5 ======

        //AddNotificationEventHandler();
        //RemoveNotificationEventHandler();

         // ====== IUIAutomation6 ======

        //CoalesceEvents{ get; set; };
        //ConnectionRecoveryBehavior{ get; set; };

        //AddActiveTextPositionChangedEventHandler();
        //AddEventHandlerGroup();
        //CreateEventHandlerGroup();
        //RemoveActiveTextPositionChangedEventHandler();
        //RemoveEventHandlerGroup();
      
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
