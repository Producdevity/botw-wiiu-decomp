#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104899c4;
extern "C" RuntimeTag data_104899c8;
extern "C" const RuntimeVTable data_1007a770;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1007a760;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1007a750;

typedef Token<&data_104899c4, &data_104899c8, &data_1007a770> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1007a760> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1007a750> Type2;

extern "C" bool fn_022e9874(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
