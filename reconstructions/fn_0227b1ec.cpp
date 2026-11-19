#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104893c8;
extern "C" RuntimeTag data_104893cc;
extern "C" const RuntimeVTable data_1006ac70;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1006ac60;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1006ac50;

typedef Token<&data_104893c8, &data_104893cc, &data_1006ac70> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1006ac60> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1006ac50> Type2;

extern "C" bool fn_0227b1ec(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
