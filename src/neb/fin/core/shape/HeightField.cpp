
#include <neb/fin/core/shape/HeightField.hpp>

typedef neb::fin::core::shape::HeightField::Base THIS;

void			THIS::init(THIS::parent_t * const & p)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	
	setParent(p);
	
	//neb::core::core::shape::base::__init(p);
	//neb::gfx::core::shape::base::__init(p);
	neb::phx::core::shape::HeightField::Base::__init(p);
}
void			THIS::release()
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	
	neb::core::core::shape::base::__release();
	neb::gfx::core::shape::base::__release();
	neb::phx::core::shape::base::__release();
}
void		THIS::step(gal::etc::timestep  const & ts)
{
}
void		THIS::load(ba::polymorphic_iarchive & ar, unsigned int const &)
{
}
void		THIS::save(ba::polymorphic_oarchive & ar, unsigned int const &) const
{
}


