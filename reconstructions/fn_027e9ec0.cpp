#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048d038;
extern "C" RuntimeTag data_1048d03c;
extern "C" const RuntimeVTable data_10137334;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10137324;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10137314;

typedef Token<&data_1048d038, &data_1048d03c, &data_10137334> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10137324> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10137314> Type2;

extern "C" bool fn_027e9ec0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
