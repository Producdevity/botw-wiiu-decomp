#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104870b8;
extern "C" RuntimeTag data_104870bc;
extern "C" const RuntimeVTable data_100102ec;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100102dc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100102cc;

typedef Token<&data_104870b8, &data_104870bc, &data_100102ec> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100102dc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100102cc> Type2;

extern "C" bool fn_02087ba0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
