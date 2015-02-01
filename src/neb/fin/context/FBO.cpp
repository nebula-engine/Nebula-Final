#include <neb/gfx/texture.hpp>

#include <neb/fin/context/fbo.hpp>

typedef neb::fin::context::fbo THIS;
typedef neb::core::environ::shadow::Directional ESD;

void			THIS::init(parent_t * const parent)
{
	setParent(parent);

	neb::gfx::context::fbo::init(parent);
}
void			THIS::render()
{
	neb::gfx::context::fbo::render();
}
std::weak_ptr<ESD>	THIS::createEnvironShadowDirectional()
{
	return neb::fin::environ::util::Parent::createEnvironShadowDirectional();
}
void			THIS::setTexture(
		std::shared_ptr<neb::core::itf::shared> tex)
{
	auto t = std::dynamic_pointer_cast<neb::gfx::texture>(tex);
	texture_ = t;
}

