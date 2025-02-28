#ifndef WWISE_EDITOR_SCALE_H
#define WWISE_EDITOR_SCALE_H

#include <godot_cpp/classes/editor_interface.hpp>
#include <godot_cpp/classes/editor_plugin.hpp>

namespace godot
{

class WwiseEditorPlugin : public EditorPlugin
{
	GDCLASS(WwiseEditorPlugin, EditorPlugin);

protected:
	static void _bind_methods() {}

private:
	static WwiseEditorPlugin* singleton;

public:
	WwiseEditorPlugin()
	{
		ERR_FAIL_COND(singleton != nullptr);
		singleton = this;
	}

	~WwiseEditorPlugin()
	{
		ERR_FAIL_COND(singleton != this);
		singleton = nullptr;
	}

	static WwiseEditorPlugin* get_singleton() { return singleton; }
};

} //namespace godot

#endif
