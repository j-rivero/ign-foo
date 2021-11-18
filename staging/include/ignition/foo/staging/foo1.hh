#ifndef SRC_GUARD_FOO1_HH
#define SRC_GUARD_FOO1_HH 1

#include <ignition/foo/foo-base.hh>

namespace ignition 
{
  namespace foo 
  {
    namespace staging
    {
      inline namespace IGNITION_FOO_VERSION_NAMESPACE
      {
        class Foo : FooBase {
	  // add a new parameter to the method
	  void my_foo_function(int param1, int param2);
	};
      }
    }
  }
}

#endif
