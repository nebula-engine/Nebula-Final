
#include <neb/phx/test.hpp>

#include <neb/fin/camera/proj/Base.hpp>

void		neb::fin::camera::proj::Base::calculate_geometry()
{
	_M_px_geometry = neb::frustrum_geometry(_M_matrix);
}


