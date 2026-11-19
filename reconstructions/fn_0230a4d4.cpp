#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489c40;
extern "C" RuntimeTag data_10489c44;
extern "C" const RuntimeVTable data_10080f18;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10080f08;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10080ef8;

typedef Token<&data_10489c40, &data_10489c44, &data_10080f18> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10080f08> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10080ef8> Type2;

extern "C" bool fn_0230a4d4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
