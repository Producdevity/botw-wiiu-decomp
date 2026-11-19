#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488a18;
extern "C" RuntimeTag data_10488a1c;
extern "C" const RuntimeVTable data_10050824;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10050814;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10050804;

typedef Token<&data_10488a18, &data_10488a1c, &data_10050824> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10050814> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10050804> Type2;

extern "C" bool fn_021fc938(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
