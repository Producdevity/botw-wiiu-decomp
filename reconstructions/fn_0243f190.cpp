#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ad94;
extern "C" RuntimeTag data_1048ad98;
extern "C" const RuntimeVTable data_100b5654;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100b55dc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100b55cc;

typedef Token<&data_1048ad94, &data_1048ad98, &data_100b5654> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100b55dc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100b55cc> Type2;

extern "C" bool fn_0243f190(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
