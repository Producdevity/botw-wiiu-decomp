#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489dc0;
extern "C" RuntimeTag data_10489dc4;
extern "C" const RuntimeVTable data_102b1374;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102b1364;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102b1354;

typedef Token<&data_10489dc0, &data_10489dc4, &data_102b1374> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102b1364> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102b1354> Type2;

extern "C" bool fn_033291b0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
