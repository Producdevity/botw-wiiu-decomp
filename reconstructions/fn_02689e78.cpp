#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c4a0;
extern "C" RuntimeTag data_1048c49c;
extern "C" const RuntimeVTable data_101097a8;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10109770;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10109760;

typedef Token<&data_1048c4a0, &data_1048c49c, &data_101097a8> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10109770> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10109760> Type2;

extern "C" bool fn_02689e78(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
