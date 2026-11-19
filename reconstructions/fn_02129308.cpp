#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487ad0;
extern "C" RuntimeTag data_10487acc;
extern "C" const RuntimeVTable data_10027d18;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10027d08;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10027cf8;

typedef Token<&data_10487ad0, &data_10487acc, &data_10027d18> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10027d08> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10027cf8> Type2;

extern "C" bool fn_02129308(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
