#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048cec0;
extern "C" RuntimeTag data_1048cec4;
extern "C" const RuntimeVTable data_10131efc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10131eec;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10131edc;

typedef Token<&data_1048cec0, &data_1048cec4, &data_10131efc> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10131eec> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10131edc> Type2;

extern "C" bool fn_027c8768(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
