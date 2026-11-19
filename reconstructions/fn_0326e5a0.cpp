#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490138;
extern "C" RuntimeTag data_10492938;
extern "C" const RuntimeVTable data_1029ba7c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1029ba6c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1029ba5c;

typedef Token<&data_10490138, &data_10492938, &data_1029ba7c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1029ba6c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1029ba5c> Type2;

extern "C" bool fn_0326e5a0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
