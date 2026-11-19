#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a238;
extern "C" RuntimeTag data_1048a23c;
extern "C" const RuntimeVTable data_10092c88;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10092b70;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10092b60;

typedef Token<&data_1048a238, &data_1048a23c, &data_10092c88> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10092b70> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10092b60> Type2;

extern "C" bool fn_0237774c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
