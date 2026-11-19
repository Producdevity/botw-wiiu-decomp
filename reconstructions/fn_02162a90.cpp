#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487f08;
extern "C" RuntimeTag data_10487f0c;
extern "C" const RuntimeVTable data_1003264c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003263c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003262c;

typedef Token<&data_10487f08, &data_10487f0c, &data_1003264c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1003263c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1003262c> Type2;

extern "C" bool fn_02162a90(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
