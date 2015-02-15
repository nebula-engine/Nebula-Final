#ifndef NEBULA_FIN_ENVIRON_VIS_DEPTH_HPP
#define NEBULA_FIN_ENVIRON_VIS_DEPTH_HPP

#include <neb/gfx/environ/vis_depth.hpp>

#include <neb/fin/environ/base.hpp>

namespace neb { namespace fin { namespace environ { namespace visualization {
	/** @brief base
	 */
	class Depth:
		virtual public neb::gfx::environ::vis_depth,
		virtual public neb::fin::environ::base
	{
		public:
			virtual void		init(parent_t * const & p);
	};
}}}}

#endif
