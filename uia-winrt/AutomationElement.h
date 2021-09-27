#pragma once

#include "AutomationElement.g.h"

namespace winrt::uia::implementation
{
    struct AutomationElement : AutomationElementT<AutomationElement>
    {
        AutomationElement(com_ptr<IUIAutomationElement> const& uiAutomationElement) 
            : m_uiAutomationElement(uiAutomationElement) {}

        com_ptr<IUIAutomationElement> UiAutomationElement() const noexcept { return m_uiAutomationElement; };

        hstring CachedAcceleratorKey();
        hstring CachedAccessKey();
        hstring CachedAriaProperties();
        hstring CachedAriaRole();
        hstring CachedAutomationId();
        Windows::Foundation::Rect CachedBoundingRectangle();
        hstring CachedClassName();
        uia::AutomationElementArray CachedControllerFor();
        uia::ControlType CachedControlType();
        int CachedCulture();
        uia::AutomationElementArray CachedDescribedBy();
        uia::AutomationElementArray CachedFlowsTo();
        hstring CachedFrameworkId();
        bool CachedHasKeyboardFocus();
        hstring CachedHelpText();
        bool CachedIsContentElement();
        bool CachedIsControlElement();
        bool CachedIsDataValidForForm();
        bool CachedIsEnabled();
        bool CachedIsKeyboardFocusable();
        bool CachedIsOffscreen();
        bool CachedIsPassword();
        bool CachedIsRequiredForForm();
        hstring CachedItemStatus();
        hstring CachedItemType();
        uia::AutomationElement CachedLabeledBy();
        hstring CachedLocalizedControlType();
        hstring CachedName();
        //CachedNativeWindowHandle();
        uia::Orientation CachedOrientation();
        int CachedProcessId();
        hstring CachedProviderDescription();

        hstring CurrentAcceleratorKey();
        hstring CurrentAccessKey();
        hstring CurrentAriaProperties();
        hstring CurrentAriaRole();
        hstring CurrentAutomationId();
        Windows::Foundation::Rect CurrentBoundingRectangle();
        hstring CurrentClassName();
        uia::AutomationElementArray CurrentControllerFor();
        uia::ControlType CurrentControlType();
        int CurrentCulture();
        uia::AutomationElementArray CurrentDescribedBy();
        uia::AutomationElementArray CurrentFlowsTo();
        hstring CurrentFrameworkId();
        bool CurrentHasKeyboardFocus();
        hstring CurrentHelpText();
        bool CurrentIsContentElement();
        bool CurrentIsControlElement();
        bool CurrentIsDataValidForForm();
        bool CurrentIsEnabled();
        bool CurrentIsKeyboardFocusable();
        bool CurrentIsOffscreen();
        bool CurrentIsPassword();
        bool CurrentIsRequiredForForm();
        hstring CurrentItemStatus();
        hstring CurrentItemType();
        uia::AutomationElement CurrentLabeledBy();
        hstring CurrentLocalizedControlType();
        hstring CurrentName();
        //CurrentNativeWindowHandle();
        uia::Orientation CurrentOrientation();
        int CurrentProcessId();
        hstring CurrentProviderDescription();

        uia::AutomationElement BuildUpdatedCache(uia::AutomationCacheRequest const& cacheRequest);
        uia::AutomationElementArray FindAll(uia::AutomationTreeScope treeScope, uia::AutomationCondition const& condition);
        uia::AutomationElementArray FindAllBuildCache(uia::AutomationTreeScope treeScope, uia::AutomationCondition const& condition, uia::AutomationCacheRequest const& cacheRequest);
        uia::AutomationElement FindFirst(uia::AutomationTreeScope treeScope, uia::AutomationCondition const& condition);
        uia::AutomationElement FindFirstBuildCache(uia::AutomationTreeScope treeScope, uia::AutomationCondition const& condition, uia::AutomationCacheRequest const& cacheRequest);

        uia::AutomationElementArray GetCachedChildren();
        uia::AutomationElement GetCachedParent();
        //GetCachedPattern();
        //GetCachedPatternAs();
        //GetCachedPropertyValue();
        //GetCachedPropertyValueEx();
        //bool TryGetClickablePoint(Windows::Foundation::Point& point);
        //GetCurrentPattern();
        //GetCurrentPatternAs();
        //GetCurrentPropertyValue();
        //GetCurrentPropertyValueEx();
        //GetRuntimeId();

        void SetFocus();

        // ====== IUIAutomationElement2 ======

        uia::AutomationElementArray CachedFlowsFrom();
        //uia::AutomationLiveSetting CachedLiveSetting();
        bool CachedOptimizeForVisualContent();
        uia::AutomationElementArray CurrentFlowsFrom();
        //uia::AutomationLiveSetting CurrentLiveSetting();
        bool CurrentOptimizeForVisualContent();

        // ====== IUIAutomationElement3 ======

        bool CachedIsPeripheral();
        bool CurrentIsPeripheral();
        void ShowContextMenu();

        // ====== IUIAutomationElement4 ======

        //CachedAnnotationObjects();
        //CachedAnnotationTypes();
        int CachedLevel();
        int CachedPositionInSet();
        int CachedSizeOfSet();
        //CurrentAnnotationObjects();
        //CurrentAnnotationTypes();
        int CurrentLevel();
        int CurrentPositionInSet();
        int CurrentSizeOfSet();

        // ====== IUIAutomationElement5 ======

        //CachedLandmarkType();
        hstring CachedLocalizedLandmarkType();
        //CurrentLandmarkType();
        hstring CurrentLocalizedLandmarkType();

        // ====== IUIAutomationElement6 ======

        hstring CachedFullDescription();
        hstring CurrentFullDescription();

        // ====== IUIAutomationElement7 ======

        //uia::AutomationElementArray FindAllWithOptions();
        //uia::AutomationElementArray FindAllWithOptionsBuildCache();
        //uia::AutomationElement FindFirstWithOptions();
        //uia::AutomationElement FindFirstWithOptionsBuildCache();
        //GetCurrentMetadataValue();

        // ====== IUIAutomationElement8 ======

        //CachedHeadingLevel();
        //CurrentHeadingLevel();

        // ====== IUIAutomationElement9 ======

        bool CachedIsDialog();
        bool CurrentIsDialog();

    private:
        com_ptr<IUIAutomationElement> m_uiAutomationElement{ nullptr };
    };
}
