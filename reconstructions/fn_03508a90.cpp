#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104900f4;
extern "C" RuntimeTag data_10494084;
extern "C" const RuntimeVTable data_102d2dd4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102d2dc4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102d2db4;

typedef Token<&data_104900f4, &data_10494084, &data_102d2dd4> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102d2dc4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102d2db4> Type2;

extern "C" bool fn_03508a90(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
