#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104882f4;
extern "C" RuntimeTag data_104882f8;
extern "C" const RuntimeVTable data_1003c72c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003c71c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003c70c;

typedef Token<&data_104882f4, &data_104882f8, &data_1003c72c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1003c71c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1003c70c> Type2;

extern "C" bool fn_0219c968(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
