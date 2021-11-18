/* vim: set sw=4 sts=4 et foldmethod=syntax : */

#ifndef SRC_GUARD_FOO1_HH
#define SRC_GUARD_FOO1_HH 1

#include <ignition/foo/foo-base.hh>

namespace ignition 
{
  namespace foo 
  {
      inline namespace IGNITION_FOO_VERSION_NAMESPACE
      {
        class Foo : FooBase {
            void my_foo_function(int param1);
        };
      }
   }
}

#endif
