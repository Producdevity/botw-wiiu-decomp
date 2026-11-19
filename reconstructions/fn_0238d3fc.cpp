#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a35c;
extern "C" RuntimeTag data_1048a358;
extern "C" const RuntimeVTable data_10096450;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10096430;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10096420;

typedef Token<&data_1048a35c, &data_1048a358, &data_10096450> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10096430> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10096420> Type2;

extern "C" bool fn_0238d3fc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
