#include "agent.hpp"

namespace godot {

void Agent::_register_methods()
{
	register_method("_process", &Agent::_process);

	register_property <Agent, NodePath> ("spawn", &Agent::spawn, NodePath());
	register_property <Agent, double> ("spawn", &Agent::spawn, NodePath());
}

Agent::Agent() {}

Agent::~Agent() {}

void Agent::_init()
{
}

void Agent::_process(float delta)
{
	Godot::print(spawn);
	// set_position(get_position() + Vector2(0.01, 0));
}

}
