#include <neb/fin/gfx_phx/core/shape/box.hpp>
#include <neb/fin/gfx_phx/core/shape/util/parent.hpp>

neb::fin::gfx_phx::core::shape::box::deleter::deleter()
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}
neb::fin::gfx_phx::core::shape::box::deleter::~deleter()
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}
void	neb::fin::gfx_phx::core::shape::box::deleter::operator()(box* p) const
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;

	p->release();

	delete p;
}

neb::fin::gfx_phx::core::shape::box::box(std::shared_ptr<neb::fin::gfx_phx::core::shape::util::parent> parent):
	neb::core::core::shape::base(parent),
	neb::gfx::core::shape::base(parent),
	neb::gfx::core::shape::box(parent),
	neb::phx::core::shape::base(parent),
	neb::phx::core::shape::box(parent),
	neb::fin::gfx_phx::core::shape::base(parent)
{
}
neb::fin::gfx_phx::core::shape::box::~box()
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}
void		neb::fin::gfx_phx::core::shape::box::init() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	neb::core::core::shape::base::init();

	neb::gfx::core::shape::base::init();
	neb::gfx::core::shape::box::init();

	neb::phx::core::shape::base::init();
	//neb::phx::core::shape::box::init();

	neb::fin::gfx_phx::core::shape::base::init();
}
void		neb::fin::gfx_phx::core::shape::box::release() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;

	neb::core::core::shape::base::release();

	neb::gfx::core::shape::base::release();
	neb::gfx::core::shape::box::release();

	neb::phx::core::shape::base::release();
	//neb::phx::core::shape::box::release();

	neb::fin::gfx_phx::core::shape::base::release();
	
}
void		neb::fin::gfx_phx::core::shape::box::step(gal::etc::timestep const & ts) {
}


