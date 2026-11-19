#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104885d8;
extern "C" RuntimeTag data_104885dc;
extern "C" const RuntimeVTable data_10044d40;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10044d30;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10044d20;

typedef Token<&data_104885d8, &data_104885dc, &data_10044d40> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10044d30> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10044d20> Type2;

extern "C" bool fn_021ca494(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
