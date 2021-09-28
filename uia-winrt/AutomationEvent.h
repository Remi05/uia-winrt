#pragma once

#include "AutomationEvent.g.h"

namespace winrt::uia::implementation
{
    struct AutomationEvent : AutomationEventT<AutomationEvent>
    {
        AutomationEvent(int id) : m_id(id) {}

        int Id() const noexcept { return m_id; }

        static uia::AutomationEvent LookupById(int eventId);

        static uia::AutomationEvent ActiveTextPositionChanged()                 { return winrt::make<implementation::AutomationEvent>(UIA_ActiveTextPositionChangedEventId); }
        static uia::AutomationEvent AsyncContentLoaded()                        { return winrt::make<implementation::AutomationEvent>(UIA_AsyncContentLoadedEventId); }
        static uia::AutomationEvent AutomationFocusChanged()                    { return winrt::make<implementation::AutomationEvent>(UIA_AutomationFocusChangedEventId); }
        static uia::AutomationEvent AutomationPropertyChanged()                 { return winrt::make<implementation::AutomationEvent>(UIA_AutomationPropertyChangedEventId); }
        static uia::AutomationEvent Changes()                                   { return winrt::make<implementation::AutomationEvent>(UIA_ChangesEventId); }
        static uia::AutomationEvent Drag_DragCancel()                           { return winrt::make<implementation::AutomationEvent>(UIA_Drag_DragCancelEventId); }
        static uia::AutomationEvent Drag_DragComplete()                         { return winrt::make<implementation::AutomationEvent>(UIA_Drag_DragCompleteEventId); }
        static uia::AutomationEvent Drag_DragStart()                            { return winrt::make<implementation::AutomationEvent>(UIA_Drag_DragStartEventId); }
        static uia::AutomationEvent DropTarget_DragEnter()                      { return winrt::make<implementation::AutomationEvent>(UIA_DropTarget_DragEnterEventId); }
        static uia::AutomationEvent DropTarget_DragLeave()                      { return winrt::make<implementation::AutomationEvent>(UIA_DropTarget_DragLeaveEventId); }
        static uia::AutomationEvent DropTarget_Dropped()                        { return winrt::make<implementation::AutomationEvent>(UIA_DropTarget_DroppedEventId); }
        static uia::AutomationEvent HostedFragmentRootsInvalidated()            { return winrt::make<implementation::AutomationEvent>(UIA_HostedFragmentRootsInvalidatedEventId); }
        static uia::AutomationEvent InputDiscarded()                            { return winrt::make<implementation::AutomationEvent>(UIA_InputDiscardedEventId); }
        static uia::AutomationEvent InputReachedOtherElement()                  { return winrt::make<implementation::AutomationEvent>(UIA_InputReachedOtherElementEventId); }
        static uia::AutomationEvent InputReachedTarget()                        { return winrt::make<implementation::AutomationEvent>(UIA_InputReachedTargetEventId); }
        static uia::AutomationEvent Invoke_Invoked()                            { return winrt::make<implementation::AutomationEvent>(UIA_Invoke_InvokedEventId); }
        static uia::AutomationEvent LayoutInvalidated()                         { return winrt::make<implementation::AutomationEvent>(UIA_LayoutInvalidatedEventId); }
        static uia::AutomationEvent LiveRegionChanged()                         { return winrt::make<implementation::AutomationEvent>(UIA_LiveRegionChangedEventId); }
        static uia::AutomationEvent MenuClosed()                                { return winrt::make<implementation::AutomationEvent>(UIA_MenuClosedEventId); }
        static uia::AutomationEvent MenuModeEnd()                               { return winrt::make<implementation::AutomationEvent>(UIA_MenuModeEndEventId); }
        static uia::AutomationEvent MenuModeStart()                             { return winrt::make<implementation::AutomationEvent>(UIA_MenuModeStartEventId); }
        static uia::AutomationEvent MenuOpened()                                { return winrt::make<implementation::AutomationEvent>(UIA_MenuOpenedEventId); }
        static uia::AutomationEvent Notification()                              { return winrt::make<implementation::AutomationEvent>(UIA_NotificationEventId); }
        static uia::AutomationEvent Selection_Invalidated()                     { return winrt::make<implementation::AutomationEvent>(UIA_Selection_InvalidatedEventId); }
        static uia::AutomationEvent SelectionItem_ElementAddedToSelection()     { return winrt::make<implementation::AutomationEvent>(UIA_SelectionItem_ElementAddedToSelectionEventId); }
        static uia::AutomationEvent SelectionItem_ElementRemovedFromSelection() { return winrt::make<implementation::AutomationEvent>(UIA_SelectionItem_ElementRemovedFromSelectionEventId); }
        static uia::AutomationEvent SelectionItem_ElementSelected()             { return winrt::make<implementation::AutomationEvent>(UIA_SelectionItem_ElementSelectedEventId); }
        static uia::AutomationEvent StructureChanged()                          { return winrt::make<implementation::AutomationEvent>(UIA_StructureChangedEventId); }
        static uia::AutomationEvent SystemAlert()                               { return winrt::make<implementation::AutomationEvent>(UIA_SystemAlertEventId); }
        static uia::AutomationEvent Text_TextChanged()                          { return winrt::make<implementation::AutomationEvent>(UIA_Text_TextChangedEventId); }
        static uia::AutomationEvent Text_TextSelectionChanged()                 { return winrt::make<implementation::AutomationEvent>(UIA_Text_TextSelectionChangedEventId); }
        static uia::AutomationEvent TextEdit_ConversionTargetChanged()          { return winrt::make<implementation::AutomationEvent>(UIA_TextEdit_ConversionTargetChangedEventId); }
        static uia::AutomationEvent TextEdit_TextChanged()                      { return winrt::make<implementation::AutomationEvent>(UIA_TextEdit_TextChangedEventId); }
        static uia::AutomationEvent ToolTipClosed()                             { return winrt::make<implementation::AutomationEvent>(UIA_ToolTipClosedEventId); }
        static uia::AutomationEvent ToolTipOpened()                             { return winrt::make<implementation::AutomationEvent>(UIA_ToolTipOpenedEventId); }
        static uia::AutomationEvent Window_WindowClosed()                       { return winrt::make<implementation::AutomationEvent>(UIA_Window_WindowClosedEventId); }
        static uia::AutomationEvent Window_WindowOpened()                       { return winrt::make<implementation::AutomationEvent>(UIA_Window_WindowOpenedEventId); }

    private:
        int m_id;
    };
}

namespace winrt::uia::factory_implementation
{
    struct AutomationEvent : AutomationEventT<AutomationEvent, implementation::AutomationEvent>
    {
    };
}
