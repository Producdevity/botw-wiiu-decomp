#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489adc;
extern "C" RuntimeTag data_10489ae0;
extern "C" const RuntimeVTable data_1007d56c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1007d55c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1007d54c;

typedef Token<&data_10489adc, &data_10489ae0, &data_1007d56c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1007d55c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1007d54c> Type2;

extern "C" bool fn_022fd01c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
