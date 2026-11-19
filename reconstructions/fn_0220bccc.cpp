#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488b3c;
extern "C" RuntimeTag data_10488b38;
extern "C" const RuntimeVTable data_100539d0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10053880;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10053870;

typedef Token<&data_10488b3c, &data_10488b38, &data_100539d0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10053880> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10053870> Type2;

extern "C" bool fn_0220bccc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
