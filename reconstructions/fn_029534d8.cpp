#include "botw/member_callback.h"

namespace {
struct Owner {
    unsigned char unknown_000[0x394];
    void* dispatcher;
};

}

extern "C" const MemberCallback data_1016d3ac;

extern "C" bool fn_029534d8(Owner* owner, int event, int a, int b, int c) {
    void* dispatcher = owner->dispatcher;
    return fn_0370f324(dispatcher, event, a, b, c, data_1016d3ac, 1);
}
