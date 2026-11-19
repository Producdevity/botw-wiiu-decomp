#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489608;
extern "C" RuntimeTag data_1048960c;
extern "C" const RuntimeVTable data_100709ac;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1007099c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1007098c;

typedef Token<&data_10489608, &data_1048960c, &data_100709ac> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1007099c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1007098c> Type2;

extern "C" bool fn_022a1d5c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
