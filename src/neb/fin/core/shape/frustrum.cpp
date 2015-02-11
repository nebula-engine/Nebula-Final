
#include <neb/phx/util/convert.hpp>
#include <neb/phx/test.hpp>

#include <neb/gfx/camera/proj/base.hpp>

#include <neb/fin/core/shape/frustrum.hpp>
#include <neb/fin/app/base.hpp>

neb::fin::core::shape::frustrum::frustrum()
{
}
physx::PxGeometry*		neb::fin::core::shape::frustrum::to_geo() {
	
	auto c = camera_.lock();
	assert(c);

	auto app = get_fin_app();
	
	return app->frustrum_geometry(c->proj());
}



