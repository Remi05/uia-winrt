#pragma once

#include "AutomationProperty.g.h"

namespace winrt::uia::implementation
{
    struct AutomationProperty : AutomationPropertyT<AutomationProperty>
    {
        AutomationProperty(int id) : m_id(id) {}

        int Id() const noexcept { return m_id; }

        static uia::AutomationProperty LookupById(int propertyId);

        static uia::AutomationProperty AcceleratorKey()           { return winrt::make<implementation::AutomationProperty>(UIA_AcceleratorKeyPropertyId); }
        static uia::AutomationProperty AccessKey()                { return winrt::make<implementation::AutomationProperty>(UIA_AccessKeyPropertyId); }
        static uia::AutomationProperty AnnotationObjects()        { return winrt::make<implementation::AutomationProperty>(UIA_AnnotationObjectsPropertyId); }
        static uia::AutomationProperty AnnotationTypes()          { return winrt::make<implementation::AutomationProperty>(UIA_AnnotationTypesPropertyId); }
        static uia::AutomationProperty AriaProperties()           { return winrt::make<implementation::AutomationProperty>(UIA_AriaPropertiesPropertyId); }
        static uia::AutomationProperty AriaRole()                 { return winrt::make<implementation::AutomationProperty>(UIA_AriaRolePropertyId); }
        static uia::AutomationProperty AutomationId()             { return winrt::make<implementation::AutomationProperty>(UIA_AutomationIdPropertyId); }
        static uia::AutomationProperty BoundingRectangle()        { return winrt::make<implementation::AutomationProperty>(UIA_BoundingRectanglePropertyId); }
        static uia::AutomationProperty CenterPoint()              { return winrt::make<implementation::AutomationProperty>(UIA_CenterPointPropertyId); }
        static uia::AutomationProperty ClassName()                { return winrt::make<implementation::AutomationProperty>(UIA_ClassNamePropertyId); }
        static uia::AutomationProperty ClickablePoint()           { return winrt::make<implementation::AutomationProperty>(UIA_ClickablePointPropertyId); }
        static uia::AutomationProperty ControllerFor()            { return winrt::make<implementation::AutomationProperty>(UIA_ControllerForPropertyId); }
        static uia::AutomationProperty ControlType()              { return winrt::make<implementation::AutomationProperty>(UIA_ControlTypePropertyId); }
        static uia::AutomationProperty Culture()                  { return winrt::make<implementation::AutomationProperty>(UIA_CulturePropertyId); }
        static uia::AutomationProperty DescribedBy()              { return winrt::make<implementation::AutomationProperty>(UIA_DescribedByPropertyId); }
        static uia::AutomationProperty FillColor()                { return winrt::make<implementation::AutomationProperty>(UIA_FillColorPropertyId); }
        static uia::AutomationProperty FillType()                 { return winrt::make<implementation::AutomationProperty>(UIA_FillTypePropertyId); }
        static uia::AutomationProperty FlowsFrom()                { return winrt::make<implementation::AutomationProperty>(UIA_FlowsFromPropertyId); }
        static uia::AutomationProperty FlowsTo()                  { return winrt::make<implementation::AutomationProperty>(UIA_FlowsToPropertyId); }
        static uia::AutomationProperty FrameworkId()              { return winrt::make<implementation::AutomationProperty>(UIA_FrameworkIdPropertyId); }
        static uia::AutomationProperty FullDescription()          { return winrt::make<implementation::AutomationProperty>(UIA_FullDescriptionPropertyId); }
        static uia::AutomationProperty HasKeyboardFocus()         { return winrt::make<implementation::AutomationProperty>(UIA_HasKeyboardFocusPropertyId); }
        static uia::AutomationProperty HeadingLevel()             { return winrt::make<implementation::AutomationProperty>(UIA_HeadingLevelPropertyId); }
        static uia::AutomationProperty HelpText()                 { return winrt::make<implementation::AutomationProperty>(UIA_HelpTextPropertyId); }
        static uia::AutomationProperty IsContentElement()         { return winrt::make<implementation::AutomationProperty>(UIA_IsContentElementPropertyId); }
        static uia::AutomationProperty IsControlElement()         { return winrt::make<implementation::AutomationProperty>(UIA_IsControlElementPropertyId); }
        static uia::AutomationProperty IsDataValidForForm()       { return winrt::make<implementation::AutomationProperty>(UIA_IsDataValidForFormPropertyId); }
        static uia::AutomationProperty IsDialog()                 { return winrt::make<implementation::AutomationProperty>(UIA_IsDialogPropertyId); }
        static uia::AutomationProperty IsEnabled()                { return winrt::make<implementation::AutomationProperty>(UIA_IsEnabledPropertyId); }
        static uia::AutomationProperty IsKeyboardFocusable()      { return winrt::make<implementation::AutomationProperty>(UIA_IsKeyboardFocusablePropertyId); }
        static uia::AutomationProperty IsOffscreen()              { return winrt::make<implementation::AutomationProperty>(UIA_IsOffscreenPropertyId); }
        static uia::AutomationProperty IsPassword()               { return winrt::make<implementation::AutomationProperty>(UIA_IsPasswordPropertyId); }
        static uia::AutomationProperty IsPeripheral()             { return winrt::make<implementation::AutomationProperty>(UIA_IsPeripheralPropertyId); }
        static uia::AutomationProperty IsRequiredForForm()        { return winrt::make<implementation::AutomationProperty>(UIA_IsRequiredForFormPropertyId); }
        static uia::AutomationProperty ItemStatus()               { return winrt::make<implementation::AutomationProperty>(UIA_ItemStatusPropertyId); }
        static uia::AutomationProperty ItemType()                 { return winrt::make<implementation::AutomationProperty>(UIA_ItemTypePropertyId); }
        static uia::AutomationProperty LabeledBy()                { return winrt::make<implementation::AutomationProperty>(UIA_LabeledByPropertyId); }
        static uia::AutomationProperty LandmarkType()             { return winrt::make<implementation::AutomationProperty>(UIA_LandmarkTypePropertyId); }
        static uia::AutomationProperty Level()                    { return winrt::make<implementation::AutomationProperty>(UIA_LevelPropertyId); }
        static uia::AutomationProperty LiveSetting()              { return winrt::make<implementation::AutomationProperty>(UIA_LiveSettingPropertyId); }
        static uia::AutomationProperty LocalizedControlType()     { return winrt::make<implementation::AutomationProperty>(UIA_LocalizedControlTypePropertyId); }
        static uia::AutomationProperty LocalizedLandmarkType()    { return winrt::make<implementation::AutomationProperty>(UIA_LocalizedLandmarkTypePropertyId); }
        static uia::AutomationProperty Name()                     { return winrt::make<implementation::AutomationProperty>(UIA_NamePropertyId); }
        static uia::AutomationProperty NativeWindowHandle()       { return winrt::make<implementation::AutomationProperty>(UIA_NativeWindowHandlePropertyId); }
        static uia::AutomationProperty OptimizeForVisualContent() { return winrt::make<implementation::AutomationProperty>(UIA_OptimizeForVisualContentPropertyId); }
        static uia::AutomationProperty Orientation()              { return winrt::make<implementation::AutomationProperty>(UIA_OrientationPropertyId); }
        static uia::AutomationProperty OutlineColor()             { return winrt::make<implementation::AutomationProperty>(UIA_OutlineColorPropertyId); }
        static uia::AutomationProperty OutlineThickness()         { return winrt::make<implementation::AutomationProperty>(UIA_OutlineThicknessPropertyId); }
        static uia::AutomationProperty PositionInSet()            { return winrt::make<implementation::AutomationProperty>(UIA_PositionInSetPropertyId); }
        static uia::AutomationProperty ProcessId()                { return winrt::make<implementation::AutomationProperty>(UIA_ProcessIdPropertyId); }
        static uia::AutomationProperty ProviderDescription()      { return winrt::make<implementation::AutomationProperty>(UIA_ProviderDescriptionPropertyId); }
        static uia::AutomationProperty Rotation()                 { return winrt::make<implementation::AutomationProperty>(UIA_RotationPropertyId); }
        static uia::AutomationProperty RuntimeId()                { return winrt::make<implementation::AutomationProperty>(UIA_RuntimeIdPropertyId); }
        static uia::AutomationProperty Size()                     { return winrt::make<implementation::AutomationProperty>(UIA_SizePropertyId); }
        static uia::AutomationProperty SizeOfSet()                { return winrt::make<implementation::AutomationProperty>(UIA_SizeOfSetPropertyId); }
        static uia::AutomationProperty VisualEffects()            { return winrt::make<implementation::AutomationProperty>(UIA_VisualEffectsPropertyId); }

    private:
        int m_id;
    };
}

namespace winrt::uia::factory_implementation
{
    struct AutomationProperty : AutomationPropertyT<AutomationProperty, implementation::AutomationProperty>
    {
    };
}
