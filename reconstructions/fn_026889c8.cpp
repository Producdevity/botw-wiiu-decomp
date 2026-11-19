#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c498;
extern "C" RuntimeTag data_1048c494;
extern "C" const RuntimeVTable data_10109590;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10109580;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10109570;

typedef Token<&data_1048c498, &data_1048c494, &data_10109590> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10109580> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10109570> Type2;

extern "C" bool fn_026889c8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
