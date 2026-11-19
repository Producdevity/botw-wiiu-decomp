#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104881d4;
extern "C" RuntimeTag data_104881d0;
extern "C" const RuntimeVTable data_102821c8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102821b8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102821a8;

typedef Token<&data_104881d4, &data_104881d0, &data_102821c8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102821b8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102821a8> Type2;

extern "C" bool fn_03116dd0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
