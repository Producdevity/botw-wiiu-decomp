#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487c04;
extern "C" RuntimeTag data_10487c08;
extern "C" const RuntimeVTable data_1002ab28;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1002ab18;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1002ab08;

typedef Token<&data_10487c04, &data_10487c08, &data_1002ab28> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1002ab18> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1002ab08> Type2;

extern "C" bool fn_0213cae8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
