#pragma once

#include "core/types/wwise_base_type.h"

using namespace godot;

class WwiseStateGroup : public WwiseBaseType
{
	GDCLASS(WwiseStateGroup, WwiseBaseType);

protected:
	static void _bind_methods() {};

public:
	virtual WwiseObjectType get_object_type() const override { return WwiseObjectType::StateGroup; };
};