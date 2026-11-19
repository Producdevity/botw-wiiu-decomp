#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104899e8;
extern "C" RuntimeTag data_104899e4;
extern "C" const RuntimeVTable data_1007ab94;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1007ab84;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1007ab74;

typedef Token<&data_104899e8, &data_104899e4, &data_1007ab94> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1007ab84> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1007ab74> Type2;

extern "C" bool fn_022ec874(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
