#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ab1c;
extern "C" RuntimeTag data_1048ab20;
extern "C" const RuntimeVTable data_100ae6dc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100ae6cc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100ae6bc;

typedef Token<&data_1048ab1c, &data_1048ab20, &data_100ae6dc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100ae6cc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100ae6bc> Type2;

extern "C" bool fn_024188b0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
