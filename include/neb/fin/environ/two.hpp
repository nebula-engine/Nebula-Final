#ifndef NEBULA_FIN_ENVIRON_TWO_HPP
#define NEBULA_FIN_ENVIRON_TWO_HPP

#include <neb/gfx/environ/two.hpp>

#include <neb/fin/environ/base.hpp>

namespace neb { namespace fin { namespace environ {
	/** @brief base
	 */
	class two:
		virtual public neb::gfx::environ::two,
		virtual public neb::fin::environ::base
	{
	};
}}}

#endif



