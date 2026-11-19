#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048e0b8;
extern "C" RuntimeTag data_1048e0bc;
extern "C" const RuntimeVTable data_1016ba40;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1016ba30;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1016ba20;

typedef Token<&data_1048e0b8, &data_1048e0bc, &data_1016ba40> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1016ba30> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1016ba20> Type2;

extern "C" bool fn_0293ef7c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
