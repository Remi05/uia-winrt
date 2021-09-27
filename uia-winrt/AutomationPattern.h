#pragma once

#include "AutomationPattern.g.h"

namespace winrt::uia::implementation
{
    struct AutomationPattern : AutomationPatternT<AutomationPattern>
    {
        AutomationPattern(int id) : m_id(id) {}

        int Id() const noexcept { return m_id; }

        static uia::AutomationPattern LookupById(int patternId);

        static uia::AutomationPattern Annotation()        { return winrt::make<implementation::AutomationPattern>(UIA_AnnotationPatternId); }
        static uia::AutomationPattern CustomNavigation()  { return winrt::make<implementation::AutomationPattern>(UIA_CustomNavigationPatternId); }
        static uia::AutomationPattern Dock()              { return winrt::make<implementation::AutomationPattern>(UIA_DockPatternId); }
        static uia::AutomationPattern Drag()              { return winrt::make<implementation::AutomationPattern>(UIA_DragPatternId); }
        static uia::AutomationPattern DropTarget()        { return winrt::make<implementation::AutomationPattern>(UIA_DropTargetPatternId); }
        static uia::AutomationPattern ExpandCollapse()    { return winrt::make<implementation::AutomationPattern>(UIA_ExpandCollapsePatternId); }
        static uia::AutomationPattern GridItem()          { return winrt::make<implementation::AutomationPattern>(UIA_GridItemPatternId); }
        static uia::AutomationPattern Grid()              { return winrt::make<implementation::AutomationPattern>(UIA_GridPatternId); }
        static uia::AutomationPattern Invoke()            { return winrt::make<implementation::AutomationPattern>(UIA_InvokePatternId); }
        static uia::AutomationPattern ItemContainer()     { return winrt::make<implementation::AutomationPattern>(UIA_ItemContainerPatternId); }
        static uia::AutomationPattern LegacyIAccessible() { return winrt::make<implementation::AutomationPattern>(UIA_LegacyIAccessiblePatternId); }
        static uia::AutomationPattern MultipleView()      { return winrt::make<implementation::AutomationPattern>(UIA_MultipleViewPatternId); }
        static uia::AutomationPattern ObjectModel()       { return winrt::make<implementation::AutomationPattern>(UIA_ObjectModelPatternId); }
        static uia::AutomationPattern RangeValue()        { return winrt::make<implementation::AutomationPattern>(UIA_RangeValuePatternId); }
        static uia::AutomationPattern ScrollItem()        { return winrt::make<implementation::AutomationPattern>(UIA_ScrollItemPatternId); }
        static uia::AutomationPattern Scroll()            { return winrt::make<implementation::AutomationPattern>(UIA_ScrollPatternId); }
        static uia::AutomationPattern SelectionItem()     { return winrt::make<implementation::AutomationPattern>(UIA_SelectionItemPatternId); }
        static uia::AutomationPattern Selection()         { return winrt::make<implementation::AutomationPattern>(UIA_SelectionPatternId); }
        static uia::AutomationPattern Spreadsheet()       { return winrt::make<implementation::AutomationPattern>(UIA_SpreadsheetPatternId); }
        static uia::AutomationPattern SpreadsheetItem()   { return winrt::make<implementation::AutomationPattern>(UIA_SpreadsheetItemPatternId); }
        static uia::AutomationPattern Styles()            { return winrt::make<implementation::AutomationPattern>(UIA_StylesPatternId); }
        static uia::AutomationPattern SynchronizedInput() { return winrt::make<implementation::AutomationPattern>(UIA_SynchronizedInputPatternId); }
        static uia::AutomationPattern TableItem()         { return winrt::make<implementation::AutomationPattern>(UIA_TableItemPatternId); }
        static uia::AutomationPattern Table()             { return winrt::make<implementation::AutomationPattern>(UIA_TablePatternId); }
        static uia::AutomationPattern TextChild()         { return winrt::make<implementation::AutomationPattern>(UIA_TextChildPatternId); }
        static uia::AutomationPattern TextEdit()          { return winrt::make<implementation::AutomationPattern>(UIA_TextEditPatternId); }
        static uia::AutomationPattern Text()              { return winrt::make<implementation::AutomationPattern>(UIA_TextPatternId); }
        static uia::AutomationPattern Toggle()            { return winrt::make<implementation::AutomationPattern>(UIA_TogglePatternId); }
        static uia::AutomationPattern Transform()         { return winrt::make<implementation::AutomationPattern>(UIA_TransformPatternId); }
        static uia::AutomationPattern Value()             { return winrt::make<implementation::AutomationPattern>(UIA_ValuePatternId); }
        static uia::AutomationPattern VirtualizedItem()   { return winrt::make<implementation::AutomationPattern>(UIA_VirtualizedItemPatternId); }
        static uia::AutomationPattern Window()            { return winrt::make<implementation::AutomationPattern>(UIA_WindowPatternId); }

    private:
        int m_id;
    };
}

namespace winrt::uia::factory_implementation
{
    struct AutomationPattern : AutomationPatternT<AutomationPattern, implementation::AutomationPattern>
    {
    };
}
