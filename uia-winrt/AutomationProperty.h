#pragma once

#include "AutomationProperty.g.h"

namespace winrt::uia::implementation
{
    struct AutomationProperty : AutomationPropertyT<AutomationProperty>
    {
        AutomationProperty(int id) : m_id(id) {}

        int Id() const noexcept { return m_id; }

        static uia::AutomationProperty LookupById(int propertyId);

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
