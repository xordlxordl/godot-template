#ifndef GDEXAMPLE_H
#define GDEXAMPLE_H

#include <Node3D.hpp>

namespace godot {

	class GDExample : public Node3D {
		GDCLASS(GDExample, Node3D)

	protected:
		static void _bind_methods();

	public:
		GDExample();
		~GDExample();

		void _ready() override;

		void _process(double delta) override;
		//void _physics_process(double delta) override;

	private:
		double testVal{ 0.0 };

	public:
		void set_testVal(const double p_testVal);
		double get_testVal() const;

	};

}

#endif

