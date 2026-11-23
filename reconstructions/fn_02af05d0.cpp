#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486254;
extern "C" RuntimeTag data_10486510;
extern "C" const RuntimeVTable data_101a8838;
extern "C" unsigned data_1048624c;
extern "C" RuntimeTag data_104864ac;
extern "C" const RuntimeVTable data_101a87b0;
extern "C" unsigned data_1048623c;
extern "C" RuntimeTag data_104864a8;
extern "C" const RuntimeVTable data_101a8790;

typedef Token<&data_10486254, &data_10486510, &data_101a8838> Type0;
typedef Token<&data_1048624c, &data_104864ac, &data_101a87b0> Type1;
typedef Token<&data_1048623c, &data_104864a8, &data_101a8790> Type2;

extern "C" bool fn_02af05d0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
