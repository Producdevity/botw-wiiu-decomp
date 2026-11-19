#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048728c;
extern "C" RuntimeTag data_10487290;
extern "C" const RuntimeVTable data_10015204;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100151f4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100151e4;

typedef Token<&data_1048728c, &data_10487290, &data_10015204> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100151f4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100151e4> Type2;

extern "C" bool fn_020b4ee8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
