#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489274;
extern "C" RuntimeTag data_10489278;
extern "C" const RuntimeVTable data_10067d28;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10067d18;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10067d08;

typedef Token<&data_10489274, &data_10489278, &data_10067d28> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10067d18> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10067d08> Type2;

extern "C" bool fn_0226d670(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
