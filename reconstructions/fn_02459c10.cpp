#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048af14;
extern "C" RuntimeTag data_1048af18;
extern "C" const RuntimeVTable data_100ba5c8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100ba5b8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100ba5a8;

typedef Token<&data_1048af14, &data_1048af18, &data_100ba5c8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100ba5b8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100ba5a8> Type2;

extern "C" bool fn_02459c10(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
