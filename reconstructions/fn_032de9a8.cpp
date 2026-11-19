#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490258;
extern "C" RuntimeTag data_10492d94;
extern "C" const RuntimeVTable data_102aae54;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_102aae44;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102aae34;

typedef Token<&data_10490258, &data_10492d94, &data_102aae54> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_102aae44> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102aae34> Type2;

extern "C" bool fn_032de9a8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
