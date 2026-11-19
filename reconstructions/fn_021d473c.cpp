#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488654;
extern "C" RuntimeTag data_10488658;
extern "C" const RuntimeVTable data_10046d48;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10046d38;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10046d28;

typedef Token<&data_10488654, &data_10488658, &data_10046d48> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10046d38> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10046d28> Type2;

extern "C" bool fn_021d473c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
