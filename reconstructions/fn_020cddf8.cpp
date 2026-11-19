#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487514;
extern "C" RuntimeTag data_10487510;
extern "C" const RuntimeVTable data_10018ce8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10018cd8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10018cc8;

typedef Token<&data_10487514, &data_10487510, &data_10018ce8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10018cd8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10018cc8> Type2;

extern "C" bool fn_020cddf8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
