#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488040;
extern "C" RuntimeTag data_10488044;
extern "C" const RuntimeVTable data_1003507c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003506c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003505c;

typedef Token<&data_10488040, &data_10488044, &data_1003507c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1003506c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1003505c> Type2;

extern "C" bool fn_021709bc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
