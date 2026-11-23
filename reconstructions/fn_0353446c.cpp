#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048e4ac;
extern "C" RuntimeTag data_10494248;
extern "C" const RuntimeVTable data_102d99fc;
extern "C" unsigned data_10486c80;
extern "C" RuntimeTag data_104912b4;
extern "C" const RuntimeVTable data_102d9984;
extern "C" unsigned data_10486c7c;
extern "C" RuntimeTag data_104912b0;
extern "C" const RuntimeVTable data_102d9964;

typedef Token<&data_1048e4ac, &data_10494248, &data_102d99fc> Type0;
typedef Token<&data_10486c80, &data_104912b4, &data_102d9984> Type1;
typedef Token<&data_10486c7c, &data_104912b0, &data_102d9964> Type2;

extern "C" bool fn_0353446c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
