#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488ad8;
extern "C" RuntimeTag data_10488adc;
extern "C" const RuntimeVTable data_10052c28;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10052c18;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10052c08;

typedef Token<&data_10488ad8, &data_10488adc, &data_10052c28> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10052c18> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10052c08> Type2;

extern "C" bool fn_02206c98(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
