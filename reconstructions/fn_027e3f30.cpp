#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048cf8c;
extern "C" RuntimeTag data_1048cf90;
extern "C" const RuntimeVTable data_10135b2c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10135b1c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10135b0c;

typedef Token<&data_1048cf8c, &data_1048cf90, &data_10135b2c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10135b1c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10135b0c> Type2;

extern "C" bool fn_027e3f30(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
