#include "pch.h"
#include "VariantHelpers.h"
#include "propvarutil.h"

using namespace winrt::Windows::Foundation;

namespace winrt::uia
{
	IInspectable VariantToIInspectable(VARIANT const& /*variant*/)
	{
		throw winrt::hresult_not_implemented{};
	}

	VARIANT IInspectableToVariant(IInspectable const& iinspectable)
	{
		VARIANT variant;

		auto propertyValue = iinspectable.as<IPropertyValue>();
		switch (propertyValue.Type())
		{
			case PropertyType::Boolean:
			{
				bool value = propertyValue.GetBoolean();
				InitVariantFromBoolean(value, &variant);
				break;
			}
			case PropertyType::BooleanArray:
			{
				//winrt::com_array<bool> value;
				//propertyValue.GetBooleanArray(value);
				//InitVariantFromBooleanArray(value.cbegin(), value.size(), &variant);
				break;
			}
			case PropertyType::Char16:
			{
				uint16_t value = propertyValue.GetChar16();
				InitVariantFromUInt16(value, &variant);
				break;
			}
			case PropertyType::Char16Array:
			{
				//winrt::com_array<char16_t> value;
				//propertyValue.GetChar16Array(value);
				//InitVariantFromUInt16Array(value.cbegin(), value.size(), &variant);
				break;
			}
			case PropertyType::DateTime:
			{
				break;
			}
			case PropertyType::DateTimeArray:
			{
				break;
			}
			case PropertyType::Double:
			{
				double value = winrt::unbox_value<double>(iinspectable);
				InitVariantFromDouble(value, &variant);
				break;
			}
			case PropertyType::DoubleArray:
			{
				//winrt::com_array<double> value;
				//propertyValue.GetDoubleArray(value);
				//InitVariantFromDoubleArray(value.cbegin(), value.size(), &variant);
				break;
			}
			case PropertyType::Empty:
			{
				break;
			}
			case PropertyType::Guid:
			{
				break;
			}
			case PropertyType::GuidArray:
			{
				break;
			}
			case PropertyType::Inspectable:
			{
				break;
			}
			case PropertyType::InspectableArray:
			{
				break;
			}
			case PropertyType::Int16:
			{
				int16_t value = propertyValue.GetInt16();
				InitVariantFromInt16(value, &variant);
				break;
			}
			case PropertyType::Int16Array:
			{
				//winrt::com_array<int16_t> value;
				//propertyValue.GetInt16Array(value);
				//InitVariantFromInt16Array(value.cbegin(), value.size(), &variant);
				break;
			}
			case PropertyType::Int32:
			{
				int32_t value = propertyValue.GetInt32();
				InitVariantFromInt32(value, &variant);
				break;
			}
			case PropertyType::Int32Array:
			{
				//winrt::com_array<int32_t> value;
				//propertyValue.GetInt32Array(value);
				//InitVariantFromInt32Array(value.cbegin(), value.size(), &variant);
				break;
			}
			case PropertyType::Int64:
			{
				int64_t value = propertyValue.GetInt64();
				InitVariantFromInt64(value, &variant);
				break;
			}
			case PropertyType::Int64Array:
			{
				//winrt::com_array<int64_t> value;
				//propertyValue.GetInt64Array(value);
				//InitVariantFromInt64Array(value.cbegin(), value.size(), &variant);
				break;
			}
			case PropertyType::OtherType:
			{
				break;
			}
			case PropertyType::OtherTypeArray:
			{
				break;
			}
			case PropertyType::Point:
			{
				break;
			}
			case PropertyType::PointArray:
			{
				break;
			}
			case PropertyType::Rect:
			{
				break;
			}
			case PropertyType::RectArray:
			{
				break;
			}
			case PropertyType::Single:
			{
				float value = winrt::unbox_value<float>(iinspectable);
				InitVariantFromDouble((double)value, &variant);
				break;
			}
			case PropertyType::SingleArray:
			{
				//winrt::com_array<float> value;
				//propertyValue.GetSingleArray(value);
				//InitVariantFromDoubleArray(value.cbegin(), value.size(), &variant);
				break;
			}
			case PropertyType::Size:
			{
				break;
			}
			case PropertyType::SizeArray:
			{
				break;
			}
			case PropertyType::String:
			{
				hstring value = propertyValue.GetString();
				InitVariantFromString(value.c_str(), &variant);
				break;
			}
			case PropertyType::StringArray:
			{
				//winrt::com_array<hstring> value;
				//propertyValue.GetStringArray(value);
				//InitVariantFromStringArray(value.cbegin(), value.size(), &variant);
				break;
			}
			case PropertyType::TimeSpan:
			{
				break;
			}
			case PropertyType::TimeSpanArray:
			{
				break;
			}
			case PropertyType::UInt16:
			{
				uint16_t value = propertyValue.GetUInt16();
				InitVariantFromUInt16(value, &variant);
				break;
			}
			case PropertyType::UInt16Array:
			{
				//winrt::com_array<uint16_t> value;
				//propertyValue.GetUInt16Array(value);
				//InitVariantFromUInt16Array(value.cbegin(), value.size(), &variant);
				break;
			}
			case PropertyType::UInt32:
			{
				uint32_t value = propertyValue.GetUInt32();
				InitVariantFromUInt32(value, &variant);
				break;
			}
			case PropertyType::UInt32Array:
			{
				//winrt::com_array<uint32_t> value;
				//propertyValue.GetUInt32Array(value);
				//InitVariantFromUInt32Array(value.cbegin(), value.size(), &variant);
				break;
			}
			case PropertyType::UInt64:
			{
				uint64_t value = propertyValue.GetUInt64();
				InitVariantFromUInt64(value, &variant);
				break;
			}
			case PropertyType::UInt64Array:
			{
				//winrt::com_array<uint64_t> value;
				//propertyValue.GetUInt64Array(value);
				//InitVariantFromUInt64Array(value.cbegin(), value.size(), &variant);
				break;
			}
			case PropertyType::UInt8:
			{
				//uint8_t value = winrt::unbox_value<uint8_t>(iinspectable);
				//InitVariantFromUInt8(value, &variant);
				break;
			}
			case PropertyType::UInt8Array:
			{
				break;
			}
		}
		return std::move(variant);
	}
}