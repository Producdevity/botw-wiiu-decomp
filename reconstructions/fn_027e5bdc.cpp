#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048cfcc;
extern "C" RuntimeTag data_1048cfd0;
extern "C" const RuntimeVTable data_1013624c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1013623c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1013622c;

typedef Token<&data_1048cfcc, &data_1048cfd0, &data_1013624c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1013623c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1013622c> Type2;

extern "C" bool fn_027e5bdc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
