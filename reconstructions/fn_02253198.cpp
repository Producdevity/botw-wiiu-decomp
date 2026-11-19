#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489058;
extern "C" RuntimeTag data_1048905c;
extern "C" const RuntimeVTable data_1006231c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1006230c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100622fc;

typedef Token<&data_10489058, &data_1048905c, &data_1006231c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1006230c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100622fc> Type2;

extern "C" bool fn_02253198(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
