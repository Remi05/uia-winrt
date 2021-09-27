#pragma once

namespace winrt::uia
{
	TreeScope AutomationTreeScopeToTreeScope(uia::AutomationTreeScope automationTreeScope);
	uia::AutomationTreeScope TreeScopeToAutomationTreeScope(TreeScope treeScope);

	AutomationElementMode ElementModeToAutomationElementMode(uia::ElementMode elementMode);
	uia::ElementMode AutomationElementModeToElementMode(AutomationElementMode automationElementMode);

	OrientationType OrientationToOrientationType(uia::Orientation orientation);
	uia::Orientation OrientationTypeToOrientation(OrientationType orientationType);

	PropertyConditionFlags PropertyConditionOptionsToPropertyConditionFlags(uia::PropertyConditionOptions propertyConditionOptions);
	uia::PropertyConditionOptions PropertyConditionFlagsToPropertyConditionOptions(PropertyConditionFlags propertyConditionFlags);
}