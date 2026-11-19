#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048cb84;
extern "C" RuntimeTag data_1048cb80;
extern "C" const RuntimeVTable data_1012470c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101246fc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101246ec;

typedef Token<&data_1048cb84, &data_1048cb80, &data_1012470c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101246fc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101246ec> Type2;

extern "C" bool fn_02755b50(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
