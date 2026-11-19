#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048d790;
extern "C" RuntimeTag data_1048d794;
extern "C" const RuntimeVTable data_10149d20;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10149d10;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10149d00;

typedef Token<&data_1048d790, &data_1048d794, &data_10149d20> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10149d10> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10149d00> Type2;

extern "C" bool fn_0286c9c8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
