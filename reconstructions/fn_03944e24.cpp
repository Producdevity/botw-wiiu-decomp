#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10495d0c;
extern "C" RuntimeTag data_10496c40;
extern "C" const RuntimeVTable data_1033f144;
extern "C" unsigned data_1048637c;
extern "C" RuntimeTag data_10493bbc;
extern "C" const RuntimeVTable data_1033f134;
extern "C" unsigned data_10485e28;
extern "C" RuntimeTag data_10486b20;
extern "C" const RuntimeVTable data_1033f114;

typedef Token<&data_10495d0c, &data_10496c40, &data_1033f144> Type0;
typedef Token<&data_1048637c, &data_10493bbc, &data_1033f134> Type1;
typedef Token<&data_10485e28, &data_10486b20, &data_1033f114> Type2;

extern "C" bool fn_03944e24(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
