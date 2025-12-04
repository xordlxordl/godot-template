#include "example.h"

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include <godot_cpp/classes/node3d.hpp>

using namespace godot;

void GDExample::_bind_methods() {
	ClassDB::bind_method(D_METHOD("get_testVal"), &GDExample::get_testVal);
	ClassDB::bind_method(D_METHOD("set_testVal", "p_testVal"), &GDExample::set_testVal);
	ClassDB::add_property("GDExample", PropertyInfo(Variant::FLOAT, "testVal"), "set_testVal", "get_testVal");
}

GDExample::GDExample() {
	// Initialize any variables here.
	if (Engine::get_singleton()->is_editor_hint())
	{
		set_process_mode(Node::ProcessMode::PROCESS_MODE_DISABLED);
	}
}

GDExample::~GDExample() {
	// Add your cleanup here.

}


void GDExample::_ready()
{
	if (Engine::get_singleton()->is_editor_hint()) return;
}



void GDExample::_process(double delta) {
	UtilityFunctions::print("This is example node.");
}

void GDExample::set_testVal(const double p_testVal) {
	testVal = p_testVal;
}

double GDExample::get_testVal() const {
	return testVal;
}
