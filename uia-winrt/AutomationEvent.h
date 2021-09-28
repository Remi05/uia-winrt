#pragma once

#include "AutomationEvent.g.h"

namespace winrt::uia::implementation
{
    struct AutomationEvent : AutomationEventT<AutomationEvent>
    {
        AutomationEvent(int id) : m_id(id) {}

        int Id() const noexcept { return m_id; }

        static uia::AutomationEvent LookupById(int eventId);

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
