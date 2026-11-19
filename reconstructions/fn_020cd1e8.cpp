#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487508;
extern "C" RuntimeTag data_1048750c;
extern "C" const RuntimeVTable data_10018b7c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10018b6c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10018b5c;

typedef Token<&data_10487508, &data_1048750c, &data_10018b7c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10018b6c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10018b5c> Type2;

extern "C" bool fn_020cd1e8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
