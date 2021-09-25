#pragma once

#include "ControlType.g.h"

namespace winrt::uia::implementation
{
    struct ControlType : ControlTypeT<ControlType>
    {
        ControlType(int id) : m_id(id) {}

        int Id() const noexcept { return m_id; }

        static uia::ControlType LookupById(int controlTypeId);

        static uia::ControlType AppBar()       { return winrt::make<implementation::ControlType>(UIA_AppBarControlTypeId); }
        static uia::ControlType Button()       { return winrt::make<implementation::ControlType>(UIA_ButtonControlTypeId); }
        static uia::ControlType Calendar()     { return winrt::make<implementation::ControlType>(UIA_CalendarControlTypeId); }
        static uia::ControlType CheckBox()     { return winrt::make<implementation::ControlType>(UIA_CheckBoxControlTypeId); }
        static uia::ControlType ComboBox()     { return winrt::make<implementation::ControlType>(UIA_ComboBoxControlTypeId); }
        static uia::ControlType Custom()       { return winrt::make<implementation::ControlType>(UIA_CustomControlTypeId); }
        static uia::ControlType DataGrid()     { return winrt::make<implementation::ControlType>(UIA_DataGridControlTypeId); }
        static uia::ControlType DataItem()     { return winrt::make<implementation::ControlType>(UIA_DataItemControlTypeId); }
        static uia::ControlType Document()     { return winrt::make<implementation::ControlType>(UIA_DocumentControlTypeId); }
        static uia::ControlType Edit()         { return winrt::make<implementation::ControlType>(UIA_EditControlTypeId); }
        static uia::ControlType Group()        { return winrt::make<implementation::ControlType>(UIA_GroupControlTypeId); }
        static uia::ControlType Header()       { return winrt::make<implementation::ControlType>(UIA_HeaderControlTypeId); }
        static uia::ControlType HeaderItem()   { return winrt::make<implementation::ControlType>(UIA_HeaderItemControlTypeId); }
        static uia::ControlType Hyperlink()    { return winrt::make<implementation::ControlType>(UIA_HyperlinkControlTypeId); }
        static uia::ControlType Image()        { return winrt::make<implementation::ControlType>(UIA_ImageControlTypeId); }
        static uia::ControlType List()         { return winrt::make<implementation::ControlType>(UIA_ListControlTypeId); }
        static uia::ControlType ListItem()     { return winrt::make<implementation::ControlType>(UIA_ListItemControlTypeId); }
        static uia::ControlType MenuBar()      { return winrt::make<implementation::ControlType>(UIA_MenuBarControlTypeId); }
        static uia::ControlType Menu()         { return winrt::make<implementation::ControlType>(UIA_MenuControlTypeId); }
        static uia::ControlType MenuItem()     { return winrt::make<implementation::ControlType>(UIA_MenuItemControlTypeId); }
        static uia::ControlType Pane()         { return winrt::make<implementation::ControlType>(UIA_PaneControlTypeId); }
        static uia::ControlType ProgressBar()  { return winrt::make<implementation::ControlType>(UIA_ProgressBarControlTypeId); }
        static uia::ControlType RadioButton()  { return winrt::make<implementation::ControlType>(UIA_RadioButtonControlTypeId); }
        static uia::ControlType ScrollBar()    { return winrt::make<implementation::ControlType>(UIA_ScrollBarControlTypeId); }
        static uia::ControlType SemanticZoom() { return winrt::make<implementation::ControlType>(UIA_SemanticZoomControlTypeId); }
        static uia::ControlType Separator()    { return winrt::make<implementation::ControlType>(UIA_SeparatorControlTypeId); }
        static uia::ControlType Slider()       { return winrt::make<implementation::ControlType>(UIA_SliderControlTypeId); }
        static uia::ControlType Spinner()      { return winrt::make<implementation::ControlType>(UIA_SpinnerControlTypeId); }
        static uia::ControlType SplitButton()  { return winrt::make<implementation::ControlType>(UIA_SplitButtonControlTypeId); }
        static uia::ControlType StatusBar()    { return winrt::make<implementation::ControlType>(UIA_StatusBarControlTypeId); }
        static uia::ControlType Tab()          { return winrt::make<implementation::ControlType>(UIA_TabControlTypeId); }
        static uia::ControlType TabItem()      { return winrt::make<implementation::ControlType>(UIA_TabItemControlTypeId); }
        static uia::ControlType Table()        { return winrt::make<implementation::ControlType>(UIA_TableControlTypeId); }
        static uia::ControlType Text()         { return winrt::make<implementation::ControlType>(UIA_TextControlTypeId); }
        static uia::ControlType Thumb()        { return winrt::make<implementation::ControlType>(UIA_ThumbControlTypeId); }
        static uia::ControlType TitleBar()     { return winrt::make<implementation::ControlType>(UIA_TitleBarControlTypeId); }
        static uia::ControlType ToolBar()      { return winrt::make<implementation::ControlType>(UIA_ToolBarControlTypeId); }
        static uia::ControlType ToolTip()      { return winrt::make<implementation::ControlType>(UIA_ToolTipControlTypeId); }
        static uia::ControlType Tree()         { return winrt::make<implementation::ControlType>(UIA_TreeControlTypeId); }
        static uia::ControlType TreeItem()     { return winrt::make<implementation::ControlType>(UIA_TreeItemControlTypeId); }
        static uia::ControlType Window()       { return winrt::make<implementation::ControlType>(UIA_WindowControlTypeId); }

    private:
        int m_id;
    };
}

namespace winrt::uia::factory_implementation
{
    struct ControlType : ControlTypeT<ControlType, implementation::ControlType>
    {
    };
}
