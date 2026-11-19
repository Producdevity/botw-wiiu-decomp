#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487aec;
extern "C" RuntimeTag data_10487ae8;
extern "C" const RuntimeVTable data_10028550;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10028540;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10028530;

typedef Token<&data_10487aec, &data_10487ae8, &data_10028550> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10028540> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10028530> Type2;

extern "C" bool fn_0212f3d8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
