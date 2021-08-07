#include <gtkmm.h>

int main() {
	auto app = Gtk::Application::create("com.ouwou.gtkmm-msys-test");

	Gtk::Window window;
	window.set_default_size(300, 300);
	window.set_title("MSYS demo");
	window.show();

	Gtk::Label label("Test label");
	window.add(label);
	label.show();

	return app->run(window);
}
