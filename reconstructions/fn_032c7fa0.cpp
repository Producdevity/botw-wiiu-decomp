#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488110;
extern "C" RuntimeTag data_10488114;
extern "C" const RuntimeVTable data_102a7a2c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102a7a1c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102a7a0c;

typedef Token<&data_10488110, &data_10488114, &data_102a7a2c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102a7a1c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102a7a0c> Type2;

extern "C" bool fn_032c7fa0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
