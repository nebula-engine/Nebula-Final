#ifndef NEB_FIN_CONTEXT_UTIL_PARENT_HH
#define NEB_FIN_CONTEXT_UTIL_PARENT_HH

#include <neb/gfx/context/util/Parent.hh>

namespace neb { namespace fin { namespace context { namespace util {
	/***/
	class parent:
		virtual public neb::gfx::context::util::parent
	{
		public:
			typedef neb::core::context::Window C_W;
			//virtual void			init();
			//virtual void			release();
			//virtual void			step(gal::etc::timestep const & ts);
			//virtual void			render();
			virtual std::weak_ptr<neb::core::context::FBO>		createContextFBO();
			virtual std::weak_ptr<neb::core::context::FBOM>		createContextFBOMulti();
			virtual std::weak_ptr<C_W>				createContextWindow();
			virtual std::weak_ptr<C_W>				createContextVisDepth();
	};
}}}}

#endif


