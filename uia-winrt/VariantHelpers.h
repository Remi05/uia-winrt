#pragma once

namespace winrt::uia
{
	Windows::Foundation::IInspectable VariantToIInspectable(VARIANT const& variant);

	VARIANT IInspectableToVariant(Windows::Foundation::IInspectable const& iinspectable);
}