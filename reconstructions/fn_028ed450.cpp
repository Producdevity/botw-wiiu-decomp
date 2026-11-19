#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048dc18;
extern "C" RuntimeTag data_1048dc1c;
extern "C" const RuntimeVTable data_1015cdcc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1015cdbc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1015cdac;

typedef Token<&data_1048dc18, &data_1048dc1c, &data_1015cdcc> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1015cdbc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1015cdac> Type2;

extern "C" bool fn_028ed450(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
