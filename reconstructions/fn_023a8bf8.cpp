#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a53c;
extern "C" RuntimeTag data_1048a540;
extern "C" const RuntimeVTable data_1009c044;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1009c034;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1009c024;

typedef Token<&data_1048a53c, &data_1048a540, &data_1009c044> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1009c034> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1009c024> Type2;

extern "C" bool fn_023a8bf8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
