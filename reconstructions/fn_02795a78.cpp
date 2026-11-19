#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ce20;
extern "C" RuntimeTag data_1048ce1c;
extern "C" const RuntimeVTable data_1012db28;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1012db18;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1012db08;

typedef Token<&data_1048ce20, &data_1048ce1c, &data_1012db28> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1012db18> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1012db08> Type2;

extern "C" bool fn_02795a78(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
