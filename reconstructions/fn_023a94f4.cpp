#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a554;
extern "C" RuntimeTag data_1048a558;
extern "C" const RuntimeVTable data_1009c3b4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1009c3a4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1009c394;

typedef Token<&data_1048a554, &data_1048a558, &data_1009c3b4> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1009c3a4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1009c394> Type2;

extern "C" bool fn_023a94f4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
