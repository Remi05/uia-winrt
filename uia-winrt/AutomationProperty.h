#pragma once

#include "AutomationProperty.g.h"

namespace winrt::uia::implementation
{
    struct AutomationProperty : AutomationPropertyT<AutomationProperty>
    {
        AutomationProperty(int id) : m_id(id) {}

        int Id() const noexcept { return m_id; }

        static uia::AutomationProperty LookupById(int propertyId);

        //static uia::AutomationProperty AppBar()       { return winrt::make<implementation::AutomationProperty>(UIA_AppBarControlTypeId); }
        //static uia::AutomationProperty Button()       { return winrt::make<implementation::AutomationProperty>(UIA_ButtonControlTypeId); }
        //static uia::AutomationProperty Calendar()     { return winrt::make<implementation::AutomationProperty>(UIA_CalendarControlTypeId); }
        //static uia::AutomationProperty CheckBox()     { return winrt::make<implementation::AutomationProperty>(UIA_CheckBoxControlTypeId); }
        //static uia::AutomationProperty ComboBox()     { return winrt::make<implementation::AutomationProperty>(UIA_ComboBoxControlTypeId); }
        //static uia::AutomationProperty Custom()       { return winrt::make<implementation::AutomationProperty>(UIA_CustomControlTypeId); }
        //static uia::AutomationProperty DataGrid()     { return winrt::make<implementation::AutomationProperty>(UIA_DataGridControlTypeId); }
        //static uia::AutomationProperty DataItem()     { return winrt::make<implementation::AutomationProperty>(UIA_DataItemControlTypeId); }
        //static uia::AutomationProperty Document()     { return winrt::make<implementation::AutomationProperty>(UIA_DocumentControlTypeId); }
        //static uia::AutomationProperty Edit()         { return winrt::make<implementation::AutomationProperty>(UIA_EditControlTypeId); }
        //static uia::AutomationProperty Group()        { return winrt::make<implementation::AutomationProperty>(UIA_GroupControlTypeId); }
        //static uia::AutomationProperty Header()       { return winrt::make<implementation::AutomationProperty>(UIA_HeaderControlTypeId); }
        //static uia::AutomationProperty HeaderItem()   { return winrt::make<implementation::AutomationProperty>(UIA_HeaderItemControlTypeId); }
        //static uia::AutomationProperty Hyperlink()    { return winrt::make<implementation::AutomationProperty>(UIA_HyperlinkControlTypeId); }
        //static uia::AutomationProperty Image()        { return winrt::make<implementation::AutomationProperty>(UIA_ImageControlTypeId); }
        //static uia::AutomationProperty List()         { return winrt::make<implementation::AutomationProperty>(UIA_ListControlTypeId); }
        //static uia::AutomationProperty ListItem()     { return winrt::make<implementation::AutomationProperty>(UIA_ListItemControlTypeId); }
        //static uia::AutomationProperty MenuBar()      { return winrt::make<implementation::AutomationProperty>(UIA_MenuBarControlTypeId); }
        //static uia::AutomationProperty Menu()         { return winrt::make<implementation::AutomationProperty>(UIA_MenuControlTypeId); }
        //static uia::AutomationProperty MenuItem()     { return winrt::make<implementation::AutomationProperty>(UIA_MenuItemControlTypeId); }
        //static uia::AutomationProperty Pane()         { return winrt::make<implementation::AutomationProperty>(UIA_PaneControlTypeId); }
        //static uia::AutomationProperty ProgressBar()  { return winrt::make<implementation::AutomationProperty>(UIA_ProgressBarControlTypeId); }
        //static uia::AutomationProperty RadioButton()  { return winrt::make<implementation::AutomationProperty>(UIA_RadioButtonControlTypeId); }
        //static uia::AutomationProperty ScrollBar()    { return winrt::make<implementation::AutomationProperty>(UIA_ScrollBarControlTypeId); }
        //static uia::AutomationProperty SemanticZoom() { return winrt::make<implementation::AutomationProperty>(UIA_SemanticZoomControlTypeId); }
        //static uia::AutomationProperty Separator()    { return winrt::make<implementation::AutomationProperty>(UIA_SeparatorControlTypeId); }
        //static uia::AutomationProperty Slider()       { return winrt::make<implementation::AutomationProperty>(UIA_SliderControlTypeId); }
        //static uia::AutomationProperty Spinner()      { return winrt::make<implementation::AutomationProperty>(UIA_SpinnerControlTypeId); }
        //static uia::AutomationProperty SplitButton()  { return winrt::make<implementation::AutomationProperty>(UIA_SplitButtonControlTypeId); }
        //static uia::AutomationProperty StatusBar()    { return winrt::make<implementation::AutomationProperty>(UIA_StatusBarControlTypeId); }
        //static uia::AutomationProperty Tab()          { return winrt::make<implementation::AutomationProperty>(UIA_TabControlTypeId); }
        //static uia::AutomationProperty TabItem()      { return winrt::make<implementation::AutomationProperty>(UIA_TabItemControlTypeId); }
        //static uia::AutomationProperty Table()        { return winrt::make<implementation::AutomationProperty>(UIA_TableControlTypeId); }
        //static uia::AutomationProperty Text()         { return winrt::make<implementation::AutomationProperty>(UIA_TextControlTypeId); }
        //static uia::AutomationProperty Thumb()        { return winrt::make<implementation::AutomationProperty>(UIA_ThumbControlTypeId); }
        //static uia::AutomationProperty TitleBar()     { return winrt::make<implementation::AutomationProperty>(UIA_TitleBarControlTypeId); }
        //static uia::AutomationProperty ToolBar()      { return winrt::make<implementation::AutomationProperty>(UIA_ToolBarControlTypeId); }
        //static uia::AutomationProperty ToolTip()      { return winrt::make<implementation::AutomationProperty>(UIA_ToolTipControlTypeId); }
        //static uia::AutomationProperty Tree()         { return winrt::make<implementation::AutomationProperty>(UIA_TreeControlTypeId); }
        //static uia::AutomationProperty TreeItem()     { return winrt::make<implementation::AutomationProperty>(UIA_TreeItemControlTypeId); }
        //static uia::AutomationProperty Window()       { return winrt::make<implementation::AutomationProperty>(UIA_WindowControlTypeId); }

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
