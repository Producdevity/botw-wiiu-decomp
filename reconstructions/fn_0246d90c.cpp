#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b050;
extern "C" RuntimeTag data_1048b054;
extern "C" const RuntimeVTable data_100be218;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100be208;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100be1f8;

typedef Token<&data_1048b050, &data_1048b054, &data_100be218> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100be208> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100be1f8> Type2;

extern "C" bool fn_0246d90c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
