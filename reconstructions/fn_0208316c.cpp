#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048705c;
extern "C" RuntimeTag data_10487060;
extern "C" const RuntimeVTable data_1000f58c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1000f57c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1000f56c;

typedef Token<&data_1048705c, &data_10487060, &data_1000f58c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1000f57c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1000f56c> Type2;

extern "C" bool fn_0208316c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
