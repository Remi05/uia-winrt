#pragma once

#include "pch.h"
#include "AutomationElement.g.h"
#include "EnumHelpers.h"

namespace winrt::uia
{
	OrientationType OrientationToOrientationType(uia::Orientation orientation)
	{
		switch (orientation)
		{
		case uia::Orientation::Horizontal:
			return OrientationType_Horizontal;
		case uia::Orientation::Vertical:
			return OrientationType_Vertical;
		case uia::Orientation::None:
		default:
			return OrientationType_None;
		}
	}

	uia::Orientation OrientationTypeToOrientation(OrientationType orientationType)
	{
		switch (orientationType)
		{
		case OrientationType_Horizontal:
			return uia::Orientation::Horizontal;
		case OrientationType_Vertical:
			return uia::Orientation::Vertical;
		case OrientationType_None:
		default:
			return uia::Orientation::None;
		}
	}

	TreeScope AutomationTreeScopeToTreeScope(uia::AutomationTreeScope automationTreeScope)
	{
		switch (automationTreeScope)
		{
		case uia::AutomationTreeScope::Element:
			return TreeScope_Element;
		case uia::AutomationTreeScope::Children:
			return TreeScope_Children;
		case uia::AutomationTreeScope::Descendants:
			return TreeScope_Descendants;
		case uia::AutomationTreeScope::Parent:
			return TreeScope_Parent;
		case uia::AutomationTreeScope::Ancestors:
			return TreeScope_Ancestors;
		case uia::AutomationTreeScope::Subtree:
			return TreeScope_Subtree;
		case uia::AutomationTreeScope::None:
		default:
			return TreeScope_None;
		}
	}

	uia::AutomationTreeScope TreeScopeToAutomationTreeScope(TreeScope treeScope)
	{
		switch (treeScope)
		{
		case TreeScope_Element:
			return uia::AutomationTreeScope::Element;
		case TreeScope_Children:
			return uia::AutomationTreeScope::Children;
		case TreeScope_Descendants:
			return uia::AutomationTreeScope::Descendants;
		case TreeScope_Parent:
			return uia::AutomationTreeScope::Parent;
		case TreeScope_Ancestors:
			return uia::AutomationTreeScope::Ancestors;
		case TreeScope_Subtree:
			return uia::AutomationTreeScope::Subtree;
		case TreeScope_None:
		default:
			return uia::AutomationTreeScope::None;
		}
	}

	AutomationElementMode ElementModeToAutomationElementMode(uia::ElementMode elementMode)
	{
		switch (elementMode)
		{
		case uia::ElementMode::Full:
			return AutomationElementMode_Full;
		case uia::ElementMode::None:
		default:
			return AutomationElementMode_None;
		}
	}

	uia::ElementMode AutomationElementModeToElementMode(AutomationElementMode automationElementMode)
	{
		switch (automationElementMode)
		{
		case AutomationElementMode_Full:
			return uia::ElementMode::Full;
		case AutomationElementMode_None:
		default:
			return uia::ElementMode::None;
		}
	}
}