#pragma once

#include "core/types/wwise_state.h"
#include "core/types/wwise_state_group.h"
#include "editor/properties/ak_wwise_editor_property.h"

using namespace godot;

class AkWwiseEditorPropertyState : public AkWwiseEditorProperty
{
	GDCLASS(AkWwiseEditorPropertyState, AkWwiseEditorProperty);

protected:
	static void _bind_methods() {};

public:
	virtual String get_button_placeholder_text() const override;
	virtual WwiseObjectType get_wwise_object_type() const override;
	virtual void set_wwise_reference(const AkWwiseTreeItem* p_item) override;
};