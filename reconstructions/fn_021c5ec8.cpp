#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104885a8;
extern "C" RuntimeTag data_104885ac;
extern "C" const RuntimeVTable data_10043f68;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10043f58;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10043f48;

typedef Token<&data_104885a8, &data_104885ac, &data_10043f68> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10043f58> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10043f48> Type2;

extern "C" bool fn_021c5ec8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
