#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c8dc;
extern "C" RuntimeTag data_1048c8e0;
extern "C" const RuntimeVTable data_1011d480;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1011d470;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1011d460;

typedef Token<&data_1048c8dc, &data_1048c8e0, &data_1011d480> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1011d470> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1011d460> Type2;

extern "C" bool fn_02720c04(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
