#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048dd4c;
extern "C" RuntimeTag data_1048dd50;
extern "C" const RuntimeVTable data_10161c24;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10161c14;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10161c04;

typedef Token<&data_1048dd4c, &data_1048dd50, &data_10161c24> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10161c14> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10161c04> Type2;

extern "C" bool fn_0290e014(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
