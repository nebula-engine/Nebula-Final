#ifndef NEB_FIN_TMP_CHILD_HPP
#define NEB_FIN_TMP_CHILD_HPP

#include <neb/core/tmp/Child.hpp>

#include <neb/fin/app/util/decl.hpp>

namespace neb { namespace fin { namespace tmp {
	template<class T> class Child:
		virtual public neb::fnd::tmp::Child<T>
	{
		public:
			neb::fin::app::base*	get_fin_app()
			{
				auto app = neb::fnd::tmp::Child<T>::get_fnd_app();
			}
	};
}}}

#endif
