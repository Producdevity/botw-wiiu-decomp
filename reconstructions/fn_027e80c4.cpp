#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048cffc;
extern "C" RuntimeTag data_1048d000;
extern "C" const RuntimeVTable data_10136be4;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10136bac;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10136b9c;

typedef Token<&data_1048cffc, &data_1048d000, &data_10136be4> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10136bac> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10136b9c> Type2;

extern "C" bool fn_027e80c4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
