#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c5ec;
extern "C" RuntimeTag data_1048c5f0;
extern "C" const RuntimeVTable data_101108fc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101108ec;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101108dc;

typedef Token<&data_1048c5ec, &data_1048c5f0, &data_101108fc> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101108ec> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101108dc> Type2;

extern "C" bool fn_026c0e78(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
