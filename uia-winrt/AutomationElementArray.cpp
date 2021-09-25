#include "pch.h"
#include "AutomationElementArray.h"
#if __has_include("AutomationElementArray.g.cpp")
#include "AutomationElementArray.g.cpp"
#endif

#include "AutomationElement.h"

namespace winrt::uia::implementation
{
    int AutomationElementArray::Length()
    {
        int length = 0;
        check_hresult(m_uiAutomationElementArray->get_Length(&length));
        return length;
    }

    uia::AutomationElement AutomationElementArray::GetElement(int index)
    {
        com_ptr<IUIAutomationElement> element;
        check_hresult(m_uiAutomationElementArray->GetElement(index, element.put()));
        return winrt::make<implementation::AutomationElement>(element);
    }
}
