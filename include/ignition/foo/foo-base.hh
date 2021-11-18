#ifndef SRC_GUARD_FOO_BASE_HH
#define SRC_GUARD_FOO_BASE_HH 1

namespace ignition 
{
  namespace foo 
  {
      inline namespace IGNITION_FOO_VERSION_NAMESPACE
      {
	class FooBase {
	    public:
		int class_member = 1;
	};
      }
  }
}

#endif
