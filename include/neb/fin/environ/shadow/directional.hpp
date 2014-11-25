#ifndef NEBULA_FIN_ENVIRON_SHADOW_DIRECTIONAL_HPP
#define NEBULA_FIN_ENVIRON_SHADOW_DIRECTIONAL_HPP

#include <neb/fin/environ/base.hpp>

#include <neb/gfx/environ/shadow/directional.hpp>

namespace neb { namespace fin { namespace environ { namespace shadow {
	/** @brief base
	 */
	class directional:
		virtual public neb::gfx::environ::shadow::directional,
       		virtual public neb::fin::environ::base
	{
	};
}}}}


#endif
