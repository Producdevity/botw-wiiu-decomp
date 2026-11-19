#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048bb4c;
extern "C" RuntimeTag data_1048bb48;
extern "C" const RuntimeVTable data_100e543c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100e542c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100e541c;

typedef Token<&data_1048bb4c, &data_1048bb48, &data_100e543c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100e542c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100e541c> Type2;

extern "C" bool fn_02585ad4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
