#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487f64;
extern "C" RuntimeTag data_10487f68;
extern "C" const RuntimeVTable data_10033370;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10033360;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10033350;

typedef Token<&data_10487f64, &data_10487f68, &data_10033370> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10033360> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10033350> Type2;

extern "C" bool fn_02165a78(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
