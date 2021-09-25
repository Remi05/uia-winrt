#include "pch.h"
#include "Automation.h"
#if __has_include("Automation.g.cpp")
#include "Automation.g.cpp"
#endif

#include "AutomationCacheRequest.h"
#include "AutomationCondition.h"
#include "AutomationElement.h"
#include "AutomationTreeWalker.h"

namespace winrt::uia::implementation
{
	Automation::Automation()
	{
		CoCreateInstance(CLSID_CUIAutomation, NULL,
			CLSCTX_INPROC_SERVER, IID_IUIAutomation,
			m_uiAutomation.put_void());
	}

	uia::AutomationCondition Automation::ContentViewCondition()
	{
		com_ptr<IUIAutomationCondition> contentViewCondition;
		check_hresult(m_uiAutomation->get_ContentViewCondition(contentViewCondition.put()));
		return winrt::make<implementation::AutomationCondition>(contentViewCondition);
	}

	uia::AutomationTreeWalker Automation::ContentViewWalker()
	{
		com_ptr<IUIAutomationTreeWalker> contentViewWalker;
		check_hresult(m_uiAutomation->get_ContentViewWalker(contentViewWalker.put()));
		return winrt::make<implementation::AutomationTreeWalker>(contentViewWalker);
	}

	uia::AutomationCondition Automation::ControlViewCondition()
	{
		com_ptr<IUIAutomationCondition> controlViewCondition;
		check_hresult(m_uiAutomation->get_ControlViewCondition(controlViewCondition.put()));
		return winrt::make<implementation::AutomationCondition>(controlViewCondition);
	}

	uia::AutomationTreeWalker Automation::ControlViewWalker()
	{
		com_ptr<IUIAutomationTreeWalker> controlViewWalker;
		check_hresult(m_uiAutomation->get_ControlViewWalker(controlViewWalker.put()));
		return winrt::make<implementation::AutomationTreeWalker>(controlViewWalker);
	}

	//Automation::ProxyFactoryMapping();

	uia::AutomationCondition Automation::RawViewCondition()
	{
		com_ptr<IUIAutomationCondition> rawViewCondition;
		check_hresult(m_uiAutomation->get_RawViewCondition(rawViewCondition.put()));
		return winrt::make<implementation::AutomationCondition>(rawViewCondition);
	}

	uia::AutomationTreeWalker Automation::RawViewWalker()
	{
		com_ptr<IUIAutomationTreeWalker> rawViewWalker;
		check_hresult(m_uiAutomation->get_RawViewWalker(rawViewWalker.put()));
		return winrt::make<implementation::AutomationTreeWalker>(rawViewWalker);
	}

	//Automation::ReservedMixedAttributeValue();
	//Automation::ReservedNotSupportedValue();

	//Automation::AddAutomationEventHandler();
	//Automation::AddFocusChangedEventHandler();
	//Automation::AddPropertyChangedEventHandler();
	//Automation::AddPropertyChangedEventHandlerNativeArray();
	//Automation::AddStructureChangedEventHandler();

	//Automation::CheckNotSupported();

	bool Automation::CompareElements(uia::AutomationElement const& el1, uia::AutomationElement const& el2)
	{
		com_ptr<IUIAutomationElement> uiAutomationElement1 = winrt::get_self<implementation::AutomationElement>(el1)->UiAutomationElement();
		com_ptr<IUIAutomationElement> uiAutomationElement2 = winrt::get_self<implementation::AutomationElement>(el2)->UiAutomationElement();
		BOOL areSame = false;
		check_hresult(m_uiAutomation->CompareElements(uiAutomationElement1.get(), uiAutomationElement2.get(), &areSame));
		return areSame;
	}

	//bool Automation::CompareRuntimeIds();

	uia::AutomationCondition Automation::CreateAndCondition(uia::AutomationCondition const& condition1, uia::AutomationCondition const& condition2)
	{
		com_ptr<IUIAutomationCondition> uiAutomationCondition1 = winrt::get_self<implementation::AutomationCondition>(condition1)->UiAutomationCondition();
		com_ptr<IUIAutomationCondition> uiAutomationCondition2 = winrt::get_self<implementation::AutomationCondition>(condition2)->UiAutomationCondition();
		com_ptr<IUIAutomationCondition> andCondition;
		check_hresult(m_uiAutomation->CreateAndCondition(uiAutomationCondition1.get(), uiAutomationCondition2.get(), andCondition.put()));
		return winrt::make<implementation::AutomationCondition>(andCondition);
	}

	//uia::AutomationCondition Automation::CreateAndConditionFromArray();
	//uia::AutomationCondition Automation::CreateAndConditionFromNativeArray();

	uia::AutomationCacheRequest Automation::CreateCacheRequest()
	{
		com_ptr<IUIAutomationCacheRequest> uiAutomationCacheRequest;
		check_hresult(m_uiAutomation->CreateCacheRequest(uiAutomationCacheRequest.put()));
		return winrt::make<AutomationCacheRequest>(uiAutomationCacheRequest);
	}

	uia::AutomationCondition Automation::CreateFalseCondition()
	{
		com_ptr<IUIAutomationCondition> falseCondition;
		check_hresult(m_uiAutomation->CreateFalseCondition(falseCondition.put()));
		return winrt::make<implementation::AutomationCondition>(falseCondition);
	}

	uia::AutomationCondition Automation::CreateNotCondition(uia::AutomationCondition const& condition)
	{
		com_ptr<IUIAutomationCondition> uiAutomationCondition = winrt::get_self<implementation::AutomationCondition>(condition)->UiAutomationCondition();
		com_ptr<IUIAutomationCondition> notCondition;
		check_hresult(m_uiAutomation->CreateNotCondition(uiAutomationCondition.get(), notCondition.put()));
		return winrt::make<implementation::AutomationCondition>(notCondition);
	}

	uia::AutomationCondition Automation::CreateOrCondition(uia::AutomationCondition const& condition1, uia::AutomationCondition const& condition2)
	{
		com_ptr<IUIAutomationCondition> uiAutomationCondition1 = winrt::get_self<implementation::AutomationCondition>(condition1)->UiAutomationCondition();
		com_ptr<IUIAutomationCondition> uiAutomationCondition2 = winrt::get_self<implementation::AutomationCondition>(condition2)->UiAutomationCondition();
		com_ptr<IUIAutomationCondition> orCondition;
		check_hresult(m_uiAutomation->CreateOrCondition(uiAutomationCondition1.get(), uiAutomationCondition2.get(), orCondition.put()));
		return winrt::make<implementation::AutomationCondition>(orCondition);
	}

	//uia::AutomationCondition Automation::CreateOrConditionFromArray();
	//uia::AutomationCondition Automation::CreateOrConditionFromNativeArray();
	//uia::AutomationCondition Automation::CreatePropertyCondition();
	//uia::AutomationCondition Automation::CreatePropertyConditionEx();

	//Automation::CreateProxyFactoryEntry();
	//Automation::CreateTreeWalker();
	uia::AutomationCondition Automation::CreateTrueCondition()
	{
		com_ptr<IUIAutomationCondition> trueCondition;
		check_hresult(m_uiAutomation->CreateTrueCondition(trueCondition.put()));
		return winrt::make<implementation::AutomationCondition>(trueCondition);
	}

	//uia::AutomationElement Automation::ElementFromHandle();
	//uia::AutomationElement Automation::ElementFromHandleBuildCache();
	//uia::AutomationElement Automation::ElementFromIAccessible();
	//uia::AutomationElement Automation::ElementFromIAccessibleBuildCache();

	uia::AutomationElement Automation::ElementFromPoint(Windows::Foundation::Point const& point)
	{
		com_ptr<IUIAutomationElement> uiAutomationElement;
		check_hresult(m_uiAutomation->ElementFromPoint(POINT{ (LONG)point.X, (LONG)point.Y }, uiAutomationElement.put()));
		return winrt::make<implementation::AutomationElement>(uiAutomationElement);
	}

	uia::AutomationElement Automation::ElementFromPointBuildCache(Windows::Foundation::Point const& point, uia::AutomationCacheRequest const& cacheRequest)
	{
		com_ptr<IUIAutomationCacheRequest> uiAutomationCacheRequest = winrt::get_self<implementation::AutomationCacheRequest>(cacheRequest)->UiAutomationCacheRequest();
		com_ptr<IUIAutomationElement> uiAutomationElement;
		check_hresult(m_uiAutomation->ElementFromPointBuildCache(POINT{ (LONG)point.X, (LONG)point.Y }, uiAutomationCacheRequest.get(), uiAutomationElement.put()));
		return winrt::make<implementation::AutomationElement>(uiAutomationElement);
	}

	uia::AutomationElement Automation::GetFocusedElement()
	{
		com_ptr<IUIAutomationElement> uiAutomationElement;
		check_hresult(m_uiAutomation->GetFocusedElement(uiAutomationElement.put()));
		return winrt::make<implementation::AutomationElement>(uiAutomationElement);
	}

	uia::AutomationElement Automation::GetFocusedElementBuildCache(uia::AutomationCacheRequest const& cacheRequest)
	{
		com_ptr<IUIAutomationCacheRequest> uiAutomationCacheRequest = winrt::get_self<implementation::AutomationCacheRequest>(cacheRequest)->UiAutomationCacheRequest();
		com_ptr<IUIAutomationElement> uiAutomationElement;
		check_hresult(m_uiAutomation->GetFocusedElementBuildCache(uiAutomationCacheRequest.get(), uiAutomationElement.put()));
		return winrt::make<implementation::AutomationElement>(uiAutomationElement);
	}

	hstring Automation::GetPatternProgrammaticName(uia::AutomationPattern pattern)
	{
		BSTR patternName;
		check_hresult(m_uiAutomation->GetPatternProgrammaticName(pattern.Id(), &patternName));
		return hstring{ std::move(patternName) };
	}

	hstring Automation::GetPropertyProgrammaticName(uia::AutomationProperty property)
	{
		BSTR propertyName;
		check_hresult(m_uiAutomation->GetPatternProgrammaticName(property.Id(), &propertyName));
		return hstring{ std::move(propertyName) };
	}

	uia::AutomationElement Automation::GetRootElement()
	{
		com_ptr<IUIAutomationElement> uiAutomationElement;
		check_hresult(m_uiAutomation->GetRootElement(uiAutomationElement.put()));
		return winrt::make<implementation::AutomationElement>(uiAutomationElement);
	}

	uia::AutomationElement Automation::GetRootElementBuildCache(uia::AutomationCacheRequest const& cacheRequest)
	{
		com_ptr<IUIAutomationCacheRequest> uiAutomationCacheRequest = winrt::get_self<implementation::AutomationCacheRequest>(cacheRequest)->UiAutomationCacheRequest();
		com_ptr<IUIAutomationElement> uiAutomationElement;
		check_hresult(m_uiAutomation->GetRootElementBuildCache(uiAutomationCacheRequest.get(), uiAutomationElement.put()));
		return winrt::make<implementation::AutomationElement>(uiAutomationElement);
	}

	// Automation::IntNativeArrayToSafeArray();
	// Automation::IntSafeArrayToNativeArray();
	// Automation::PollForPotentialSupportedPatterns();
	// Automation::PollForPotentialSupportedProperties();
	// Automation::RectToVariant();

	void Automation::RemoveAllEventHandlers()
	{
		check_hresult(m_uiAutomation->RemoveAllEventHandlers());
	}

	// Automation::RemoveAutomationEventHandler();
	// Automation::RemoveFocusChangedEventHandler();
	// Automation::RemovePropertyChangedEventHandler();
	// Automation::RemoveStructureChangedEventHandler();

	// Automation::SafeArrayToRectNativeArray();
	// Automation::VariantToRect();
}
