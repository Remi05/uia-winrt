#include "pch.h"
#include "VariantHelpers.h"
#include "propvarutil.h"

namespace winrt::uia
{
	Windows::Foundation::IInspectable VariantToIInspectable(VARIANT const& /*variant*/)
	{
		throw winrt::hresult_not_implemented{};
	}

	VARIANT IInspectableToVariant(Windows::Foundation::IInspectable const& iinspectable)
	{
		VARIANT variant;

		auto propertyValue = iinspectable.as<winrt::Windows::Foundation::IPropertyValue>();
		if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::Boolean)
		{
			bool value = propertyValue.GetBoolean();
			InitVariantFromBoolean(value, &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::BooleanArray)
		{
			//winrt::com_array<bool> value;
			//propertyValue.GetBooleanArray(value);
			//InitVariantFromBooleanArray(value.cbegin(), value.size(), &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::Char16)
		{
			uint16_t value = propertyValue.GetChar16();
			InitVariantFromUInt16(value, &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::Char16Array)
		{
			//winrt::com_array<char16_t> value;
			//propertyValue.GetChar16Array(value);
			//InitVariantFromUInt16Array(value.cbegin(), value.size(), &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::DateTime)
		{
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::DateTimeArray)
		{
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::Double)
		{
			double value = winrt::unbox_value<double>(iinspectable);
			InitVariantFromDouble(value, &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::DoubleArray)
		{
			//winrt::com_array<double> value;
			//propertyValue.GetDoubleArray(value);
			//InitVariantFromDoubleArray(value.cbegin(), value.size(), &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::Empty)
		{
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::Guid)
		{
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::GuidArray)
		{
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::Inspectable)
		{
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::InspectableArray)
		{
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::Int16)
		{
			int16_t value = propertyValue.GetInt16();
			InitVariantFromInt16(value, &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::Int16Array)
		{
			//winrt::com_array<int16_t> value;
			//propertyValue.GetInt16Array(value);
			//InitVariantFromInt16Array(value.cbegin(), value.size(), &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::Int32)
		{
			int32_t value = propertyValue.GetInt32();
			InitVariantFromInt32(value, &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::Int32Array)
		{
			//winrt::com_array<int32_t> value;
			//propertyValue.GetInt32Array(value);
			//InitVariantFromInt32Array(value.cbegin(), value.size(), &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::Int64)
		{
			int64_t value = propertyValue.GetInt64();
			InitVariantFromInt64(value, &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::Int64Array)
		{
			//winrt::com_array<int64_t> value;
			//propertyValue.GetInt64Array(value);
			//InitVariantFromInt64Array(value.cbegin(), value.size(), &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::OtherType)
		{
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::OtherTypeArray)
		{
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::Point)
		{
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::PointArray)
		{
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::Rect)
		{
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::RectArray)
		{
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::Single)
		{
			float value = winrt::unbox_value<float>(iinspectable);
			InitVariantFromDouble((double)value, &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::SingleArray)
		{
			//winrt::com_array<float> value;
			//propertyValue.GetSingleArray(value);
			//InitVariantFromDoubleArray(value.cbegin(), value.size(), &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::Size)
		{
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::SizeArray)
		{
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::String)
		{
			hstring value = propertyValue.GetString();;
			InitVariantFromString(value.c_str(), &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::StringArray)
		{
			//winrt::com_array<hstring> value;
			//propertyValue.GetStringArray(value);
			//InitVariantFromStringArray(value.cbegin(), value.size(), &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::TimeSpan)
		{
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::TimeSpanArray)
		{
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::UInt16)
		{
			uint16_t value = propertyValue.GetUInt16();
			InitVariantFromUInt16(value, &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::UInt16Array)
		{
			//winrt::com_array<uint16_t> value;
			//propertyValue.GetUInt16Array(value);
			//InitVariantFromUInt16Array(value.cbegin(), value.size(), &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::UInt32)
		{
			uint32_t value = propertyValue.GetUInt32();
			InitVariantFromUInt32(value, &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::UInt32Array)
		{
			//winrt::com_array<uint32_t> value;
			//propertyValue.GetUInt32Array(value);
			//InitVariantFromUInt32Array(value.cbegin(), value.size(), &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::UInt64)
		{
			uint64_t value = propertyValue.GetUInt64();
			InitVariantFromUInt64(value, &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::UInt64Array)
		{
			//winrt::com_array<uint64_t> value;
			//propertyValue.GetUInt64Array(value);
			//InitVariantFromUInt64Array(value.cbegin(), value.size(), &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::UInt8)
		{
			//uint8_t value = winrt::unbox_value<uint8_t>(iinspectable);
			//InitVariantFromUInt8(value, &variant);
		}
		else if (propertyValue.Type() == winrt::Windows::Foundation::PropertyType::UInt8Array)
		{
		}
		return std::move(variant);
	}
}