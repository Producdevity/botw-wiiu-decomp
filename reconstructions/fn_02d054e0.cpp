#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104901fc;
extern "C" RuntimeTag data_104911a4;
extern "C" const RuntimeVTable data_101dee98;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101dee88;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101dee78;

typedef Token<&data_104901fc, &data_104911a4, &data_101dee98> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101dee88> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101dee78> Type2;

extern "C" bool fn_02d054e0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
