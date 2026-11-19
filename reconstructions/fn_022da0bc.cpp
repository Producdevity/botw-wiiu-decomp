#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104898f8;
extern "C" RuntimeTag data_104898f4;
extern "C" const RuntimeVTable data_10077ddc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10077dcc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10077dbc;

typedef Token<&data_104898f8, &data_104898f4, &data_10077ddc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10077dcc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10077dbc> Type2;

extern "C" bool fn_022da0bc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
