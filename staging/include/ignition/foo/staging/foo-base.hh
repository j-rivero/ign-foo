#ifndef SRC_GUARD_FOO_BASE_HH
#define SRC_GUARD_FOO_BASE_HH 1

#include <string>

namespace ignition 
{
  namespace foo 
  {
    namespace staging
    {
      inline namespace IGNITION_FOO_VERSION_NAMESPACE
      {
        class FooBase {
            public:
                // changed to return type
                std::string class_member;
        };
      }
    }
  }
}

#endif
