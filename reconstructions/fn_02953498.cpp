#include "botw/member_callback.h"

namespace {
struct Owner {
    unsigned char unknown_000[0x394];
    void* dispatcher;
};

}

extern "C" const MemberCallback data_1016d3a4;

namespace {
inline bool impl(Owner* owner, int event, int a, int b, int c) {
    void* dispatcher = owner->dispatcher;
    return fn_0370f324(dispatcher, event, a, b, c, data_1016d3a4, 1);
}
}

extern "C" bool fn_02953498(void* owner, int event, int a, int b, int c) {
    return impl(static_cast<Owner*>(owner), event, a, b, c);
}
