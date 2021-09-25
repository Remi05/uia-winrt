#pragma once

namespace winrt::uia
{
	OrientationType OrientationToOrientationType(uia::Orientation orientation);
	uia::Orientation OrientationTypeToOrientation(OrientationType orientationType);

	TreeScope AutomationTreeScopeToTreeScope(uia::AutomationTreeScope automationTreeScope);
	uia::AutomationTreeScope TreeScopeToAutomationTreeScope(TreeScope treeScope);

	AutomationElementMode ElementModeToAutomationElementMode(uia::ElementMode elementMode);
	uia::ElementMode AutomationElementModeToElementMode(AutomationElementMode automationElementMode);
}