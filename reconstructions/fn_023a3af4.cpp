#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a4c4;
extern "C" RuntimeTag data_1048a4c8;
extern "C" const RuntimeVTable data_1009aa90;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1009aa80;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1009aa70;

typedef Token<&data_1048a4c4, &data_1048a4c8, &data_1009aa90> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1009aa80> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1009aa70> Type2;

extern "C" bool fn_023a3af4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
