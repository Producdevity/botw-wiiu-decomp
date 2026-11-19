#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ab98;
extern "C" RuntimeTag data_1048ab94;
extern "C" const RuntimeVTable data_100afaf0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100afae0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100afad0;

typedef Token<&data_1048ab98, &data_1048ab94, &data_100afaf0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100afae0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100afad0> Type2;

extern "C" bool fn_0241d92c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
