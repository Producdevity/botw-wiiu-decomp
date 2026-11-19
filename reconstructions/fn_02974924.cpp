#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048e28c;
extern "C" RuntimeTag data_1048e290;
extern "C" const RuntimeVTable data_10171f08;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10171ef8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10171ee8;

typedef Token<&data_1048e28c, &data_1048e290, &data_10171f08> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10171ef8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10171ee8> Type2;

extern "C" bool fn_02974924(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
